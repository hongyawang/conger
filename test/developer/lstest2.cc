#include "Lstest2Marshal.h"

using namespace Borealis;


const string ip   = "127.0.0.1";     // client host ip.
const int port = 15000;           // client (and input) port.

uint32 batch_size = 10;           // Number of input tuples per batch.
uint32 base_sleep_time = 1000;


// send a random input
void  Lstest2Marshal::sentInput1()
{
  static long old_time = Time::now().to_usecs();
  static int count = 0;
  static uint32 sleep_time = base_sleep_time * 5;

  long now = Time::now().to_usecs();
  if (now - old_time > 1000000)
  {
    ++count;
    if (count == 4)
    {
      sleep_time /= 5;
    }
    if (count == 8)
    {
      sleep_time *= 5;
      count = 0;
    }
    old_time = now;
  }

  for (unsigned int i = 0; i < batch_size; ++i)
  {
    Input1  tuple;
    tuple._data.f1 = (int)(drand48() * 10);
    tuple._data.f2 = (int)(drand48() * 10);
    DEBUG << "Sending Input1(" << tuple._data.f1 << ", "
          << tuple._data.f2  << ")";
    batchInput1( &tuple );
  }

  sendInput1( sleep_time );
}

// send a random input
void  Lstest2Marshal::sentInput2()
{
  static long old_time = Time::now().to_usecs();
  static int count = 0;
  static uint32 sleep_time = base_sleep_time;

  long now = Time::now().to_usecs();
  if (now - old_time > 1000000)
  {
    ++count;
    if (count == 4)
    {
      sleep_time *= 5;
    }
    if (count == 8)
    {
      sleep_time /= 5;
      count = 0;
    }
    old_time = now;
  }

  for (unsigned int i = 0; i < batch_size; ++i)
  {
    Input2  tuple;
    tuple._data.f1 = (int)(drand48() * 10);
    tuple._data.f2 = (int)(drand48() * 10);
    DEBUG << "Sending Input2(" << tuple._data.f1 << ", "
          << tuple._data.f2  << ")";
    batchInput2( &tuple );
  }

  sendInput2( sleep_time );
}


// Print the content of received tuples.
void  Lstest2Marshal::receivedOutput1( IntTuple  *tuple )
{
  static int count = 0;
  static long old_time = Time::now().to_usecs();

  ++count;
  long now = Time::now().to_usecs();
  if (now - old_time > 1000000)
  {
    cout << "Stream rate of c1 is " << count << "." << endl;
    old_time = now;
    count = 0;
  }
  DEBUG << "Receiving Output1(" << tuple->f1 << ", "
        << tuple->f2  << ")";

}

// Print the content of received tuples.
void  Lstest2Marshal::receivedOutput2( IntTuple  *tuple )
{
  static int count;
  static long old_time = Time::now().to_usecs();

  ++count;
  long now = Time::now().to_usecs();
  if (now - old_time > 1000000)
  {
    cout << "Stream rate of c2 is " << count << "." << endl;
    old_time = now;
    count = 0;
  }
  DEBUG << "Receiving Output1(" << tuple->f1 << ", "
        << tuple->f2  << ")";
}


////////////////////////////////////////////////////////////////////////////////
//
int  main( int  argc, const char  *argv[] )
{
    Lstest2Marshal   marshal;        // Client and I/O stream state.

    if (argc == 2)
      batch_size = atoi(argv[1]);

    marshal.open();

    // Send the first batch of tuples.  Queue up the next round with a delay.
    //
    marshal.sentInput1();
    marshal.sentInput2();

    // Run the client event loop.  Return only on an exception.
    //
    DEBUG  << "run the client event loop...";
    marshal.runClient();

}
