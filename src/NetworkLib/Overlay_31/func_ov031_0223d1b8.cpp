#include <globaldefs.h>
#include "NitroSDK/TouchScreen.h"

typedef struct Struct_ov031_0223d1b8 Struct_ov031_0223d1b8;
struct Struct_ov031_0223d1b8 {
    unsigned short unknown_0_[2];
};

typedef struct Struct_ov031_0223d1b8_2 Struct_ov031_0223d1b8_2;
struct Struct_ov031_0223d1b8_2 {
    TouchScreenSample unknown_0_[5];
    Struct_ov031_0223d1b8 unknown_28_;
    Struct_ov031_0223d1b8 unknown_2c_;
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned char unknown_38_0_ : 1;
    unsigned char unknown_38_1_ : 1;
    unsigned char unknown_38_2_ : 1;
    unsigned char unknown_38_3_ : 1;
    unsigned char unknown_38_4_ : 4;
};

typedef struct Struct_ov031_02290d40_2 Struct_ov031_02290d40_2;
struct Struct_ov031_02290d40_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[2];
    Struct_ov031_0223d1b8_2* unknown_4_;
};

extern Struct_ov031_02290d40_2 data_ov031_02290d40;

extern "C" void func_ov031_0223cb10(unsigned short arg0, unsigned short arg1, Struct_ov031_0223d1b8* arg2);
extern "C" int FastIntModulus(int arg0, int arg1);

// USA: func_ov031_0223d1b8
extern "C" ARM void func_ov031_0223d1b8(void) {
    int var0;
    unsigned char var1;
    int var2;
    int var3;
    TouchScreenSample var4;

    var2 = data_ov031_02290d40.unknown_4_->unknown_38_0_ ? 1 : 0;
    var1 = 0;
    var3 = GetCurrentTouchScreenSampleIndex();
    data_ov031_02290d40.unknown_4_->unknown_2c_ = data_ov031_02290d40.unknown_4_->unknown_28_;
    var0 = 0;
    do {
        TouchScreenSample* var5 = &data_ov031_02290d40.unknown_4_->unknown_0_[var3];
        if (var5->isHeld == 1 && var5->missingCoordFlags == 0) {
            var1 = 1;
            ConvertTouchScreenSampleToPixels(&var4, var5);
            func_ov031_0223cb10(var4.x, var4.y, &data_ov031_02290d40.unknown_4_->unknown_28_);
            break;
        }
        var0++;
        var3 = FastIntModulus(var3 + 4, 5);
    } while (var0 < 4);

    data_ov031_02290d40.unknown_4_->unknown_38_1_ = var1 & (var1 ^ var2);
    data_ov031_02290d40.unknown_4_->unknown_38_3_ = var2 & (var1 ^ var2);
    data_ov031_02290d40.unknown_4_->unknown_38_0_ = var1;
    data_ov031_02290d40.unknown_4_->unknown_38_2_ = data_ov031_02290d40.unknown_4_->unknown_38_1_;

    if (!var1) {
        data_ov031_02290d40.unknown_1_ = 0;
        return;
    }
    if (++data_ov031_02290d40.unknown_1_ == 0x28) {
        data_ov031_02290d40.unknown_4_->unknown_38_2_ = 1;
    } else if (data_ov031_02290d40.unknown_1_ == 0x2f) {
        data_ov031_02290d40.unknown_4_->unknown_38_2_ = 1;
        data_ov031_02290d40.unknown_1_ = 0x28;
    }
}
