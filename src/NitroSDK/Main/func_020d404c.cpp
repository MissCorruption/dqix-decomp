#include <globaldefs.h>

struct Struct_020d404c { unsigned char unknown_0_[0x18]; int unknown_18_[1]; };

extern char data_021142e0;

// USA: func_020d404c
extern "C" ARM void func_020d404c(int arg0, int arg1) {
    struct Struct_020d404c* var0 = *(struct Struct_020d404c**)(&data_021142e0 + 4);
    var0->unknown_18_[arg0] = arg1;
}
