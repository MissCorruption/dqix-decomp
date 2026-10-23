#include <globaldefs.h>

struct Struct_02012de8 {
    unsigned int unknown_0_;
};

// USA: func_02046708
extern "C" ARM int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1) {
    return (arg0->unknown_0_ & arg1) != 0;
}
