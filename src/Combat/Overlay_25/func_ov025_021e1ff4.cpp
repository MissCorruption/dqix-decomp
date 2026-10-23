#include <globaldefs.h>

extern "C" int func_020493ec(unsigned char* arg0);
extern "C" int func_020493a4(unsigned char* arg0);
extern "C" void func_020493dc(unsigned char* arg0, unsigned char arg1);

struct Struct_ov025_021e1ff4 {
    char unknown_0_[4];
    short unknown_4_;
};

struct Struct_ov025_021e1ff4_2 {
    unsigned char unknown_0_;
    char unknown_1_[3];
    int unknown_4_;
    unsigned char* unknown_8_;
};

// USA: func_ov025_021e1ff4
extern "C" ARM void func_ov025_021e1ff4(unsigned char* arg0, int arg1, unsigned char* arg2, Struct_ov025_021e1ff4* arg3,
                                        Struct_ov025_021e1ff4* arg4, Struct_ov025_021e1ff4_2* arg5, int arg6) {
    if (arg3 == 0 || arg4 == 0) {
        return;
    }
    for (int var0 = 0; var0 < arg1; var0++) {
        if (arg0[var0] >= 0x51) {
            continue;
        }
        if (arg0[var0] < 0x51) {
            arg2[arg0[var0]] = 0xff;
        }
        for (int var1 = 0; var1 < arg6; var1++) {
            unsigned char* var2 = arg5[var1].unknown_8_;
            int var3 = arg5[var1].unknown_0_;
            if (var3 == arg3->unknown_4_ || var3 == arg4->unknown_4_) {
                continue;
            }
            int var4 = func_020493ec(var2);
            if (var4 >= 0x51) {
                var4 = func_020493a4(var2);
            }
            if (var4 == arg0[var0]) {
                arg5[var1].unknown_4_ = 1;
                func_020493dc(var2, 0xff);
            }
        }
    }
}
