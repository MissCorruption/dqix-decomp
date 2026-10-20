#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Model3D.h"
#include "Graphics/VRAMStaging.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/Cache.h"

void* AllocateAligned4_02012d88(AllocatorUnion* alloc, unsigned int size);
void TailForward02012da4(AllocatorUnion* alloc, void* data);

extern AllocatorUnion data_02114e20;

static inline unsigned short GetColorR(unsigned short c) {
    return c & 0x1f;
}

static inline unsigned short GetColorG(unsigned short c) {
    return (c & 0x3e0) >> 5;
}

static inline unsigned short GetColorB(unsigned short c) {
    return (c & 0x7c00) >> 10;
}

// USA: func_ov017_0218f968
extern "C" ARM void func_ov017_0218f968(unsigned char* ov, int idx, unsigned short color) {
    GameState* battleStruct = GameState::GetInstance();

    unsigned short addR = GetColorR(color);
    unsigned short addG = GetColorG(color);
    unsigned short addB = GetColorB(color);

    unsigned short* buf = NULL;

    LockStagedTextureVRAMCopying();

    GameObject* obj = battleStruct->GetGameObjectByIndex(idx);
    if (obj != NULL && obj->obj3D_.pModel_ != NULL) {
        NSBXXTex* tex = obj->obj3D_.pModel_->GetTEX0();
        if (tex != NULL) {
            if (obj->obj3D_.GetField9e() == 0) {
                unsigned int offset = tex->block4VRAMLoadOffset_;
                offset = obj->obj3D_.GetTexturePaletteOffset() != 0 ? obj->obj3D_.GetTexturePaletteOffset() : offset;
                unsigned int size = tex->block4NumEightBytes_ << 3;
                unsigned int vramOffset = (offset & 0xffff) << 3;
                unsigned short* src = (unsigned short*)((char*)tex + tex->block4Offset_);
                buf = (unsigned short*)AllocateAligned4_02012d88(&data_02114e20, size);
                if (buf != NULL) {
                    for (unsigned int j = 0; j < size / 2; j++) {
                        unsigned short c = src[j];
                        unsigned short r = GetColorR(c);
                        unsigned short g = GetColorG(c);
                        unsigned short b = GetColorB(c);
                        r += addR;
                        g += addG;
                        b += addB;
                        if (r > 31) {
                            r = 31;
                        }
                        if (g > 31) {
                            g = 31;
                        }
                        if (b > 31) {
                            b = 31;
                        }
                        buf[j] = r | (g << 5) | (b << 10);
                    }
                    CleanInvalidateCacheRange(buf, size);
                    StageMemoryToVRAM(VRAMSubregion_TexturePalette, buf, vramOffset, size, false, true);
                }
            } else if (obj->obj3D_.GetField9e() == 1) {
                unsigned int offset = tex->block4VRAMLoadOffset_;
                offset = obj->obj3D_.GetTexturePaletteOffset() != 0 ? obj->obj3D_.GetTexturePaletteOffset() : offset;
                unsigned int size = tex->block4NumEightBytes_ << 3;
                unsigned int vramOffset = (offset & 0xffff) << 3;
                buf = (unsigned short*)AllocateAligned4_02012d88(&data_02114e20, size);
                if (buf != NULL) {
                    for (unsigned int j = 0; j < size / 2; j++) {
                        buf[j] = color;
                    }
                    CleanInvalidateCacheRange(buf, size);
                    StageMemoryToVRAM(VRAMSubregion_TexturePalette, buf, vramOffset, size, false, true);
                }
            } else if (obj->obj3D_.GetField9e() == 2) {
                unsigned short* src;
                unsigned int offset = tex->block4VRAMLoadOffset_;
                offset = obj->obj3D_.GetTexturePaletteOffset() != 0 ? obj->obj3D_.GetTexturePaletteOffset() : offset;
                unsigned int size = tex->block4NumEightBytes_ << 3;
                offset = (offset & 0xffff) << 3;
                src = (unsigned short*)((char*)tex + tex->block4Offset_);
                buf = (unsigned short*)AllocateAligned4_02012d88(&data_02114e20, size);
                if (buf != NULL) {
                    float scaleR = addR / 31.0f;
                    float scaleG = addG / 31.0f;
                    float scaleB = addB / 31.0f;
                    for (unsigned int j = 0; j < size / 2; j++) {
                        unsigned short c = src[j];
                        unsigned short r = GetColorR(c);
                        unsigned short g = GetColorG(c);
                        unsigned short b = GetColorB(c);
                        unsigned short nr = r * scaleR;
                        unsigned short ng = g * scaleG;
                        unsigned short nb = b * scaleB;
                        buf[j] = nr | (ng << 5) | (nb << 10);
                    }
                    CleanInvalidateCacheRange(buf, size);
                    StageMemoryToVRAM(VRAMSubregion_TexturePalette, buf, offset, size, false, true);
                }
            }
        }
    }
    UnlockStagedTextureVRAMCopying();

    if (buf != NULL) {
        TailForward02012da4(&data_02114e20, buf);
    }
}
