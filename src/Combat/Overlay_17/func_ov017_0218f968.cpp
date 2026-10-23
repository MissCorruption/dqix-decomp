#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Model3D.h"
#include "Graphics/VRAMStaging.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Cache.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern AllocatorUnion data_02114e20;

static inline unsigned short inline_ov017_0218f968(unsigned short arg0) {
    return arg0 & 0x1f;
}

static inline unsigned short inline_ov017_0218f968_2(unsigned short arg0) {
    return (arg0 & 0x3e0) >> 5;
}

static inline unsigned short inline_ov017_0218f968_3(unsigned short arg0) {
    return (arg0 & 0x7c00) >> 10;
}

// USA: func_ov017_0218f968
extern "C" ARM void func_ov017_0218f968(unsigned char* arg0, int arg1, unsigned short arg2) {
    GameState* var0 = GameState::GetInstance();

    unsigned short var1 = inline_ov017_0218f968(arg2);
    unsigned short var2 = inline_ov017_0218f968_2(arg2);
    unsigned short var3 = inline_ov017_0218f968_3(arg2);

    unsigned short* var4 = NULL;

    LockStagedTextureVRAMCopying();

    GameObject* var5 = var0->GetGameObjectByIndex(arg1);
    if (var5 != NULL && var5->obj3D_.pModel_ != NULL) {
        NSBXXTex* var6 = var5->obj3D_.pModel_->GetTEX0();
        if (var6 != NULL) {
            if (var5->obj3D_.GetField9e() == 0) {
                unsigned int var7 = var6->block4VRAMLoadOffset_;
                var7 = var5->obj3D_.GetTexturePaletteOffset() != 0 ? var5->obj3D_.GetTexturePaletteOffset() : var7;
                unsigned int var8 = var6->block4NumEightBytes_ << 3;
                unsigned int var9 = (var7 & 0xffff) << 3;
                unsigned short* var10 = (unsigned short*)((char*)var6 + var6->block4Offset_);
                var4 = (unsigned short*)func_02012d88(&data_02114e20, var8);
                if (var4 != NULL) {
                    for (unsigned int var11 = 0; var11 < var8 / 2; var11++) {
                        unsigned short var12 = var10[var11];
                        unsigned short var13 = inline_ov017_0218f968(var12);
                        unsigned short var14 = inline_ov017_0218f968_2(var12);
                        unsigned short var15 = inline_ov017_0218f968_3(var12);
                        var13 += var1;
                        var14 += var2;
                        var15 += var3;
                        if (var13 > 31) {
                            var13 = 31;
                        }
                        if (var14 > 31) {
                            var14 = 31;
                        }
                        if (var15 > 31) {
                            var15 = 31;
                        }
                        var4[var11] = var13 | (var14 << 5) | (var15 << 10);
                    }
                    CleanInvalidateCacheRange(var4, var8);
                    StageMemoryToVRAM(VRAMSubregion_TexturePalette, var4, var9, var8, false, true);
                }
            } else if (var5->obj3D_.GetField9e() == 1) {
                unsigned int var16 = var6->block4VRAMLoadOffset_;
                var16 = var5->obj3D_.GetTexturePaletteOffset() != 0 ? var5->obj3D_.GetTexturePaletteOffset() : var16;
                unsigned int var17 = var6->block4NumEightBytes_ << 3;
                unsigned int var18 = (var16 & 0xffff) << 3;
                var4 = (unsigned short*)func_02012d88(&data_02114e20, var17);
                if (var4 != NULL) {
                    for (unsigned int var19 = 0; var19 < var17 / 2; var19++) {
                        var4[var19] = arg2;
                    }
                    CleanInvalidateCacheRange(var4, var17);
                    StageMemoryToVRAM(VRAMSubregion_TexturePalette, var4, var18, var17, false, true);
                }
            } else if (var5->obj3D_.GetField9e() == 2) {
                unsigned short* var20;
                unsigned int var21 = var6->block4VRAMLoadOffset_;
                var21 = var5->obj3D_.GetTexturePaletteOffset() != 0 ? var5->obj3D_.GetTexturePaletteOffset() : var21;
                unsigned int var22 = var6->block4NumEightBytes_ << 3;
                var21 = (var21 & 0xffff) << 3;
                var20 = (unsigned short*)((char*)var6 + var6->block4Offset_);
                var4 = (unsigned short*)func_02012d88(&data_02114e20, var22);
                if (var4 != NULL) {
                    float var23 = var1 / 31.0f;
                    float var24 = var2 / 31.0f;
                    float var25 = var3 / 31.0f;
                    for (unsigned int var26 = 0; var26 < var22 / 2; var26++) {
                        unsigned short var27 = var20[var26];
                        unsigned short var28 = inline_ov017_0218f968(var27);
                        unsigned short var29 = inline_ov017_0218f968_2(var27);
                        unsigned short var30 = inline_ov017_0218f968_3(var27);
                        unsigned short var31 = var28 * var23;
                        unsigned short var32 = var29 * var24;
                        unsigned short var33 = var30 * var25;
                        var4[var26] = var31 | (var32 << 5) | (var33 << 10);
                    }
                    CleanInvalidateCacheRange(var4, var22);
                    StageMemoryToVRAM(VRAMSubregion_TexturePalette, var4, var21, var22, false, true);
                }
            }
        }
    }
    UnlockStagedTextureVRAMCopying();

    if (var4 != NULL) {
        func_02012da4(&data_02114e20, var4);
    }
}
