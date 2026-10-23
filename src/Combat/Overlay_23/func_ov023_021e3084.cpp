#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021e3084 func_ov023_021e33dc
#endif
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "NitroSDK/Graphics.h"

extern "C" int func_ov017_021bdbe4(unsigned char* arg0);
extern "C" int func_ov017_021bdbd8(unsigned char* arg0);
extern "C" void func_ov023_021e5628(void* arg0, void* arg1);

struct Struct_ov023_021e3084 { void* unknown_0_; void* unknown_4_; };

#if defined(jpn)
enum { Enum_ov023_021e3084_308 = 0x130, Enum_ov023_021e3084_1588 = 0x56c, Enum_ov023_021e3084_296 = 0x124 };
#else
enum { Enum_ov023_021e3084_308 = 0x134, Enum_ov023_021e3084_1588 = 0x634, Enum_ov023_021e3084_296 = 0x128 };
#endif

struct Struct_ov023_021e3084_2 {
    unsigned char unknown_0_[Enum_ov023_021e3084_296];
    void* unknown_128_;
    unsigned char unknown_12c_[Enum_ov023_021e3084_308 - Enum_ov023_021e3084_296 - sizeof(void*)];
    int unknown_134_;
    unsigned char unknown_138_[Enum_ov023_021e3084_1588 - Enum_ov023_021e3084_308 - sizeof(int)];
    unsigned short unknown_634_;
};

// USA: func_ov023_021e3084
extern "C" ARM void func_ov023_021e3084(void* arg0) {
    Struct_ov023_021e3084_2* var0 = (Struct_ov023_021e3084_2*)arg0;
    GameState::GetInstance();

    if (var0->unknown_134_ > 0) {
        if (--var0->unknown_134_ == 0) {
            var0->unknown_634_ |= 8;
        }
    }

    if ((var0->unknown_634_ & 0x20) == 0) {
        return;
    }

    GameResources* var1 = GetGameResources();
    Struct_ov023_021e3084 var2;
    if (var1 == NULL) {
        var2.unknown_4_ = NULL;
        var2.unknown_0_ = NULL;
    } else {
        var2.unknown_4_ = (void*)func_ov017_021bdbe4((unsigned char*)var1);
        var2.unknown_0_ = (void*)func_ov017_021bdbd8((unsigned char*)var1);
    }

    if (var0->unknown_128_ != NULL) {
        GXFIFO_MATRIX_PUSH = 0;
        func_ov023_021e5628(var0->unknown_128_, &var2);
        GXFIFO_MATRIX_POP = 1;
    }
}
