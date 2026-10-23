#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/FieldActorState.h"
#include "Graphics/Vector.h"

extern "C" Vector3fix func_02034104(void* arg0);

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

extern "C" int _s32_div_f(int a, int b);

extern "C" void func_ov017_021c927c(int arg0, int arg1, int arg2, Vector3fix arg3, int arg4, int arg5, int arg6);

// USA: func_02077a34
extern "C" ARM int func_02077a34(Struct_02076a8c* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0->unknown_166_);
    if (var1 == 0) {
        return 0;
    }

    int var2 = 0;
    arg0->unknown_17d_ |= 0x40;
    void* var3 = func_0202ae18();
    if (func_0202c508(var3)) {
        Vector3fix var4 = func_02034104(var1);
        Vector3fix var5;
        Vector3fix_Subtract(&var4, &arg0->unknown_0_.unknown_0_.unknown_0_.position_, &var5);
        Vector3fix_Normalize(&var5, &var5);
        var2 = fix32_Atan2(var5.x, var5.z);
        func_02033834((struct Struct_02033834_2*)arg0, var2);
        Vector3fixMultiplyScalar(&var5, 0xa000, &var5);
        Vector3fix_Add(&arg0->unknown_0_.unknown_0_.unknown_0_.position_, &var5, &arg0->unknown_158_);
    }

    arg0->unknown_0_.unknown_0_.unknown_b4_ = 0x1c2;
    arg0->unknown_0_.unknown_0_.unknown_b2_ = 0x1c2;
    func_02033b68((struct Struct_02033b68*)arg0, 1);

    int var6 = var0->GetProtagonist()->obj3D_.GetField06();
    int var7 = arg0->unknown_0_.unknown_0_.unknown_0_.GetField06();
    if (var6 == var7) {
        arg0->unknown_0_.unknown_0_.unknown_0_.DisableFlag(0x80);
    }
    arg0->unknown_17a_ = 0;

    if (func_0202b7d8((int*)var3)) {
        if (func_0202c508(var3)) {
            int var8 = arg0->unknown_0_.unknown_0_.unknown_0_.GetField06();
            int var9 = arg0->unknown_0_.unknown_0_.unknown_0_.unknown_2_;
            Vector3fix* var10 = &arg0->unknown_158_;
            int var11 = (arg0->unknown_0_.unknown_0_.unknown_0_.unknown_4_ - 0x70) % 0xc;
            if (var11 >= 0 && var11 < 0xc) {
                Vector3fix var12 = *var10;
                func_ov017_021c927c(var8, var11, var9, var12, var2, 5, arg0->unknown_166_);
            }
        }
    }
    return 1;
}
