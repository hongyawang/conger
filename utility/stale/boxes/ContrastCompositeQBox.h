#ifndef CONTRAST_COMPOSITE_QBOX_H
#define CONTRAST_COMPOSITE_QBOX_H

#include "QBox.h"
#include "Expression.h"

BOREALIS_NAMESPACE_BEGIN

class ContrastCompositeQBox : public QBox
{
  friend class ContrastCompositeBoxState;

 public:
  ~ContrastCompositeQBox() {}
private:
    EvalContext _ctxt;
    vector<ptr<Expression> > _expressions;

    bool _pass_on_false_port;
    string _box_type;
    unsigned int _output_tuple_size;

    unsigned int _expr_count; // _expressions.size()

protected:
    void setup_impl() throw (AuroraException);
    void init_impl() throw (AuroraException);
    void run_impl(QBoxInvocation&) throw (AuroraException);

    list<void *> tuples;
    // packing and unpacking states
    void set_pending_box_state(ptr<AbstractBoxState> packed_box);
    ptr<AbstractBoxState> pack_state(bool delta_only = false);
    void unpack_state(ptr<AbstractBoxState> box_state) {};
};



class ContrastCompositeBoxState : public AbstractBoxState
{
 public:
  ContrastCompositeBoxState() {}
  ~ContrastCompositeBoxState() {}
};

BOREALIS_NAMESPACE_END

#endif
