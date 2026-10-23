#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_021016e0 {
    unsigned char unknown_0_[0x3c];
    unsigned short unknown_3c_;
    unsigned char unknown_3e_[2];
    unsigned short unknown_40_;
    unsigned char unknown_42_[2];
    unsigned int unknown_44_;
    unsigned char unknown_48_[3];
    unsigned char unknown_4b_;
    unsigned char unknown_4c_[0x74];
};
struct Struct_0202cefc {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    unsigned short unknown_8_;
    unsigned char unknown_a_[4];
    unsigned short unknown_e_;
    Struct_021016e0* unknown_10_[1];
};
struct Struct_021015a0_2 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned char unknown_6_[0xa];
    int unknown_10_;
    unsigned char unknown_14_[8];
    int unknown_1c_;
    unsigned char unknown_20_[0x24];
    void (*unknown_44_)(Struct_021016e0*);
};
struct Struct_02101640 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_;
};
extern Struct_021015a0_2 data_021015a0;
extern unsigned char data_02101b80[0x400];
extern Struct_02101640 data_02101640;
extern Struct_021016e0 data_021016e0;
extern "C" void func_0202c848(int);
extern "C" int func_0202d0e0();
extern "C" void InvalidateDataCacheRange(const void*, unsigned int);
extern "C" int func_020c0290(Struct_021016e0*);
extern "C" int func_0202cddc();
static inline int inline_0202cefc(Struct_021016e0* arg0) { return arg0->unknown_40_ == 1; }

// USA: func_0202cefc
extern "C" ARM void func_0202cefc(Struct_0202cefc* arg0) {
    if (arg0->unknown_2_ != 0) {
        func_0202c848(arg0->unknown_2_);
        data_021015a0.unknown_10_ = 9;
        return;
    }
    if (data_021015a0.unknown_10_ != 2) {
        data_021015a0.unknown_4_ = 0;
        if (!func_0202d0e0()) data_021015a0.unknown_10_ = 9;
        return;
    }
    if (arg0->unknown_8_ != 4 && arg0->unknown_8_ == 5) {
        if (arg0->unknown_e_ != 0) InvalidateDataCacheRange(data_02101b80, 0x400);
        int var0;
        int var1 = 0;
        var0 = 0;
        for (; var0 < arg0->unknown_e_; var0++) {
            Struct_021016e0* var2 = arg0->unknown_10_[var0];
            if (data_021015a0.unknown_1c_ != 0 && func_020c0290(var2)) {
                if (data_021015a0.unknown_44_) data_021015a0.unknown_44_(var2);
            } else {
                int var3 = 0;
                if (var2->unknown_3c_ >= 0x10) var3 = inline_0202cefc(var2);
                if (var3 == 0) continue;
                if (var2->unknown_44_ != data_02101640.unknown_8_) continue;
                switch (var2->unknown_4b_ & 3) {
                case 1:
                    VectorizedInvertedMemcpy(var2, &data_021016e0, 0xc0);
                    var1 = 1;
                    goto finished;
                }
            }
        }
finished:
        if (var1) {
            if (data_021015a0.unknown_44_) data_021015a0.unknown_44_(&data_021016e0);
            if (data_021015a0.unknown_4_ != 0) {
                if (!func_0202d0e0()) data_021015a0.unknown_10_ = 9;
                return;
            }
        }
    }
    if (!func_0202cddc()) data_021015a0.unknown_10_ = 9;
}
