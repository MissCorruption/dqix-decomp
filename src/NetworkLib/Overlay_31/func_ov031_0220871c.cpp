#include <globaldefs.h>

struct Struct_ov031_02208f50_2 {
    unsigned long unknown_0_[4];
    unsigned long unknown_10_[2];
    unsigned char unknown_18_[64];
};
struct Struct_ov031_02208f50 {
    unsigned long unknown_0_[5];
    unsigned long unknown_14_[2];
    unsigned char unknown_1c_[64];
};
struct Struct_0205faf4_21 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[256];
    unsigned short unknown_102_;
};
struct Struct_0205faf4_22 {
    char* unknown_0_;
    int unknown_4_;
    unsigned char* unknown_8_;
    int unknown_c_;
    unsigned char* unknown_10_;
};
union Struct_0205faf4_23 { Struct_0205faf4_21 unknown_0_; };
struct Struct_0205faf4_24;
struct Struct_0205faf4_25;
struct Struct_ov031_0220871c_2 {
    unsigned char unknown_0_[48];
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    unsigned short unknown_32_;
    unsigned char unknown_34_[32];
    unsigned char unknown_54_[32];
    union {
        unsigned char unknown_0_[32];
        unsigned char unknown1_0_[72];
    } unknown_74_;
    unsigned char* unknown_bc_;
    unsigned char* unknown_c0_;
    unsigned char* unknown_c4_;
    Struct_0205faf4_23 unknown_c8_;
    unsigned char unknown_1cc_[8];
    unsigned char* unknown_1d4_;
    unsigned char* unknown_1d8_;
    unsigned char* unknown_1dc_;
    Struct_0205faf4_23 unknown_1e0_;
    unsigned char unknown_2e4_[8];
    Struct_ov031_02208f50 unknown_2ec_;
    Struct_ov031_02208f50 unknown_348_;
    Struct_ov031_02208f50_2 unknown_3a4_;
    Struct_ov031_02208f50_2 unknown_3fc_;
    unsigned char unknown_454_;
    unsigned char unknown_455_;
    unsigned char unknown_456_;
    unsigned char unknown_457_;
    int unknown_458_;
    int unknown_45c_;
    unsigned char* unknown_460_;
    unsigned char* unknown_464_;
    unsigned char unknown_468_[20];
    int unknown_47c_;
    Struct_0205faf4_22 unknown_480_;
    unsigned char unknown_494_[256];
    unsigned long unknown_594_;
    unsigned char unknown_598_[8];
    int unknown_5a0_;
    unsigned char* unknown_5a4_;
    int unknown_5a8_;
    unsigned char unknown_5ac_;
    unsigned char unknown_5ad_;
    unsigned char unknown_5ae_;
    unsigned char unknown_5af_;
    char unknown_5b0_[256];
    char unknown_6b0_[256];
    char unknown_7b0_[80];
    char* unknown_800_;
    unsigned char* unknown_804_;
    int unknown_808_;
    unsigned long unknown_80c_;
    int (*unknown_810_)(int, Struct_ov031_0220871c_2*, int);
    Struct_0205faf4_22** unknown_814_;
    int unknown_818_;
    Struct_0205faf4_24* unknown_81c_;
    Struct_0205faf4_25* unknown_820_;
    unsigned char* unknown_824_;
    long unknown_828_;
    long unknown_82c_;
};

struct Struct_ov031_0220871c {
    unsigned long unknown_0_;
    unsigned long unknown_4_;
    unsigned long unknown_8_;
    int unknown_c_;
};
extern "C" int func_020cf0fc(int);
extern "C" int func_ov031_02207f10(Struct_ov031_0220871c_2*, unsigned char**, int, int, int);
extern "C" int func_ov031_022085a8(Struct_ov031_0220871c_2*);
extern "C" int func_ov031_022086b0(const char*, const char*);
extern "C" int func_ov031_02208400(Struct_ov031_0220871c_2*, Struct_0205faf4_22*);

// USA: func_ov031_0220871c
extern "C" ARM void func_ov031_0220871c(Struct_ov031_0220871c_2* arg0, unsigned char* arg1) {
    Struct_ov031_0220871c var0;
    unsigned long var1;
    unsigned long var2;
    unsigned long var3;
    unsigned long var4;
    int var5;
    var4 = arg1[2] + (((arg1[0] << 8) + arg1[1]) << 8);
    arg1 += 3;
    arg0->unknown_45c_ = -1;
    func_020cf0fc((int)&var0);
    arg0->unknown_80c_ = ((var0.unknown_0_ + 2000) << 16) + (var0.unknown_4_ << 8) + var0.unknown_8_;
    var1 = 0;
    arg0->unknown_6b0_[0] = 0;
    arg0->unknown_5a0_ = 0;
    arg0->unknown_594_ = 0;
    var5 = 0;
    do {
        var3 = arg1[2] + (((arg1[0] << 8) + arg1[1]) << 8);
        arg1 += 3;
        var4 -= var3 + 3;
        arg0->unknown_458_ = -1;
        arg0->unknown_5ad_ = 0;
        arg0->unknown_5ac_ = 0;
        arg0->unknown_5af_ = 0;
        arg0->unknown_6b0_[0] = 0;
        arg0->unknown_5b0_[0] = 0;
        arg0->unknown_7b0_[0] = 0;
        arg0->unknown_804_ = arg1;
        arg0->unknown_808_ = var3;
        int var6 = func_ov031_02207f10(arg0, &arg1, 0, 0, var1);
        if (var6 || arg0->unknown_594_ < 51 || !arg0->unknown_5a0_) {
            arg0->unknown_455_ = 9;
            return;
        }
        var2 = func_ov031_022085a8(arg0);
        if (!var5 && arg0->unknown_800_ && func_ov031_022086b0(arg0->unknown_800_, arg0->unknown_7b0_)) var2 |= 0x4000;
        var1 = var2 & 0xff;
        if (var1 == 1 && var4) {
            unsigned char* var7 = arg1 + 3;
            arg0->unknown_5ad_ = 0;
            if (func_ov031_02207f10(arg0, &var7, 0, 0, 2)) {
                arg0->unknown_455_ = 9;
                return;
            }
            var2 = (var2 & ~0xff) | func_ov031_02208400(arg0, &arg0->unknown_480_);
        }
        if (arg0->unknown_810_) var2 = arg0->unknown_810_(var2, arg0, var5);
        var5++;
        if (!var1 || var2 || !var4) break;
        var1 = 1;
    } while (true);
    if (!var2) arg0->unknown_455_ = 3;
    else arg0->unknown_455_ = 9;
}
