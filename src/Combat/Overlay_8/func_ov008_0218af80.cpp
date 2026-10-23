#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Resource/Brightness.h"
#include "NitroSDK/OverlayId.h"
#include "Resource/GameResources.h"

extern "C" void func_020a1940(unsigned int arg0);
extern "C" void func_ov008_021843f8(void* arg0);
extern "C" void func_ov008_021842a0(void* arg0, void* arg1);
extern "C" void func_ov008_02184a3c(char* arg0, unsigned char arg1);
extern "C" void func_020dc2bc();

struct Struct_ov008_0218af80 {
    char unknown_0_[0x228];
    char unknown_228_[0x288 - 0x228];
    char unknown_288_[0x2a8 - 0x288];
    char unknown_2a8_[0xdcc - 0x2a8];
    int unknown_dcc_;
    char unknown_dd0_[R(0xdd4 - 0xdd0, 0xdd8 - 0xdd0)];
    char* unknown_dd8_;
    char* unknown_ddc_;
    char unknown_de0_[0xde4 - 0xde0];
    char* unknown_de4_;
    char unknown_de8_[0xdf6 - 0xde8];
    char unknown_df6_[0xe04 - 0xdf6];
    char unknown_e04_[0xe9b - 0xe04];
    unsigned char unknown_e9b_;
    signed char unknown_e9c_;
    char unknown_e9d_[R(0xeb4 - 0xe99, 0xebc - 0xe9d)];
    char* unknown_ebc_;
    unsigned char unknown_ec0_0_ : 1;
    unsigned char unknown_ec0_1_ : 1;
    unsigned char unknown_ec0_2_ : 1;
    unsigned char unknown_ec0_3_ : 5;
};

// USA: func_ov008_0218af80
extern "C" ARM void func_ov008_0218af80(Struct_ov008_0218af80* arg0) {
    GameResources* var0 = GetGameResources();
    if (arg0->unknown_e9c_ == 0 && arg0->unknown_ec0_1_ && !IsBrightnessTransitionActive(var0)) {
        func_020a1940(OVERLAY_ID(8));
        func_ov008_021843f8(arg0->unknown_2a8_);
        arg0->unknown_dcc_ = 1;
        func_ov008_021842a0(arg0->unknown_2a8_, arg0->unknown_228_);
        func_ov008_02184a3c(arg0->unknown_2a8_, 1);
        arg0->unknown_de4_ = arg0->unknown_288_;
        char* var1 = arg0->unknown_ebc_;
        char* var2;
        if (var1 == NULL) {
            var1 = arg0->unknown_df6_;
            var2 = arg0->unknown_e04_;
        } else {
            var2 = var1 + 0x38;
        }
        arg0->unknown_dd8_ = var1;
        arg0->unknown_ddc_ = var2;
        arg0->unknown_e9c_ = arg0->unknown_e9c_ + 1;
        return;
    }
    if (arg0->unknown_e9c_ == 1 && arg0->unknown_ec0_1_ && arg0->unknown_ec0_2_) {
        func_020dc2bc();
        SetSubBrightness(var0, -16, 15);
        arg0->unknown_e9b_ = 1;
        arg0->unknown_e9c_ = 0;
    }
}
