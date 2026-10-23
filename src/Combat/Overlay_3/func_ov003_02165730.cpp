#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02165730_969 = 0x139 };
enum { Enum_ov003_02165730_912 = 0x278 };
enum { Enum_ov003_02165730_208 = 0x10 };
#else
enum { Enum_ov003_02165730_969 = 0x3c9 };
enum { Enum_ov003_02165730_912 = 0x390 };
enum { Enum_ov003_02165730_208 = 0xd0 };
#endif
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/GameResources.h"

struct Struct_02012de8;
struct Struct_020e25e8;

struct Struct_ov003_02165278 {
    unsigned char unknown_0_[Enum_ov003_02165730_969];
    unsigned char unknown_3c9_0_ : 1;
};

extern "C" void* func_020d6c00(void);
extern "C" Struct_ov003_02165278* func_020936f8(void);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" int func_02046708(struct Struct_02012de8* arg0, unsigned int arg1);
extern "C" void func_020e25e8(struct Struct_020e25e8* arg0);

struct Struct_ov003_02165730 {
    unsigned char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

struct Struct_ov003_02165730_2 {
    unsigned char unknown_0_[Enum_ov003_02165730_912];
    struct Struct_020e25e8* unknown_390_;
    unsigned char unknown_394_[Enum_ov003_02165730_208];
    unsigned int unknown_464_;
    unsigned char unknown_468_[0x1c];
    short unknown_484_;
    short unknown_486_;
    unsigned char unknown_488_[0x1b];
    unsigned char unknown_4a3_;
    unsigned char unknown_4a4_;
    unsigned char unknown_4a5_;
};

// USA: func_ov003_02165730
extern "C" ARM void func_ov003_02165730(Struct_ov003_02165730_2* arg0) {
    GameResources* var0 = GetGameResources();
    void* var1 = func_020d6c00();

    if (arg0->unknown_4a4_ == 0) {
        func_020936f8()->unknown_3c9_0_ = 1;
        func_02043204((char*)func_020421a0());
        arg0->unknown_484_ = arg0->unknown_486_ = -1;
        arg0->unknown_4a5_ = 0;

        GameState* var2 = GameState::GetInstance();
        Struct_ov003_02165730* var3 = (Struct_ov003_02165730*)func_02010828(var2);
        for (int var4 = 0; var4 < var3->unknown_f7c_; var4++) {
            GameObject* var5 = func_0200ff1c(var2, var3->unknown_f78_[var4]);
            if (var5 != NULL) {
                var5->obj3D_.MakeVisible();
            }
        }

        if (IsBrightnessTransitionActive(var0) != 0) return;
        UnlockAndSetBrightness(var0, 0, 0xf);
        arg0->unknown_4a4_ = 1;
        if (arg0->unknown_390_ == NULL) return;
        func_020e25e8(arg0->unknown_390_);
    } else if (arg0->unknown_4a4_ == 1) {
        if (IsBrightnessTransitionActive(var0) != 0) return;
        if (func_02046708((struct Struct_02012de8*)var1, 0x41) != 0) {
            arg0->unknown_464_ |= 0x800;
        }
        arg0->unknown_4a4_ = 2;
    } else if (arg0->unknown_4a4_ == 2) {
        func_02043204((char*)func_020421a0());
        arg0->unknown_484_ = arg0->unknown_486_ = -1;
        arg0->unknown_4a5_ = 0;
        arg0->unknown_4a3_ = 0x10;
        arg0->unknown_4a4_ = 0;
    }
}
