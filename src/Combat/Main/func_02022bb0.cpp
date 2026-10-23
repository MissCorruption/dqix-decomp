#include "Filesystem/BackgroundLoader.h"
#include <globaldefs.h>

#if defined(jpn)
#define func_02022bb0 func_02022644
#endif

extern "C" void func_02022b90(void *arg0, int *arg1);

struct Struct_02022bb0 {
#if defined(jpn)
    char unknown_0_[0x90c];
#else
    char unknown1_0_[0x9b8];
#endif
    unsigned char unknown_9b8_;
    char unknown_9b9_[8];
    unsigned char unknown_9c1_;
    unsigned char unknown_9c2_;
    unsigned char unknown_9c3_;
    unsigned char unknown_9c4_;
    unsigned char unknown_9c5_;
    char unknown_9c6_[6];
    int unknown_9cc_;
    int unknown_9d0_;
    int unknown_9d4_;
    int unknown_9d8_[8];
#if defined(jpn)
    char unknown_94c_[4];
#else
    int unknown_9f8_;
#endif
    int unknown_9fc_;
    int unknown_a00_;
    int unknown_a04_;
    int unknown_a08_;
    int unknown_a0c_;
    int unknown_a10_;
    int unknown_a14_;
    int unknown_a18_;
    int unknown_a1c_;
    int unknown_a20_;
    int unknown_a24_;
    int unknown_a28_;
    int unknown_a2c_;
    int unknown_a30_;
    unsigned char unknown_a34_;
};

// USA: func_02022bb0
extern "C" ARM void func_02022bb0(void *arg0) {
    Struct_02022bb0 *var0 = (Struct_02022bb0 *) arg0;
    var0->unknown_9c3_                  = 0;
    var0->unknown_9c2_         = 0;
    var0->unknown_9c5_                 = 0;
    var0->unknown_9b8_                 = 0;
    var0->unknown_a34_            = 0xff;
    var0->unknown_9c4_                 = 0;

    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_9cc_);
    var0->unknown_9cc_ = -1;
#if !defined(jpn)
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_9f8_);
    var0->unknown_9f8_ = -1;
#endif
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_9d0_);
    var0->unknown_9d0_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_9d4_);
    var0->unknown_9d4_ = -1;

    for (int var1 = 0; var1 < 8; var1++) {
        func_02022b90(arg0, &var0->unknown_9d8_[var1]);
    }

    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_9fc_);
    var0->unknown_9fc_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a00_);
    var0->unknown_a00_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a04_);
    var0->unknown_a04_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a08_);
    var0->unknown_a08_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a10_);
    var0->unknown_a10_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a14_);
    var0->unknown_a14_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a18_);
    var0->unknown_a18_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a1c_);
    var0->unknown_a1c_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a20_);
    var0->unknown_a20_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a24_);
    var0->unknown_a24_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a28_);
    var0->unknown_a28_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a2c_);
    var0->unknown_a2c_ = -1;
    BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a30_);
    var0->unknown_a30_ = -1;

    if (var0->unknown_9c1_ == 2) {
        BackgroundLoader::GetInstance()->RemoveTask(var0->unknown_a0c_);
        var0->unknown_a0c_ = -1;
    }
}
