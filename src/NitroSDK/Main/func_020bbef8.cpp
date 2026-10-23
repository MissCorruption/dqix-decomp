#include <globaldefs.h>

struct Struct_0210f3c0_3 { int unknown_0_; unsigned int unknown_4_; };
extern struct Struct_0210f3c0_3 data_0210f3c0;

// USA: func_020bbef8
extern "C" ARM void func_020bbef8(int arg0) {
    data_0210f3c0.unknown_4_ &= ~(1 << arg0);
}
