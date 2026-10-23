#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

extern "C" void MemoryMapTexturePalette(void);
extern "C" void LoadToTexturePalette(void* ptr, int a, unsigned int b);
extern "C" void MemoryUnmapTexturePalette(void);
void LockStagedTextureVRAMCopying(void);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void UnlockStagedTextureVRAMCopying(void);

struct Struct_ov003_0217ca84 {
    SafeAllocator* unknown_0_;
    char unknown_4_[0x88 - 4];
    void* unknown_88_;
};

struct Struct_ov003_0217ca84_2 {
    char unknown_0_[0x2c];
    int unknown_2c_;
    char unknown_30_[0x30 - 0x30];
    unsigned short unknown1_30_;
};

// USA: func_ov003_0217ca84
extern "C" ARM void func_ov003_0217ca84(Struct_ov003_0217ca84* arg0, unsigned short arg1) {
    GameState::GetInstance();
    LockStagedTextureVRAMCopying();
    MemoryMapTexturePalette();

    void* var0 = arg0->unknown_88_;
    if (var0 != NULL) {
        Struct_ov003_0217ca84_2* var1 = (Struct_ov003_0217ca84_2*)((Model3D*)var0)->GetTEX0();
        if (var1 != NULL) {
            int var2 = var1->unknown_2c_;
            if (((Object3D*)((unsigned char*)arg0 + 0x80))->GetTexturePaletteOffset()) {
                var2 = ((Object3D*)((unsigned char*)arg0 + 0x80))->GetTexturePaletteOffset();
            }

            void* var3;
            unsigned int var4 = (unsigned int)var1->unknown1_30_ << 3;
            int var5 = (unsigned short)var2 << 3;

            var3 = arg0->unknown_0_->Allocate(var4);
            if (var3 != NULL) {
                unsigned int var6;
                for (var6 = 0; var6 < var4 / 2; var6++) {
                    ((unsigned short*)var3)[var6] = arg1;
                }
                CleanInvalidateCacheRange(var3, var4);
                LoadToTexturePalette(var3, var5, var4);
            }
        }
    }

    MemoryUnmapTexturePalette();
    UnlockStagedTextureVRAMCopying();
}
