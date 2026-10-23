#include <globaldefs.h>

extern "C" int func_02068200(signed char* arg0);
extern "C" int sprintf(int arg0, void* arg1);

struct Struct_020691c0 { unsigned char unknown_0_[0x40]; };

// USA: func_020691c0
extern "C" ARM void func_020691c0(signed char* arg0, int* arg1, char* arg2) {
    int var0 = func_02068200(arg0) - 1;
    struct Struct_020691c0* var1 = (struct Struct_020691c0*)(arg2 + 0x2ec) + var0;
    if (var1 != NULL) {
        *arg1 += sprintf(*arg1, var1);
    }
}
