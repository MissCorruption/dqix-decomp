#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

struct Struct_0203de84 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_02015ef4 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_0203de84_2;
struct Struct_0203e0a0;

struct Struct_0203dce4_2;
struct Struct_0203a46c;
struct Struct_020479fc;
struct Struct_020479b8_3;
struct Struct_ov017_0219aa7c { unsigned char unknown_0_, unknown_1_; unsigned short unknown_2_; };
#if defined(jpn)
#define data_ov017_021d64f4 data_ov017_021d6944
#endif
typedef void (GameResources::*Type_02000c9c_15)();
struct Struct_ov017_021d64f4 { Type_02000c9c_15 unknown_0_[15]; };
extern const Struct_ov017_021d64f4 data_ov017_021d64f4;
extern const Type_02000c9c_15 data_020e6d5c;
extern "C" void* func_020100bc(GameState*);
extern "C" int func_020535c8(signed char*);
extern "C" Struct_0203dce4_2* func_0203cf4c();
extern "C" Struct_0203de84_2* func_0203dce4(Struct_0203dce4_2*, int);
extern "C" void func_020406f8(Struct_0203de84*, Struct_0203de84_2*);
extern "C" void* func_02040538(Struct_0203e0a0*);
extern "C" void func_0202ec84(void*, Struct_02015ef4*, int*, int*);
extern "C" void func_0203a46c(Struct_0203a46c*, int, int, int);
extern "C" int func_02046b08(void**);
extern "C" int func_020479fc(Struct_020479fc*);
extern "C" unsigned char func_020479b8(Struct_020479b8_3*);
extern "C" void __clear(void*, unsigned int);

// USA: func_ov017_0219aa7c
extern "C" ARM void func_ov017_0219aa7c(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_020100bc(var0);
    GameObject* var2 = var0->GetUnknownGameObject();
    if (var2 == 0 || func_020535c8((signed char*)var2) || ((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_1_ == 18) return;
    Struct_02012fa4* var3 = &arg0->substruct_array_2b90[((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_1_];
    Vector3fix var4;
    __clear(&var4, 12);
    int var5 = 0;
    int var6 = 0;
    arg0->unknown_42e3_[3] = 0;
    int var7 = 1;
    if (((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_0_ == 0) {
        Struct_0203de84_2* var8 = func_0203dce4(func_0203cf4c(), ((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_2_);
        if (var8 != 0) {
            Struct_0203de84 var9;
            func_020406f8(&var9, var8);
            var4 = *(Vector3fix*)&var9;
            var4.y += 0x1800;
            void* var10 = func_02040538((Struct_0203e0a0*)var8);
            if (var10 != 0) var4.y += *reinterpret_cast<int*>(static_cast<char*>(var10) + 0x60);
            var7 = 0;
        }
    } else if (((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_0_ == 10 || ((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_0_ == 13) {
        GameObject* var11 = var0->GetPartyMemberByIndex(((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_2_);
        if (var11 != 0) {
            var4 = var11->obj3D_.position_;
            var4.y += 0x1800;
            var7 = 0;
        }
    } else if (((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_0_ == 9) {
        GameObject* var12 = var0->GetMaybeFieldMonsterByIndex(((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_2_);
        if (var12 != 0) {
            var4 = var12->obj3D_.position_;
            var4.y += var12->obj3D_.GetHeight();
            var7 = 0;
        }
    }
    if (var7) {
        var4 = var2->obj3D_.position_;
        var4.y += var2->obj3D_.GetHeight();
    }
    func_0202ec84(var1, (Struct_02015ef4*)&var4, &var5, &var6);
    var5 -= 12;
    var6 -= 24;
    func_0203a46c((Struct_0203a46c*)var3, var5 << 12, var6 << 12, 0);
    if (!func_02046b08(static_cast<void**>(arg0->unknown_ptr_array_36fc[0]))) return;
    int var13 = 0;
    if (g_touchInput.released_ && (unsigned int)g_touchInput.prevTimeHeld_ < 10) {
        int var14 = func_020479fc((Struct_020479fc*)var3);
        int var15 = func_020479b8((Struct_020479b8_3*)var3);
        int var16 = g_touchInput.prevX_;
        int var17 = g_touchInput.prevY_;
        if (var5 < var16 && var6 < var17 && var16 < var5 + var14 && var17 < var6 + var15) var13 = 1;
    }
    if (g_keyManager.TestKeysPressed(1)) var13 = 1;
    if (var13) {
        Struct_ov017_021d64f4 var18 = data_ov017_021d64f4;
        var18.unknown_0_[3] = data_020e6d5c;
        if (var18.unknown_0_[((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_0_] != 0) {
            (arg0->*var18.unknown_0_[((Struct_ov017_0219aa7c*)arg0->unknown_36b4_)->unknown_0_])();
            arg0->unknown_42e3_[1] = 0;
        }
    }
}
