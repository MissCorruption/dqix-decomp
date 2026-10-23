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
extern "C" void func_ov031_0220b8a0(unsigned int*);
extern "C" void func_ov031_0220b8f4(void*, const void*, unsigned int);
extern "C" void func_ov031_0220b9ac(void*, void*);
extern "C" void func_ov031_0220afe0(void*);
extern "C" void func_ov031_0220b028(void*, const void*, unsigned int);
extern "C" void func_ov031_0220b0e0(void*, void*);
extern "C" void func_ov031_0220ba44(void*, const void*, int);

// USA: func_ov031_02208f50
extern "C" ARM void func_ov031_02208f50(Struct_ov031_0220871c_2* arg0) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    switch (arg0->unknown_32_) {
        case 4:
        var5 = var4 = 16;
        var6 = 0;
        break;
        case 5:
        var4 = 20;
        var5 = 16;
        var6 = 0;
        break;
    }
    int var7 = 2 * (var4 + var5 + var6);
    var1 = 0;
    unsigned char var8;
    unsigned char var9[20];
    if (var7 > 0) {
        var3 = 0;
        do {
            Struct_ov031_02208f50* var10 = &arg0->unknown_348_;
            func_ov031_0220b8a0((unsigned int*)var10->unknown_0_);
            var8 = var1 + 'A';
            var2 = 0;
            var0 = var1 + 1;
            if (var0 > 0) do {
                func_ov031_0220b8f4(var10, &var8, 1);
                var2++;
            } while (var2 < var0);
            func_ov031_0220b8f4(var10, arg0->unknown_0_, 48);
            func_ov031_0220b8f4(var10, arg0->unknown_54_, 32);
            func_ov031_0220b8f4(var10, arg0->unknown_34_, 32);
            func_ov031_0220b9ac(var10, var9);
            Struct_ov031_02208f50_2* var11 = &arg0->unknown_3fc_;
            func_ov031_0220afe0(var11);
            func_ov031_0220b028(var11, arg0->unknown_0_, 48);
            func_ov031_0220b028(var11, var9, 20);
            func_ov031_0220b0e0(var11, arg0->unknown_74_.unknown1_0_ + var3);
            var3 += 16;
            var1++;
        } while (var3 < var7);
    }
    unsigned char* var12 = arg0->unknown_74_.unknown1_0_;
    if (arg0->unknown_454_) {
        arg0->unknown_1d4_ = var12;
        arg0->unknown_1d8_ = var12 + 2 * var4;
        arg0->unknown_bc_ = var12 + var4;
        arg0->unknown_c0_ = arg0->unknown_bc_ + var4 + var5;
    } else {
        arg0->unknown_bc_ = var12;
        arg0->unknown_c0_ = var12 + 2 * var4;
        arg0->unknown_1d4_ = var12 + var4;
        arg0->unknown_1d8_ = arg0->unknown_1d4_ + var4 + var5;
    }
    func_ov031_0220ba44(&arg0->unknown_1e0_, arg0->unknown_1d8_, 16);
    func_ov031_0220ba44(&arg0->unknown_c8_, arg0->unknown_c0_, 16);
}
