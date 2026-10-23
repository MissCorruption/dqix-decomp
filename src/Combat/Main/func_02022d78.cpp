#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_02022bb0 func_02022644
#endif

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
extern "C" void func_02022bb0(void* arg0);

struct Struct_02022d78 {
    #if defined(jpn)
    char unknown_0_[0x915];
#else
    char unknown1_0_[0x9c1];
#endif
    unsigned char unknown_9c1_;
    unsigned char unknown_9c2_;
    unsigned char unknown_9c3_;
    char unknown_9c4_[0xa34 - 0x9c4];
    unsigned char unknown_a34_;
};

// USA: func_02022d78
extern "C" ARM void func_02022d78(struct Struct_02022d78* arg0, int arg1) {
    if (arg0->unknown_9c3_ != 0) {
        SetSubBrightness(GetGameResources(), -16, 0);
    }
    func_02022bb0(arg0);
    arg0->unknown_a34_ = arg0->unknown_9c1_;
    arg0->unknown_9c1_ = arg1;
    arg0->unknown_9c3_ = 1;
    arg0->unknown_9c2_ = 0;
}
