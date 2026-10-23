#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct Struct_ov031_02202b78 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};
struct Struct_ov031_0224cca8_2 {
    unsigned long unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_[8];
    unsigned short unknown_1c_[8];
    unsigned long unknown_2c_;
    unsigned char* unknown_30_;
    unsigned char* unknown_34_;
};
struct ProcessorContext;
struct Struct_ov031_0224c980_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
    int unknown_c_;
    unsigned long unknown_10_;
    void* (*unknown_14_)(unsigned long);
    void (*unknown_18_)();
    unsigned long unknown_1c_;
    unsigned long unknown_20_;
    unsigned long unknown_24_;
    unsigned long unknown_28_;
    unsigned long unknown_2c_;
    unsigned long unknown_30_;
    unsigned long unknown_34_;
    unsigned long unknown_38_;
    void (*unknown_3c_)();
    void (*unknown_40_)(void*);
    unsigned long unknown_44_;
    int (*unknown_48_)();
    unsigned long unknown_4c_;
    unsigned long unknown_50_;
    ProcessorContext* unknown_54_;
    unsigned char* unknown_58_;
    unsigned long unknown_5c_;
    unsigned long unknown_60_[2];
    unsigned long long unknown_68_;
    unsigned long long unknown_70_;
    unsigned long long unknown_78_;
};
extern Struct_ov031_0224cca8_2 data_ov031_0224cca8[8];
extern const Struct_ov031_0224c980_3 data_ov031_0224c980[];

static inline unsigned short inline_ov031_02202b78(unsigned short arg0) {
    return (arg0 >> 8) | (arg0 << 8);
}

// USA: func_ov031_02202b78
extern "C" ARM Struct_ov031_02202b78* func_ov031_02202b78(Struct_ov031_02202b78* arg0, int* arg1) {
    unsigned short var0;
    unsigned long var1;
    Struct_ov031_0224cca8_2* var2 = NULL;
    Struct_ov031_0224cca8_2* var3;
    unsigned long var4;
    unsigned long var5, var6, var7, var8, var9, var10;
    unsigned long var11;
    unsigned long var12;
    unsigned long var13;
    unsigned long var14;
    *arg1 = 0;
    var5 = inline_ov031_02202b78(arg0->unknown_6_);
    if (!(var5 & 0x3fff)) return arg0;
    var0 = arg0->unknown_0_;
    unsigned short var15 = arg0->unknown_e_;
    unsigned short var16 = arg0->unknown_c_;
    var1 = (var0 & 15) * 4;
    var8 = ((unsigned long)inline_ov031_02202b78(var16) << 16) | inline_ov031_02202b78(var15);
    var0 = arg0->unknown_4_;
    var10 = 0;
    var3 = data_ov031_0224cca8;
    do {
        if (var3->unknown_4_ && var3->unknown_0_ == var8 && var3->unknown_6_ == var0) break;
        ++var10;
        if (!var3->unknown_4_ && !var2) var2 = var3;
        ++var3;
    } while (var10 < 8);
    var6 = inline_ov031_02202b78(arg0->unknown_2_) - var1;
    var4 = var5 & 0x1fff;
    var7 = var6 + (var4 << 3);
    if (var10 == 8) {
        if (!var2 || var7 > 4096) return NULL;
        var3 = var2;
        var3->unknown_34_ = static_cast<unsigned char*>(data_ov031_0224c980[0].unknown_14_(var1 + 14 + 4096));
        if (!var3->unknown_34_) return NULL;
        var3->unknown_0_ = var8;
        var3->unknown_6_ = var0;
        var3->unknown_8_ = 0;
        var3->unknown_2c_ = GetCurrentTimestamp() >> 16;
        var3->unknown_30_ = var3->unknown_34_ + 14 + var1;
        VectorizedInvertedMemcpy(arg0, var3->unknown_34_ + 14, var1);
    }
    if (var3->unknown_4_ == 8 || var7 > 4096) {
        var3->unknown_4_ = 0;
        data_ov031_0224c980[0].unknown_40_(var3->unknown_34_);
        return NULL;
    }
    var9 = var4 + ((var6 + 7) >> 3);
    if (!(var5 & 0x2000)) {
        var3->unknown_a_ = var7;
        var3->unknown_8_ = var9;
    }
    var3->unknown_c_[var3->unknown_4_] = var4;
    var3->unknown_1c_[var3->unknown_4_] = var9;
    var3->unknown_4_++;
    VectorizedInvertedMemcpy((unsigned char*)arg0 + var1, var3->unknown_30_ + (var4 << 3), var6);
    var12 = var3->unknown_8_;
    if (!var12) return NULL;
    var11 = var3->unknown_4_;
    var14 = 0;
    var13 = 0;
    if (var13 < var11) do {
        if (var3->unknown_c_[var13] <= var14 && var14 < var3->unknown_1c_[var13]) {
            var14 = var3->unknown_1c_[var13];
            var13 = 0;
        } else {
            var13++;
        }
    } while (var13 < var11);
    if (var14 < var12) return NULL;
    unsigned char* var17 = var3->unknown_34_;
    Struct_ov031_02202b78* var18 = (Struct_ov031_02202b78*)(var17 + 14);
    unsigned short var19 = var3->unknown_a_ + ((var18->unknown_0_ & 15) * 4);
    var18->unknown_2_ = (var19 >> 8) | (var19 << 8);
    var3->unknown_4_ = 0;
    *arg1 = 1;
    return var18;
}
