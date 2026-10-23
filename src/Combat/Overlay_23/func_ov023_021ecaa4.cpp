#include <globaldefs.h>
#include "Resource/GameResources.h"

struct GameResources;
void SetMainBrightness(GameResources*, int, int);
void SetSubBrightness(GameResources*, int, int);
int IsBrightnessTransitionActive(GameResources*);
extern "C" int func_0209ca2c(void* arg0);
extern "C" void ColorEffect_ConfigureBrightnessAdjust(unsigned short*, int, int);
struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);
extern int data_02109bf4;

struct Struct_ov023_021ecaa4 {
    char unknown_0_[0x60];
    unsigned char unknown_60_0_ : 4;
    unsigned char unknown_60_4_ : 4;
    char unknown_61_[0xc0 - 0x61];
    unsigned char unknown_c0_0_ : 4;
    unsigned char unknown_c0_4_ : 4;
    char unknown_c1_[0x430 - 0xc1];
    unsigned char unknown_430_;
    char unknown_431_[0x432 - 0x431];
    unsigned char unknown_432_;
    char unknown_433_[0x438 - 0x433];
    unsigned short unknown_438_;
    char unknown_43a_[0x44a - 0x43a];
    unsigned char unknown_44a_;
};

// USA: func_ov023_021ecaa4
extern "C" ARM void func_ov023_021ecaa4(Struct_ov023_021ecaa4* arg0) {
    GameResources* var0 = GetGameResources();
    unsigned char var1 = arg0->unknown_432_;
    if (var1 == 0) {
        if (arg0->unknown_60_0_ == 0)
            SetMainBrightness(var0, -16, 15);
        else
            SetSubBrightness(var0, -16, 15);
        arg0->unknown_432_++;
    }
    if (var1 != 1) return;
    if (IsBrightnessTransitionActive(var0)) return;
    if (arg0->unknown_44a_ != 0) {
        if (!(arg0->unknown_430_ == 0 || arg0->unknown_430_ == 1)) {
            if (func_0209ca2c((void*)&data_02109bf4)) return;
        }
        if (!(arg0->unknown_438_ & 0x20)) {
            if (arg0->unknown_c0_0_ == 0)
                ColorEffect_ConfigureBrightnessAdjust((unsigned short*)0x4000050, 0x17, 0);
            else
                ColorEffect_ConfigureBrightnessAdjust((unsigned short*)0x4001050, 0x17, 0);
        }
    }
    func_0205d6a0((struct Struct_0205d6a0*)((char*)arg0 + 0xc4), 1);
    arg0->unknown_438_ |= 4;
    if (arg0->unknown_438_ & 0x10)
        func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 1);
    arg0->unknown_432_++;
}
