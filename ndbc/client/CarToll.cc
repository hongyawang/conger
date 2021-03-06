/*
 * DequeueMap.cpp
 *
 *  Created on: Oct 5, 2012
 *      Author: hellojinjie
 */

#include "common.h"
#include "MedusaClient.h"
#include "NMSTL/ptr"
#include "NMSTL/debug"
#include "TrafficOutputTuple.h"
#include <time.h>

BOREALIS_NAMESPACE_BEGIN

void pretty_print(CarTollTuple tuple)
{
    INFO << "车辆: " << tuple.car_id << ", 收费: " << tuple.toll
            << ", 公路: " << tuple.way << ", 方向: " << tuple.dir
            << ", 路段: " << tuple.seg;
}

Status handleOutput(ptr<StreamEvent> event)
{
    if (event->_stream == Name("cartoll"))
    {
        uint32 offset = 0;
        int32 index;

        offset = 0;
        index = 0;

        // For each tuple that was received
        for (index = 0; index < event->_inserted_count; index++)
        {
            //offset += HEADER_SIZE;
            CarTollTuple *tuple =
                    (CarTollTuple *) &event->_bin_tuples[offset];
            offset += sizeof(CarTollTuple);
            pretty_print(*tuple);
        }

    }
    else
    {
        //(DEBUG << (event->_stream.as_string()));
    }
    return Status(true);
}

class TestDequeueCarToll
{
public:
    TestDequeueCarToll()
    {

    }

    ptr<MedusaClient> medusaClient;

    void start()
    {
        medusaClient = ptr<MedusaClient>(new MedusaClient(InetAddress()));
        Status status;
        status = medusaClient->set_data_handler(
                InetAddress(
                        Util::form_endpoint("127.0.0.1:25000",
                                DEFAULT_MONITOR_PORT)), wrap(&handleOutput));
        DEBUG << status;

        //status = medusaClient->subscribe("outputstream");
        DEBUG << status;
        medusaClient->run();
    }

    ~TestDequeueCarToll()
    {

    }
};

BOREALIS_NAMESPACE_END

int main()
{
    Borealis::TestDequeueCarToll dequeue;
    dequeue.start();
}
