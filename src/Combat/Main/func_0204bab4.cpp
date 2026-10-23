#include <globaldefs.h>

extern "C" void func_0204b620(void*, void*, int, int, int, int, int, int, int, int);

struct Struct_0204bab4 {
    char unknown_0_[0x14];
    void* unknown_14_;
};

struct Struct_0204bab4_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[8];
    void* unknown_c_;
};

// USA: func_0204bab4
extern "C" ARM void func_0204bab4(struct Struct_0204bab4* arg0, struct Struct_0204bab4_2* arg1, int arg2, int arg3,
                        int arg4, short arg5, int arg6, int arg7, unsigned short arg8) {
    int var0;
    short var1;
    short var2, var3;

    if (arg2 <= 0 || arg3 <= 0) return;
    if (arg1->unknown_c_ == NULL) return;

    var2 = arg1->unknown_0_;
    var3 = arg1->unknown_2_;
    var1 = arg5;
    if (var2 < arg2) arg2 = var2;
    if (var3 < arg3) arg3 = var3;

    for (unsigned short var4 = 0; var4 < arg7; var4++) {
        var0 = arg4;
        for (unsigned short var5 = 0; var5 < arg6; var5++) {
            if (arg0->unknown_14_ != NULL) {
                func_0204b620(arg0, arg0->unknown_14_, (int)arg1, 0, 0, var0, var1, arg2, arg3, arg8);
            }
            var0 = (short)(var0 + arg2);
        }
        var1 = (short)(var1 + arg3);
    }
}
