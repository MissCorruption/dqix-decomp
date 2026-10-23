#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void* func_02057924(void);
extern "C" void func_02057f00(void* arg0, int arg1);
extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f14(void* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
struct Struct_ov001_0215bcc0;
struct Struct_0208f410;

struct Struct_ov025_021e8bc4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    struct Struct_ov025_021e8bc4* unknown_8_;
};
struct Struct_ov025_021e8bc4_2 {
    char unknown_0_[0x1d8];
    struct Struct_ov025_021e8bc4* unknown_1d8_;
};

// USA: func_ov025_021e8bc4
extern "C" ARM void func_ov025_021e8bc4(struct Struct_ov025_021e8bc4_2* arg0, int arg1) {
    if (!arg0->unknown_1d8_) return;

    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924();
    func_020100bc(var0);

    struct Struct_ov025_021e8bc4* var2 = arg0->unknown_1d8_;
    while (var2 != 0 && arg1 <= var2->unknown_1_) {
        switch (var2->unknown_0_) {
        case 0: {
            GameObject* var3 = var0->GetGameObjectByIndex(var2->unknown_2_);
            if (var3) {
                char* var4 = *(char**)((char*)var3 + 0x14);
                char var5[0x28];
                if (var4) strcpy(var5, var4);
                unsigned char var6 = var3->obj3D_.animationFlags_;
                unsigned int var7 = var3->obj3D_.animationTime_;
                ((Object3D*)((struct Struct_ov001_0215bcc0*)var3))->RemoveAnimationPackageByID(var2->unknown_4_);
                var3->obj3D_.MaybeSetRegularAnimation((char const*)var5, var6);
                ((Object3D*)((struct Struct_0208f410*)var3))->SetCurrentAnimationTime(var7);
            }
            break;
        }
        case 1:
            func_02057f00(var1, var2->unknown_4_);
            break;
        case 3:
            func_020100c4(var0, (int)func_ov000_02160f14(func_ov000_02160130()));
            break;
        case 4: {
            GameObject* var8 = var0->GetGameObjectByIndex(var2->unknown_2_);
            if (var8) {
                ((Object3D*)((unsigned char*)var8))->Destroy();
                func_0200fd48(var0, var2->unknown_2_);
            }
            break;
        }
        default:
            break;
        }
        var2 = var2->unknown_8_;
    }
    arg0->unknown_1d8_ = var2;
}
