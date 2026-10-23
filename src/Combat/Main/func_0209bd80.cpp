#include <globaldefs.h>

struct Struct_0209bd80 { char unknown_0_[0x20]; };
struct Struct_02073ec4 { struct Struct_0209bd80 unknown_0_[6]; int unknown_c0_; };

// USA: func_0209bd80
extern "C" ARM struct Struct_0209bd80* func_0209bd80(struct Struct_02073ec4 *arg0, int arg1) {
    if (arg0->unknown_c0_ <= arg1) return NULL;
    return &arg0->unknown_0_[arg1];
}
