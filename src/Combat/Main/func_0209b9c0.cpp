#include <globaldefs.h>

struct Struct_0209ad40_3 { char unknown_0_[0x4c]; };

// USA: func_0209b9c0
extern "C" ARM struct Struct_0209ad40_3* func_0209b9c0(struct Struct_0209ad40_3 *arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 6) return NULL;
    return &arg0[arg1];
}
