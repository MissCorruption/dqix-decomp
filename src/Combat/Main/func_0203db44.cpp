#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/EntryGetterTypes.h"
#include "World/Object3D.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/VRAMStaging.h"
#include "NitroSDK/LoadToVRAM.h"
#include "NitroSDK/Cache.h"

struct Struct_0203db44 {
    Struct_0203e0a0 unknown_0_;
    char unknown_10_[8];
    Object3D* unknown_18_;
};

struct Struct_0203db44_2 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

// USA: func_0203db44
extern "C" ARM void func_0203db44(void*, Struct_0203db44* arg1, SafeAllocator* arg2) {
    unsigned short* var0;
    unsigned short* var1;
    unsigned int var2;
    unsigned int var3;
    if (arg1->unknown_18_ == NULL) return;
    GameState::GetInstance();
    Object3D* var4 = arg1->unknown_18_;
    Struct_0203db44_2* var5 = (Struct_0203db44_2*)func_02040538(&arg1->unknown_0_);
    if (var5 == NULL) return;
    unsigned short var6 = var5->unknown_20_;
    unsigned short var7 = var6 & 31;
    unsigned short var8 = (var6 & 0x3e0) >> 5;
    unsigned short var9 = (var6 & 0x7c00) >> 10;
    LockStagedTextureVRAMCopying();
    MemoryMapTexturePalette();
    if (var4->pModel_ != NULL) {
        NSBXXTex* var10 = var4->pModel_->GetTEX0();
        if (var10 != NULL) {
            if (var6 == 0 && var4->GetTexturePaletteOffset() == 0) {
                NSBXX_Tex_LoadPaletteToVRAM(var10, false);
            } else {
                var3 = var10->block4VRAMLoadOffset_;
                if (var4->GetTexturePaletteOffset() != 0)
                    var3 = var4->GetTexturePaletteOffset();
                var2 = var10->block4NumEightBytes_ << 3;
                var3 = (var3 & 0xffff) << 3;
                var1 = (unsigned short*)((char*)var10 + var10->block4Offset_);
                var0 = (unsigned short*)arg2->Allocate(var2);
                if (var0 != NULL) {
                    for (unsigned int var11 = 0; var11 < var2 / 2; var11++) {
                        unsigned short var12 = var1[var11] & 31;
                        unsigned short var13 = (var1[var11] & 0x3e0) >> 5;
                        unsigned short var14 = (var1[var11] & 0x7c00) >> 10;
                        var12 += var7;
                        var13 += var8;
                        var14 += var9;
                        if (var12 > 31) var12 = 31;
                        if (var13 > 31) var13 = 31;
                        if (var14 > 31) var14 = 31;
                        var0[var11] = var12 | (var13 << 5) | (var14 << 10);
                    }
                    CleanInvalidateCacheRange(var0, var2);
                    LoadToTexturePalette(var0, var3, var2);
                }
            }
        }
    }
    MemoryUnmapTexturePalette();
    UnlockStagedTextureVRAMCopying();
}
