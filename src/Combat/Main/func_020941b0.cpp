#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_02093b90_2 {
    #if defined(jpn)
    char unknown_0_[0x100];
#else
    char unknown1_0_[0x340];
#endif
    int unknown_340_;
    #if defined(jpn)
    char unknown_104_[0x138 - 0x104];
#else
    char unknown_344_[0x3c8 - 0x344];
#endif
    unsigned char unknown_3c8_;
    char unknown_3c9_[0x3cd - 0x3c9];
    unsigned char unknown_3cd_0_ : 4;
    unsigned char unknown_3cd_4_ : 4;
};

// USA: func_020941b0
extern "C" ARM void func_020941b0(struct Struct_02093b90_2* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();
    if (arg0->unknown_340_ >= 0) {
        ((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_340_));
        arg0->unknown_340_ = -1;
    }
    arg0->unknown_3c8_ &= ~0x7f;
    arg0->unknown_3cd_0_ = 0;
    #if defined(jpn)
    ((unsigned char*)arg0)[0x13d] |= 8;
#else
    ((unsigned char*)arg0)[0x3cd] |= 8;
#endif
}
