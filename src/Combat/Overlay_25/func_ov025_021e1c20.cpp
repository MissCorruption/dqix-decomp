#include <globaldefs.h>

struct Struct_ov025_021e1c20 {
    unsigned char unknown_0_[6];
};

struct Struct_ov025_021e1c20_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[2];
    int unknown_4_;
    unsigned char* unknown_8_;
};

extern "C" void func_ov000_0216f82c(Struct_ov025_021e1c20* arg0, const int* arg1);
extern "C" int func_020493a4(unsigned char*);
extern "C" int func_020493ec(unsigned char*);
extern "C" void func_020493dc(unsigned char*, unsigned char);

// USA: func_ov025_021e1c20
extern "C" ARM void func_ov025_021e1c20(int arg0, unsigned char* arg1, unsigned char* arg2, int arg3, Struct_ov025_021e1c20_2* arg4, int arg5, unsigned char* arg6) {
    unsigned char var0[8];
    int var1 = arg0;
    Struct_ov025_021e1c20 var2;
    Struct_ov025_021e1c20 var3;
    int var4;
    int var5;
    int var6;
    int var7;
    unsigned char var8;
    int var9;
    unsigned int var10;
    var9 = 0;
    func_ov000_0216f82c(&var2, &var1);
    var3 = var2;
    for (var4 = 0; var4 < 6; var4++) {
        var8 = var3.unknown_0_[var4];
        if (var8 != 0xff && arg2[var8] == arg3 - 1) {
            var0[var9] = var8;
            var9++;
        }
    }
    for (var5 = 0; var5 < var9; var5++) {
        var10 = var0[var5];
        if (var10 < 0x51) {
            arg1[var10] = 0xff;
        }
        for (var6 = 0; var6 < arg5; var6++) {
            if (*arg6 != arg4[var6].unknown_0_) {
                var7 = func_020493ec(arg4[var6].unknown_8_);
                if (var7 >= 0x51) {
                    var7 = func_020493a4(arg4[var6].unknown_8_);
                }
                if (var7 == var10) {
                    arg4[var6].unknown_4_ = 1;
                    func_020493dc(arg4[var6].unknown_8_, 0xff);
                }
            }
        }
    }
}
