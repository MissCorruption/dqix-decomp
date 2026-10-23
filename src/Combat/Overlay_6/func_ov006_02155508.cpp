#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov006_02155508 {
    unsigned char unknown_0_[LOW_REGION(0x34, 0x1b4)];
    unsigned int unknown_1b4_;
    unsigned int unknown_1b8_;
    unsigned char unknown_1bc_[0x1c0 - 0x1bc];
    unsigned int unknown_1c0_;
    unsigned char unknown_1c4_[0xad4 - 0x1c4];
    int unknown_ad4_;
    int unknown_ad8_;
    unsigned char unknown_adc_[0xade - 0xadc];
    unsigned char unknown_ade_;
    unsigned char unknown_adf_;
    unsigned char unknown_ae0_[0xae2 - 0xae0];
    unsigned short unknown_ae2_;
};

// USA: func_ov006_02155508
extern "C" ARM void func_ov006_02155508(Struct_ov006_02155508* arg0) {
    if (arg0->unknown_ae2_ & 1)
        return;

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();

    if (arg0->unknown_ad4_ >= 0) {
        var0->RemoveTask(arg0->unknown_ad4_);
        arg0->unknown_ad4_ = -1;
    }
    arg0->unknown_ad4_ = -1;

    arg0->unknown_ade_ = 0;
    arg0->unknown_ae2_ &= ~2;

    if (arg0->unknown_ad8_ >= 0) {
        var0->RemoveTask(arg0->unknown_ad8_);
        arg0->unknown_ad8_ = -1;
    }
    arg0->unknown_ad8_ = -1;

    arg0->unknown_adf_ = 0;
    arg0->unknown_1b4_ = 0;
    arg0->unknown_1b8_ = 0;
    arg0->unknown_1c0_ = 0;

    arg0->unknown_ae2_ = (arg0->unknown_ae2_ | 1) & ~4;
}
