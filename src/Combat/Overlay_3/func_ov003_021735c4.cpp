#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021735c4_198 = 0xc4 };
enum { Enum_ov003_021735c4_200 = 0xc6 };
enum { Enum_ov003_021735c4_216 = 0xd4 };
#else
enum { Enum_ov003_021735c4_198 = 0xc6 };
enum { Enum_ov003_021735c4_200 = 0xc8 };
enum { Enum_ov003_021735c4_216 = 0xd8 };
#endif
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"
#include "NitroSDK/BGBases.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"

struct Struct_02020cb8_4;
struct Struct_02020aec;

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_020a620c(void* arg0);
extern "C" int func_020a64a8(unsigned char* arg0);
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);

extern char data_ov003_02180a76[];

struct Struct_ov003_021735c4 {
    char unknown_0_[Enum_ov003_021735c4_198];
    short unknown_c6_;
    char unknown_c8_[Enum_ov003_021735c4_216 - Enum_ov003_021735c4_200];
    unsigned char unknown_d8_[0x15];
    unsigned char unknown_ed_;
    char unknown_ee_;
    unsigned char unknown_ef_;
    #if defined(jpn)
    char unknown_ec_[12];
#else
    char unknown_f0_[4];
#endif
    int unknown_f4_;
};

// USA: func_ov003_021735c4
extern "C" ARM void func_ov003_021735c4(struct Struct_ov003_021735c4* arg0) {
    GameResources* var0 = GetGameResources();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    func_020a620c(arg0->unknown_d8_);

    if (arg0->unknown_ef_ == 0) {
        arg0->unknown_f4_ = var1->QueueLoadFile(data_ov003_02180a76, 0);
        arg0->unknown_ef_ = 1;
    } else if (arg0->unknown_ef_ == 1) {
        if (var1->GetTaskStatus(arg0->unknown_f4_) != 0) {
            void* var2;
            void* var3;
            unsigned int var4;
            unsigned char* var5[3];
            int var6[3];
            var1->GetLoadedFileByID(arg0->unknown_f4_, &var3, &var4);
            int var7 = func_02046900((struct Struct_02020cb8_4*)var3);
            for (int var8 = 0; var8 < var7; var8++) {
                var5[var8] = (unsigned char*)func_020467f0((struct Struct_02020aec*)var3, var8, &var2, &var6[var8]);
            }
            memset((void*)GetSubBG0ScreenBase(), 0, 0x800);
            unsigned char* var9 = var5[2];
            CleanInvalidateCacheRange(var9 + 0x4c, 0x40);
            LoadToSubBGStandardPalette(var9 + 0x4c, 0x40, 0x40);
            arg0->unknown_c6_ = -0xc0;
            *(volatile unsigned int*)0x4001010 = (arg0->unknown_c6_ << 16) & 0x1ff0000;
            var1->RemoveTask(arg0->unknown_f4_);
            arg0->unknown_f4_ = -1;
            if (func_020a64a8(arg0->unknown_d8_) == 0) {
                arg0->unknown_ef_ = 2;
            } else {
                SetSubBrightness(var0, 0, 0x18);
                arg0->unknown_ef_ = 3;
            }
        }
    } else if (arg0->unknown_ef_ == 2) {
        if (func_020a64a8(arg0->unknown_d8_) != 0) {
            SetSubBrightness(var0, 0, 0x18);
            arg0->unknown_ef_ = 3;
        }
    } else if (arg0->unknown_ef_ == 3) {
        if (IsSubBrightnessTransitionActive(var0) == 0) {
            arg0->unknown_ed_ = 2;
            arg0->unknown_ef_ = 0;
        }
    }
}
