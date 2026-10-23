#include <globaldefs.h>

struct Struct_0207f0ac_2 {
    short* unknown_0_;
    char unknown_4_[4];
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[5];
    unsigned char unknown_13_;
    char unknown_14_[4];
};

struct Struct_0207f6ac {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[4];
    unsigned char unknown_12_;
    char unknown_13_[5];
    Struct_0207f6ac* unknown_18_;
    Struct_0207f6ac* unknown_1c_;
    Struct_0207f6ac* unknown_20_;
    Struct_0207f6ac* unknown_24_;
    short unknown_28_;
    unsigned char unknown_2a_;
    char unknown_2b_[5];
};

struct Struct_0207f0ac { Struct_0207f0ac_2* unknown_0_; short unknown_4_; };
struct Struct_0207f524 { Struct_0207f6ac* unknown_0_; short unknown_4_; };
struct Struct_0207fdcc_2 {
    void* unknown_0_;
    Struct_0207f524 unknown_4_;
    Struct_0207f0ac unknown_c_;
};

extern "C" int func_02080d54(Struct_0207fdcc_2*, int, int, int);
extern "C" Struct_0207f0ac_2* func_0207f0ac(Struct_0207f0ac*, int);
extern "C" Struct_0207f6ac* func_0207f6ac(Struct_0207f524*, int);

// USA: func_02080e40

extern "C" ARM int func_02080e40(Struct_0207fdcc_2* arg0, int arg1, int arg2, int arg3) {
    if (!func_02080d54(arg0, arg1, arg2, arg3)) return -1;
    Struct_0207f0ac_2* var0 = func_0207f0ac(&arg0->unknown_c_, arg1);
    if (!var0) return -1;
    short var1 = var0->unknown_a_ * 8;
    short var2 = var0->unknown_c_ * 8;
    for (unsigned char var3 = 0; var3 < var0->unknown_13_; var3++) {
        int var4 = var0->unknown_0_[var3];
        Struct_0207f6ac* var5 = func_0207f6ac(&arg0->unknown_4_, var4);
        if (!var5 || var5->unknown_12_ == 1) continue;
        if (var5->unknown_2a_ & 1) continue;
        if (!var5->unknown_18_ && !var5->unknown_1c_ && !var5->unknown_20_ && !var5->unknown_24_) continue;
        short var6 = var5->unknown_6_ + var5->unknown_28_;
        short var7 = var5->unknown_8_;
        short var8 = var6 + var5->unknown_a_;
        short var9 = var7 + var5->unknown_c_;
        var6 += var1;
        var7 += var2;
        var8 += var1;
        var9 += var2;
        if (arg3 < var7) continue;
        if (var9 <= arg3) continue;
        if (arg2 < var6) continue;
        if (var8 > arg2) return var4;
    }
    return -1;
}
