#include <globaldefs.h>

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);

struct Struct_ov000_02174614 {
    char unknown_0_[0x38];
    int unknown_38_;
    char unknown_3c_[0x4c - 0x3c];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc7 - 0x50];
#else
    char unknown1_50_[0x87 - 0x50];
#endif
    unsigned char unknown_87_;
#if defined(jpn)
    char unknown_c8_[0x488 - 0xc8];
#else
    char unknown_88_[0x448 - 0x88];
#endif
};

struct Struct_ov000_02174614_2 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x958 - 0x70];
    Struct_ov000_02174614 unknown_958_[4];
#if defined(jpn)
    char unknown_1b78_[0x1f98 - 0x1b78];
#else
    char unknown_1a78_[0x1d60 - 0x1a78];
#endif
    unsigned char unknown_1d60_[8];
    signed char unknown_1d68_;
};

extern "C" int func_ov000_021719f8(int* arg0);
extern "C" void func_ov000_0217f518(Struct_ov000_02174614* arg0);
extern "C" void func_ov000_0217636c(Struct_ov000_02174614* arg0, int arg1);

// USA: func_ov000_02174614
extern "C" ARM void func_ov000_02174614(Struct_ov000_02174614_2* arg0, int arg1)
{
    Struct_ov000_02174614* var0;
    if (arg1 < 0) {
        int var1;
        memset(arg0->unknown_1d60_, 0, sizeof(arg0->unknown_1d60_));
        arg0->unknown_1d68_ = 0;
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 1;
        for (var1 = 0; var1 < 4; var1++) {
            var0 = &arg0->unknown_958_[arg0->unknown_6c_[var1]];
            if (var0->unknown_4c_ >= 0 && var0->unknown_87_ != 0 && !func_ov000_021719f8((int*)var0)) {
                func_ov000_0217f518(var0);
                if (var0->unknown_38_ != 0) {
                    func_ov000_0217636c(var0, 0);
                }
            }
        }
        return;
    }
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        var0 = &arg0->unknown_958_[arg0->unknown_6c_[var2]];
        if (arg1 == var0->unknown_4c_) {
            func_ov000_0217f518(var0);
            if (var0->unknown_38_ != 0) {
                func_ov000_0217636c(var0, 0);
            }
            return;
        }
    }
}
