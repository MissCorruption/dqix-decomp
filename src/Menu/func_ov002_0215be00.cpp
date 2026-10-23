#include "globaldefs.h"

#if defined(jpn)
enum { Enum_ov002_0215be00_3784 = 0xe20, Enum_ov002_0215be00_7096 = 0x1a80, Enum_ov002_0215be00_21 = 22, Enum_ov002_0215be00_13 = 14, Enum_ov002_0215be00_11 = 12, Enum_ov002_0215be00_17 = 14, Enum_ov002_0215be00_38 = 41 };
#define data_ov002_0216cb48 data_ov002_0216d150
#else
enum { Enum_ov002_0215be00_3784 = 0xec8, Enum_ov002_0215be00_7096 = 0x1bb8, Enum_ov002_0215be00_21 = 21, Enum_ov002_0215be00_13 = 13, Enum_ov002_0215be00_11 = 11, Enum_ov002_0215be00_17 = 17, Enum_ov002_0215be00_38 = 38 };
#endif

struct Struct_ov002_0216cb48 {
    unsigned char unknown_0_, unknown_1_, unknown_2_;
    signed char unknown_3_, unknown_4_;
    unsigned char unknown_5_, unknown_6_;
};
struct Struct_ov002_0215be00 {
    unsigned char unknown_0_[0xa0];
    short unknown_a0_, unknown_a2_, unknown_a4_, unknown_a6_;
    short unknown_a8_, unknown_aa_, unknown_ac_, unknown_ae_;
    unsigned char unknown_b0_, unknown_b1_, unknown_b2_[3], unknown_b5_, unknown_b6_, unknown_b7_;
    inline void inline_ov002_0215be00(short arg0, short arg1) { unknown_a8_ = arg0; unknown_aa_ = arg1; }
    inline void inline_ov002_0215be00_2(short arg0, short arg1) { unknown_a0_ = arg0; unknown_a2_ = arg1; }
    inline void inline_ov002_0215be00_3(short arg0, short arg1) { unknown_ac_ = arg0; unknown_ae_ = arg1; }
};
struct Struct_ov002_0215be00_2 {
    unsigned char unknown_0_[Enum_ov002_0215be00_3784];
    Struct_ov002_0215be00 unknown_ec8_;
    unsigned char unknown_f80_[Enum_ov002_0215be00_7096 - Enum_ov002_0215be00_3784 - sizeof(Struct_ov002_0215be00)];
    int unknown_1bb8_;
};
extern "C" const Struct_ov002_0216cb48 data_ov002_0216cb48[];
extern "C" void func_ov002_02156080(void*, short*, short*);

// USA: func_ov002_0215be00
// JPN: func_ov002_0215cf30
extern "C" ARM void func_ov002_0215be00(Struct_ov002_0215be00_2* arg0, int arg1, short arg2, short arg3) {
    for (int var0 = 0; data_ov002_0216cb48[var0].unknown_0_ != 255; ++var0) {
        const Struct_ov002_0216cb48* var1 = &data_ov002_0216cb48[var0];
        if (var1->unknown_0_ != arg1) continue;
        Struct_ov002_0215be00* var2 = &arg0->unknown_ec8_;
        var2->unknown_b1_ = var1->unknown_0_;
        var2->unknown_a4_ = arg2;
        var2->unknown_a6_ = arg3;
        var2->inline_ov002_0215be00(var1->unknown_1_, var1->unknown_2_);
        var2->inline_ov002_0215be00_2(var1->unknown_3_, var1->unknown_4_);
        var2->inline_ov002_0215be00_3(var1->unknown_5_, var1->unknown_6_);
        var2->unknown_b5_ = 1;
        if (var1->unknown_0_ == Enum_ov002_0215be00_21) {
            short var3[9], var4;
            short var5 = 0;
            func_ov002_02156080(arg0, var3, &var4);
            if (var4 < 8) {
                var5 = (8 - var4) * 2;
            } else {
                var2->inline_ov002_0215be00(var1->unknown_1_, var1->unknown_2_ + 1);
            }
            if (var5 < 0) var5 = 0;
            var2->inline_ov002_0215be00_2(var1->unknown_3_, var1->unknown_4_ - var5);
        }
        if (var1->unknown_0_ == Enum_ov002_0215be00_13 && arg0->unknown_1bb8_ == Enum_ov002_0215be00_11) {
            var2->unknown_a0_ = Enum_ov002_0215be00_17;
            var2->unknown_a2_ = 16;
        }
        int var6 = 10;
        if (arg1 == Enum_ov002_0215be00_38) var6 = 12;
        var2->unknown_b7_ = var6;
        break;
    }
}

#if defined(jpn)
#undef data_ov002_0216cb48
#endif
