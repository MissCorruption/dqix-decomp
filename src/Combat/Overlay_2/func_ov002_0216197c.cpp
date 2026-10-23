#include <globaldefs.h>

struct Struct_0205d81c;

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);

#pragma optimize_for_size off
// USA: func_ov002_0216197c
extern "C" ARM int func_ov002_0216197c(int arg0, struct Struct_0205d81c* arg1) {
    unsigned char* var0 = (unsigned char*)func_0205d81c(arg1, arg0);
    if (var0 != NULL) {
        return (var0[0xc5] & 0x40) != 0;
    }
    return 0;
}
