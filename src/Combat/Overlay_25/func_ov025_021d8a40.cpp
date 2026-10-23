#include <globaldefs.h>

extern "C" void func_ov025_021d8ab8(void* arg0, void* arg1, int arg2, int arg3, int arg4);

struct Struct_ov025_021d8a40 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_ov025_021d8a40
extern "C" ARM void func_ov025_021d8a40(void* arg0, struct Struct_ov025_021d8a40* arg1) {
    int var0[2];
    var0[0] = arg1->unknown_9_;
    var0[1] = arg1->unknown_8_;
    for (int var1 = 0; var1 < 2; var1++) {
        for (int var2 = 0; var2 < var0[var1]; var2++) {
            func_ov025_021d8ab8(arg0, arg1, 1, 6, var1);
        }
    }
}
