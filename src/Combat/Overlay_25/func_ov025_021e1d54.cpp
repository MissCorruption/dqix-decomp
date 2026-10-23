#include <globaldefs.h>

struct Struct_ov025_021e1d54 {
    unsigned char unknown_0_[6];
};

struct Struct_ov025_021e1d54_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[2];
    int unknown_4_;
    unsigned char* unknown_8_;
};

extern "C" int func_020493a4(unsigned char* arg0);
extern "C" void func_020493b8(unsigned char* arg0, unsigned char arg1);
extern "C" void func_ov025_021e169c(unsigned char* arg0, int arg1);
extern "C" void func_ov000_0216f82c(Struct_ov025_021e1d54* arg0, const int* arg1);
extern "C" void func_ov025_021e13e0(unsigned char* arg0, Struct_ov025_021e1d54_2* arg1);
extern "C" void __clear(void* arg0, int arg1);

static inline int inline_ov025_021e1d54(unsigned char arg0) {
    return arg0 >= 0xf2 ? 1 : 0;
}

// USA: func_ov025_021e1d54
extern "C" ARM void func_ov025_021e1d54(Struct_ov025_021e1d54_2* arg0, unsigned char* arg1) {
    Struct_ov025_021e1d54 var0;
    unsigned char var1[6];
    Struct_ov025_021e1d54 var2;
    Struct_ov025_021e1d54 var3;
    int var4;
    Struct_ov025_021e1d54 var5;
    int var6;
    var4 = func_020493a4(arg0->unknown_8_);
    func_ov000_0216f82c(&var3, &var4);
    var0 = var3;
    unsigned char var7 = 0;
    for (int var8 = 0; var8 < 6; var8++) {
        if (var0.unknown_0_[var8] == 0xff) continue;
        if (inline_ov025_021e1d54(arg1[var0.unknown_0_[var8]]) == 0) var7++;
    }
    if (arg0->unknown_4_ == 0 && var7 >= 4) return;
    __clear(var1, 6);
    int var9 = 0;
    int var10 = 0xff;
    for (int var11 = 0; var11 < 6; var11++) {
        int var12 = var0.unknown_0_[var11];
        if (var12 == 0xff) continue;
        var6 = var12;
        func_ov000_0216f82c(&var5, &var6);
        var2 = var5;
        for (int var13 = 0; var13 < 6; var13++) {
            int var14 = var2.unknown_0_[var13];
            if (var14 == 0xff) continue;
            if (inline_ov025_021e1d54(arg1[var14]) != 0) continue;
            var1[var11]++;
            if (var9 < var1[var11]) {
                var9 = var1[var11];
                var10 = var14;
            }
        }
    }
    if (var10 >= 0x51) return;
    if (var7 < var9 || arg0->unknown_4_ != 0) {
        func_ov025_021e169c(arg1, arg0->unknown_1_);
        if (var10 < 0x51) {
            func_ov025_021e13e0(arg1, arg0);
        }
        func_020493b8(arg0->unknown_8_, var10);
    }
}
