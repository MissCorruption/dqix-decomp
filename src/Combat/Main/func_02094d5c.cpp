#include <globaldefs.h>

struct Struct_02094d5c { char unknown_0_[0x14]; };
struct Struct_02015ef4_3 { struct Struct_02094d5c* unknown_0_; };

// USA: func_02094d5c
extern "C" ARM struct Struct_02094d5c* func_02094d5c(struct Struct_02015ef4_3* arg0, int arg1) {
    return arg0->unknown_0_ + arg1;
}
