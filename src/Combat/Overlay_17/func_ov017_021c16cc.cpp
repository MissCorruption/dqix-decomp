#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"

int IsBrightnessTransitionActive(GameResources*);
void SetBrightness(GameResources*, int, int);
extern "C" void func_ov017_021a2fa0(void* arg0);

struct Struct_ov017_021c16cc {
    unsigned char unknown_0_[0x1];
    unsigned char unknown_1_;
    unsigned char unknown_2_[0x6];
    signed char unknown_8_;
    unsigned char unknown_9_;
};

// USA: func_ov017_021c16cc
extern "C" ARM void func_ov017_021c16cc(Struct_ov017_021c16cc* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021c16cc_1844=0x524};
#else
 enum {Enum_ov017_021c16cc_1844=0x734};
#endif
    GameResources* var0 = GetGameResources();
    int var1 = (int)BackgroundLoader::GetInstance();
    signed char var2 = arg0->unknown_8_;
    if (var2 == 0) {
        SetBrightness(var0, -0x10, 0xf);
        arg0->unknown_8_ = arg0->unknown_8_ + 1;
        return;
    }
    if (var2 != 1) {
        return;
    }
    if (IsBrightnessTransitionActive(var0) != 0) {
        return;
    }
    if (((BackgroundLoader*)((void*)var1))->GetNumQueuedTasks() > 0) {
        return;
    }
    func_ov017_021a2fa0(var0);
    void* var3 = *(void**)((char*)var0 + 0x3000 + Enum_ov017_021c16cc_1844);
    if (((unsigned char*)var3)[2] == 0) {
        SetBrightness(var0, 0, 0xf);
    }
    if (arg0->unknown_9_ != 0) {
        SetBrightness(var0, -0x10, 0);
    }
    arg0->unknown_1_ = 1;
}
