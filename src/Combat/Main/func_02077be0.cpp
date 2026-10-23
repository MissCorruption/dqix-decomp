#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/FieldActorState.h"
#include "Graphics/Vector.h"

struct Struct_02077788_2;
extern "C" int func_02077a20(struct Struct_02077788_2* arg0);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_02033f44;
extern "C" int* func_02033f44(struct Struct_02033f44* arg0);

extern "C" void func_02076ccc(void* arg0, int arg1);
extern "C" void func_020794f8(void* arg0, int arg1, int arg2);

extern "C" int func_0202b7d8(int* arg0);

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_020322c0(void* arg0, int* arg1);
extern "C" Vector3fix func_02034104(void* arg0);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

// USA: func_02077be0
extern "C" ARM void func_02077be0(Struct_02076a8c* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    GameObject* var2 = var0->GetPartyMemberByIndex(arg0->unknown_166_);
    if (var2 == NULL) {
        return;
    }

    Vector3fix var3 = arg0->unknown_0_.unknown_0_.unknown_0_.position_;
    var3.y = 0;
    int var4 = 0;
    Vector3fix var5 = arg0->unknown_158_;
    var5.y = 0;
    Vector3fix var6;
    Vector3fix_Subtract(&var5, &var3, &var6);
    Vector3fix_Normalize(&var6, &var6);
    int var7 = fix32_Atan2(var6.x, var6.z);
    func_02033834((struct Struct_02033834_2*)arg0, var7);
    arg0->unknown_0_.unknown_0_.unknown_b4_ = 0x1c2;
    arg0->unknown_0_.unknown_0_.unknown_b2_ = 0x1c2;
    func_02033b68((struct Struct_02033b68*)arg0, 1);

    int* var8 = func_02033f44((struct Struct_02033f44*)arg0);
    if (var8 != NULL) {
        int var9 = (short)arg0->unknown_0_.unknown_0_.unknown_ae_;
        if (func_020322c0(var8, &var9) < 0x199) {
            var4 = 1;
        }
    }

    if (var4 != 0) {
        func_02076ccc(arg0, 1);
        arg0->unknown_0_.unknown_154_ = 0;
        if (func_0202b7d8((int*)var1) == 0) {
            return;
        }
        func_020794f8(arg0, 0, 0);
        return;
    }

    int var10 = Vector3fix_Distance(&var3, &var5);
    unsigned short var11 = arg0->unknown_166_;
    if (var2->obj3D_.unknown_0_ & 0x1000) {
        var11 = 0;
    }

    if (func_0202b7d8((int*)var1) == 0 ||
        var11 == func_0202c1a4((struct Struct_0202c1a4*)var1)) {
        Vector3fix var12 = func_02034104(var2);
        int var13 = var2->obj3D_.GetRadius();
        int var14 = arg0->unknown_0_.unknown_0_.unknown_0_.GetScale().x * 15;
        int var15 = func_02077a20((struct Struct_02077788_2*)arg0) >> 1;
        int var16 = (int)(((long long)var15 * var14 + 0x800) >> 12) + (var13 >> 1);
        int var17 = Vector3fix_Distance(&var12, &arg0->unknown_0_.unknown_0_.unknown_0_.position_);
        if (var17 != 0 && var16 > var17) {
            func_02076ccc(arg0, 1);
            arg0->unknown_0_.unknown_154_ = 0;
            arg0->unknown_17b_ = 1;
            if (func_0202b7d8((int*)var1) != 0) {
                func_020794f8(arg0, 1, 0);
            }
            return;
        }
    }

    if (func_0202b7d8((int*)var1) != 0 &&
        func_0202c1a4((struct Struct_0202c1a4*)var1) != 0) {
        return;
    }
    if (var10 >= 0x1800 && arg0->unknown_17b_ == 0) {
        return;
    }
    func_02076ccc(arg0, 1);
    arg0->unknown_0_.unknown_154_ = 0;
    if (func_0202b7d8((int*)var1) == 0) {
        return;
    }
    if (func_0202c508(var1) == 0) {
        return;
    }
    func_020794f8(arg0, 0, 0);
}
