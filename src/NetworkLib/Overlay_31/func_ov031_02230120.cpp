#include <globaldefs.h>

struct Struct_ov031_02230120_2 {
    union {
        unsigned long unknown1_0_;
        struct { unsigned short unknown_0_; unsigned short unknown_2_; };
        struct {
            unsigned long unknown_0_0_ : 8;
            unsigned long unknown_1_0_ : 2;
            unsigned long unknown_1_2_ : 2;
            unsigned long unknown_1_4_ : 1;
            unsigned long unknown_1_5_ : 1;
            unsigned long unknown_1_6_ : 2;
            unsigned long unknown_2_0_ : 9;
            unsigned long unknown_3_1_ : 5;
            unsigned long unknown_3_6_ : 2;
        };
        struct {
            unsigned long unknown1_0_0_ : 28;
            unsigned long unknown_3_4_ : 1;
            unsigned long unknown_3_5_ : 1;
            unsigned long unknown1_3_6_ : 2;
        };
    };
    union {
        struct { unsigned short unknown_4_; unsigned short unknown_6_; };
        unsigned long unknown1_4_;
        struct {
            unsigned long unknown_4_0_ : 10;
            unsigned long unknown_5_2_ : 2;
            unsigned long unknown_5_4_ : 4;
            unsigned long unknown_6_0_ : 16;
        };
    };
};
struct Struct_ov031_02230120 {
    unsigned char unknown_0_[0x18];
    Struct_ov031_02230120_2* unknown_18_[7];
    Struct_ov031_02230120_2* unknown_34_;
    unsigned char unknown_38_[0xc];
    unsigned char unknown_44_;
};
struct Struct_ov031_02290ca0_14 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    Struct_ov031_02230120* unknown_8_;
};
extern Struct_ov031_02290ca0_14 data_ov031_02290ca0;
extern "C" int FastIntDivide(int, int);
extern "C" int FastIntModulus(int, int);

static inline void inline_ov031_02230120(const Struct_ov031_02230120_2* arg0, unsigned long* arg1, unsigned long* arg2) {
    *arg1 = (arg0->unknown1_0_ & 0x1ff0000) >> 16;
    *arg2 = arg0->unknown1_0_ & 0xff;
}

static inline void inline_ov031_02230120_2(Struct_ov031_02230120_2* arg0, int arg1, int arg2) {
    arg0->unknown1_0_ = (arg0->unknown1_0_ & ~0x01ff00ff) | (arg2 & 0xff) | ((arg1 & 0x1ff) << 16);
}

// USA: func_ov031_02230120
extern "C" ARM void func_ov031_02230120() {
    int var0;
    int var1;
    int var2 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 29);
    int var3 = 52 - FastIntModulus(data_ov031_02290ca0.unknown_4_, 29);
    if (data_ov031_02290ca0.unknown_8_->unknown_34_) {
        if (var2 == 0) var0 = 38;
        else var0 = 256;
        inline_ov031_02230120_2(data_ov031_02290ca0.unknown_8_->unknown_34_, var0, var3);
    }
    int var4 = var3;
    int var5 = 0;
    do {
        Struct_ov031_02230120_2* var6 = data_ov031_02290ca0.unknown_8_->unknown_18_[var5];
        inline_ov031_02230120(var6, (unsigned long*)&var0, (unsigned long*)&var1);
        inline_ov031_02230120_2(var6, var0, var4);
        var4 += 29;
    } while (++var5 < 5);
    if (var2 <= 2) {
        Struct_ov031_02230120_2* var7 = data_ov031_02290ca0.unknown_8_->unknown_18_[5];
        inline_ov031_02230120(var7, (unsigned long*)&var0, (unsigned long*)&var1);
        inline_ov031_02230120_2(var7, var0, var3 + (2 - var2) * 29);
    } else {
        inline_ov031_02230120_2(data_ov031_02290ca0.unknown_8_->unknown_18_[5], 256, 0);
    }
    if (var2 >= 2 && var2 <= 6) {
        Struct_ov031_02230120_2* var8 = data_ov031_02290ca0.unknown_8_->unknown_18_[6];
        inline_ov031_02230120(var8, (unsigned long*)&var0, (unsigned long*)&var1);
        inline_ov031_02230120_2(var8, var0, var3 + (6 - var2) * 29);
    } else {
        inline_ov031_02230120_2(data_ov031_02290ca0.unknown_8_->unknown_18_[6], 256, 0);
    }
    data_ov031_02290ca0.unknown_8_->unknown_44_ = 1;
}
