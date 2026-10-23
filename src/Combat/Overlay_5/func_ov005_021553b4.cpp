#include <globaldefs.h>

struct Struct_ov005_02153954;

// USA: func_ov005_021553b4
extern "C" ARM void func_ov005_021553b4(Struct_ov005_02153954* arg0, int arg1, int* arg2, int* arg3) {
    if (arg1 >= 0 && arg1 < 8) {
        *arg2 = 0x85;
        *arg3 = 0x17;
        return;
    }
    if (arg1 >= 8 && arg1 < 24) {
        int var0 = arg1 - 8;
        *arg2 = (var0 % 4) * 26 + 0x8d;
        *arg3 = (var0 / 4) * 26 + 0x34;
        return;
    }
}
