#include <globaldefs.h>

extern "C" void* __clear(void*, int);
extern "C" int func_020ac4c0(void*);
extern "C" int func_020ac494(void*);

struct Struct_ov006_02154138 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 15;
};
struct Struct_ov006_02154138_2 {
    short unknown_0_;
    char unknown_2_[0x14];
    short unknown_16_;
    char unknown_18_[8];
};
struct Struct_ov006_02154138_3 {
    char unknown_0_[4];
    Struct_ov006_02154138_2* unknown_4_;
    char unknown_8_[2];
    unsigned short unknown_a_;
};
struct Struct_ov006_02154138_4 {
    Struct_ov006_02154138_3* unknown_0_;
    char unknown_4_[0x1c];
    Struct_ov006_02154138* unknown_20_;
    unsigned short unknown_24_;
};
struct Struct_ov006_02154138_5 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 23;
    unsigned int unknown_12_7_ : 9;
    char unknown_14_[0x9c];
};

// USA: func_ov006_02154138
extern "C" ARM int func_ov006_02154138(void* arg0) {
    Struct_ov006_02154138_4* var0 = (Struct_ov006_02154138_4*)arg0;
    if (!var0->unknown_0_) return 0;
    signed char var1[472];
    Struct_ov006_02154138_5 var2;
    unsigned short var3 = 0;
    __clear(var1, sizeof(var1));
    for (unsigned short var4 = 0; var4 < var0->unknown_24_; var4++) {
        short var5 = var0->unknown_20_[var4].unknown_0_;
        var1[var5] |= var0->unknown_20_[var4].unknown_2_0_;
    }
    for (unsigned short var6 = 0; var6 < var0->unknown_0_->unknown_a_; var6++) {
        Struct_ov006_02154138_2* var7 = (Struct_ov006_02154138_2*)((unsigned int)var0->unknown_0_->unknown_4_ + (short)var6 * 0x20);
        if (var7 && var7->unknown_16_ < 0) var1[var7->unknown_0_] |= 2;
    }
    for (unsigned short var8 = 1; var8 < 472; var8++) {
        if (var1[var8] == 3) var3++;
    }
    func_020ac4c0(&var2);
    var2.unknown_12_7_ = var3;
    func_020ac494(&var2);
    return (short)var3;
}
