#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Model3D.h"
#include "NitroSDK/NSBXX/NSBXX.h"
#include "Graphics/VRAMStaging.h"
#include "NitroSDK/Cache.h"

struct Struct_ov025_021e7ec0 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov000_02160130(void);
extern "C" GameObject* func_ov000_02162d88(void* arg0, unsigned short arg1);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void func_02048588(unsigned char* arg0, unsigned char* arg1);
extern "C" void func_ov000_021677fc(void* arg0);

// USA: func_ov025_021e7ec0
extern "C" ARM int func_ov025_021e7ec0(struct Struct_ov025_021e7ec0* arg0, int arg1, int arg2, void* arg3) {
    GameState* var0 = GameState::GetInstance();
    int var1[8];
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var1[0]);
    void* var3 = func_ov000_02160130();
    GameObject* var4 = func_ov000_02162d88(var3, arg0->unknown_a_);
    if (var4 == NULL) return 1;
    if (var4->obj3D_.pModel_ == NULL) return 1;
    NSBXXTex* var5 = var4->obj3D_.pModel_->GetTEX0();
    if (var5 == NULL) return 1;
    for (int var6 = 0; var6 < var2; var6++) {
        GameObject* var7 = func_0200fea4(var0, var1[var6]);
        if (var7) {
            func_02048588((unsigned char*)var4, (unsigned char*)var7);
            unsigned int var8 = var7->obj3D_.GetTexturePaletteOffset();
            CleanInvalidateCacheRange((char*)var5 + var5->block4Offset_, var5->block4NumEightBytes_ << 3);
            NSBXX_Tex_WritePaletteVRAMOffset(var5, var8);
            StageTexFilePaletteData(var5, true);
        }
    }
    func_ov000_021677fc(var3);
    return 1;
}
