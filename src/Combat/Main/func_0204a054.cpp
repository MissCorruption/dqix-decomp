#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0204a054_4;
struct Struct_0204a054_5;

struct Struct_0204a054;
struct Struct_0204a054_2;

struct Struct_0204a054_3 {
    char unknown_0_[0x58];
    unsigned char unknown_58_;
    unsigned char unknown_59_;
    unsigned char unknown_5a_;
    unsigned char unknown_5b_;
    unsigned short unknown_5c_;
};

struct Struct_020489e8_3 {
    char unknown_0_[0x13c];
    struct Struct_0204a054_3* unknown_13c_;
};

// USA: func_0204a054
extern "C" ARM void func_0204a054(struct Struct_020489e8_3* arg0) {
    GameState* var0;
    struct Struct_0204a054_3* var1;
    int var2;
    unsigned short var3;
    var0 = GameState::GetInstance();
    var1 = arg0->unknown_13c_;
    if (var1->unknown_5c_ == 0) return;
    var2 = var0->GetEffectiveDeltaTime();
    var3 = var1->unknown_5c_;
    if ((unsigned int)var2 < var3) {
        var1->unknown_5c_ = var3 - var2;
        return;
    }
    {
        Struct_0204a054_5* var4 = (Struct_0204a054_5*)((Object3D*)((Struct_0204a054_4*)arg0))->GetAnimationPackageByIndex(var1->unknown_58_);
        if (var4 != NULL) {
            Struct_0204a054_2* var5 = (Struct_0204a054_2*)((BCFG*)((Struct_0204a054*)((char*)var4 + 4)))->GetAnimationRecord(var1->unknown_59_);
            if (var5 != NULL) {
                ((Object3D*)arg0)->MaybeSetRegularAnimation((char const*)var5, var1->unknown_5a_);
            }
        }
    }
    var1->unknown_5c_ = 0;
}
