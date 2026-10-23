#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <NitroSDK/Cache.h>
#include <NitroSDK/LoadToVRAM.h>
#include "Resource/GameResources.h"
struct Struct_020a629c { char unknown_0_[0xa]; unsigned char unknown_a_, unknown_b_; int unknown_c_; };
struct Struct_020a629c_2 { char unknown_0_[0xc]; unsigned int unknown_c_; char unknown_10_[1]; };
struct Struct_020a629c_3 { char unknown_0_[0xc]; char unknown_c_[0x200]; };
struct Struct_02020cb8_4;
struct Struct_02020aec;
extern char data_020f1b28;
extern "C" int func_02046900(Struct_02020cb8_4*);
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
// USA: func_020a629c
extern "C" ARM void func_020a629c(Struct_020a629c* arg0) {
    GetGameResources();
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_b_ == 0) {
        arg0->unknown_c_ = var0->QueueLoadFile(&data_020f1b28, 0);
        arg0->unknown_b_ = 1;
    } else if (arg0->unknown_b_ == 1 && var0->GetTaskStatus(arg0->unknown_c_)) {
        void* var1;
        void* var2;
        unsigned int var3;
        void* var4[3];
        int var5[3];
        var0->GetLoadedFileByID(arg0->unknown_c_, &var2, &var3);
        int var6 = func_02046900((Struct_02020cb8_4*)var2);
        for (int var7 = 0;var7 < var6;var7++) var4[var7] = func_020467f0((Struct_02020aec*)var2, var7, &var1, &var5[var7]);
        Struct_020a629c_2* var8 = (Struct_020a629c_2*)var4[0];
        unsigned int var9 = var8->unknown_c_;
        CleanInvalidateCacheRange(var8->unknown_10_, var9);
        LoadToSubBG1CharacterData(((Struct_020a629c_2*)var4[0])->unknown_10_, 0, var9);
        Struct_020a629c_3* var10 = (Struct_020a629c_3*)var4[1];
        CleanInvalidateCacheRange(var10->unknown_c_, 0x200);
        LoadToSubBGStandardPalette(var10->unknown_c_, 0, 0x40);
        LoadToSubBGStandardPalette(var10->unknown_c_+0x180, 0x180, 0x80);
        unsigned int var11;
        Struct_020a629c_2* var12 = (Struct_020a629c_2*)var4[2];
        var11 = var12->unknown_c_;
        CleanInvalidateCacheRange(var12->unknown_10_, var11);
        LoadToSubBG1ScreenData(var12->unknown_10_, 0, var11);
        var0->RemoveTask(arg0->unknown_c_);
        arg0->unknown_c_ = -1;
        arg0->unknown_a_ = 1;
        arg0->unknown_b_ = 0;
    }
}
