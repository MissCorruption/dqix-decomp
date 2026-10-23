#include <globaldefs.h>

struct Struct_0207f0ac_2 {
    short* unknown_0_;
    char unknown_4_[0xc];
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
    char unknown_14_[4];
};
struct Struct_0207f6ac {
    char unknown_0_[8];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[0x22];
};
struct Struct_0207f0ac { Struct_0207f0ac_2* unknown_0_; short unknown_4_; };
struct Struct_0207f524 { Struct_0207f6ac* unknown_0_; short unknown_4_; };
struct Struct_0207fdcc_2 {
    void* unknown_0_;
    Struct_0207f524 unknown_4_;
    Struct_0207f0ac unknown_c_;
};
extern "C" Struct_0207f0ac_2* func_0207f0ac(Struct_0207f0ac*, int);
extern "C" Struct_0207f6ac* func_0207f6ac(Struct_0207f524*, int);
extern "C" int func_020813ec(void*, int);
extern "C" void func_0207fdcc(Struct_0207fdcc_2*, int);

// USA: func_02081224
extern "C" ARM void func_02081224(Struct_0207fdcc_2* arg0, int arg1) {
    int var0[8];
    int var1[8];
    int var2[8];
    Struct_0207f0ac_2* var3 = func_0207f0ac(&arg0->unknown_c_, arg1);
    if (!var3) return;
    func_020813ec(arg0, arg1);
    int var4 = 0;
    int var5 = var3->unknown_13_;
    int var6 = 0;
    for (; var6 < var5; var6++) {
        int var7 = var3->unknown_0_[var6];
        Struct_0207f6ac* var8 = func_0207f6ac(&arg0->unknown_4_, var7);
        if (var8) {
            var0[var4] = var7;
            var1[var4] = var8->unknown_8_;
            var2[var4] = var8->unknown_c_;
            var4++;
        }
    }
    if (var4 <= 1) return;
    for (int var9 = 0; var9 < var4 - 1; var9++) {
        for (int var10 = var9 + 1; var10 < var4; var10++) {
            if (var1[var10] < var1[var9]) {
                int var11 = var1[var9];
                var1[var9] = var1[var10];
                int var12 = var0[var9];
                int var13 = var2[var9];
                var0[var9] = var0[var10];
                var0[var10] = var12;
                var1[var10] = var11;
                var2[var9] = var2[var10];
                var2[var10] = var13;
            }
        }
    }
    int var14 = 0;
    for (int var15 = 0; var15 < var4; var15++) var14 += var2[var15];
    int var16 = var3->unknown_10_ * 8;
    if (var16 <= var14) return;
    int var17 = var16 - var14;
    int var18 = var17 / (var4 - 1);
    int var19 = var17 % (var4 - 1);
    while (var19 < 12) {
        var19 += var4 - 1;
        var18--;
    }
    int var20 = var19 >> 1;
    for (int var21 = 0; var21 < var4; var21++) {
        Struct_0207f6ac* var22 = func_0207f6ac(&arg0->unknown_4_, (short)var0[var21]);
        if (var22) {
            var22->unknown_8_ = var20;
            var20 += var18 + var22->unknown_c_;
        }
    }
    func_0207fdcc(arg0, arg1);
}
