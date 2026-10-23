#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" struct Struct_ov009_0218aa28 func_02034104(GameObject* arg0);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

struct Struct_ov001_021592bc {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
struct Vector3i;
void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

struct Struct_02039df4;

extern "C" int _s32_div_f(int a, int b);

extern "C" void func_ov017_021c927c(int arg0, int arg1, int arg2, struct Struct_ov009_0218aa28 arg3, int arg4, int arg5, int arg6);

struct Struct_020781e8 {
    char unknown_0_[0x2];
    short unknown_2_;
    short unknown_4_;
    char unknown_6_[0x3e];
    struct Struct_ov009_0218aa28 unknown_44_;
    char unknown_50_[0x62];
    short unknown_b2_;
    short unknown_b4_;
    char unknown_b6_[0xa2];
    struct Struct_ov009_0218aa28 unknown_158_;
    char unknown_164_[0x2];
    unsigned short unknown_166_;
    char unknown_168_[0x12];
    unsigned char unknown_17a_;
};

// USA: func_020781e8
extern "C" ARM int func_020781e8(struct Struct_020781e8* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0->unknown_166_);
    if (var1 == NULL) {
        return 0;
    }

    int var2 = 0;
    void* var3 = func_0202ae18();
    if (!func_0202b7d8((int*)var3) || func_0202c1a4((struct Struct_0202c1a4*)var3) == 0) {
        struct Struct_ov009_0218aa28 var4 = func_02034104(var1);
        struct Struct_ov009_0218aa28 var5;
        Vector3fix_Subtract((const Vector3fix*)&var4, (const Vector3fix*)&arg0->unknown_44_, (Vector3fix*)&var5);
        Vector3fix_Normalize((const Vector3fix*)&var5, (Vector3fix*)&var5);
        var5.unknown_0_ = -var5.unknown_0_;
        var5.unknown_4_ = -var5.unknown_4_;
        var5.unknown_8_ = -var5.unknown_8_;
        var2 = fix32_Atan2(var5.unknown_0_, var5.unknown_8_);
        func_02033834((struct Struct_02033834_2*)arg0, var2);
        var5.unknown_4_ = 0;
        Vector3fixMultiplyScalar((Vector3i const*)&var5, 0x5000, (Vector3i*)&var5);
        Vector3fix_Add((const Vector3fix*)&arg0->unknown_44_, (const Vector3fix*)&var5, (Vector3fix*)&arg0->unknown_158_);
    }

    arg0->unknown_b4_ = 0x1c2;
    arg0->unknown_b2_ = 0x1c2;
    func_02033b68((struct Struct_02033b68*)arg0, 1);
    ((Object3D*)((unsigned char*)arg0))->DisableFlag(0x80);
    arg0->unknown_17a_ = 0;

    if (func_0202b7d8((int*)var3) && func_0202c1a4((struct Struct_0202c1a4*)var3) == 0) {
        int var6 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
        int var7 = arg0->unknown_2_;
        struct Struct_ov009_0218aa28* var8 = &arg0->unknown_158_;
        int var9 = (arg0->unknown_4_ - 0x70) % 0xc;
        if (var9 >= 0 && var9 < 0xc) {
            struct Struct_ov009_0218aa28 var10 = *var8;
            func_ov017_021c927c(var6, var9, var7, var10, var2, 7, arg0->unknown_166_);
        }
    }
    return 1;
}
