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

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

struct Struct_02037d88_8;

struct Struct_02039df4;

extern "C" int _s32_div_f(int a, int b);

extern "C" void func_ov017_021c9400(int arg0, int arg1, int arg2, struct Struct_ov009_0218aa28 arg3, struct Struct_ov009_0218aa28 arg4, int arg5);

struct Struct_02078754 {
    char unknown_0_[2];
    short unknown_2_;
    short unknown_4_;
    char unknown_6_[0x3e];
    struct Struct_ov009_0218aa28 unknown_44_;
    struct Struct_ov009_0218aa28 unknown_50_;
    char unknown_5c_[0x56];
    short unknown_b2_;
    char unknown_b4_[0x166 - 0xb4];
    unsigned short unknown_166_;
    char unknown_168_[0x12];
    unsigned char unknown_17a_;
};

// USA: func_02078754
extern "C" ARM int func_02078754(struct Struct_02078754* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetMaybeWanderingMonsterByIndex(arg0->unknown_166_);
    if (var1 == 0) {
        return 0;
    }

    struct Struct_ov009_0218aa28 var2 = func_02034104(var1);
    struct Struct_ov009_0218aa28 var3;
    Vector3fix_Subtract((const Vector3fix*)&var2, (const Vector3fix*)&arg0->unknown_44_, (Vector3fix*)&var3);
    Vector3fix_Normalize((const Vector3fix*)&var3, (Vector3fix*)&var3);
    int var4 = fix32_Atan2(var3.unknown_0_, var3.unknown_8_);
    func_02033834((struct Struct_02033834_2*)arg0, var4);

    arg0->unknown_b2_ = 0;
    func_02033b68((struct Struct_02033b68*)arg0, 0);
    ((Object3D*)((unsigned char*)arg0))->EnableFlag(0x80);
    ((Object3D*)((struct Struct_02037d88_8*)arg0))->SetInheritedAlpha(0x1f);
    arg0->unknown_17a_ = 0;

    void* var5 = func_0202ae18();
    if (func_0202b7d8((int*)var5) && func_0202c1a4((struct Struct_0202c1a4*)var5) == 0) {
        int var6 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
        int var7 = arg0->unknown_2_;
        struct Struct_ov009_0218aa28* var8 = &arg0->unknown_44_;
        struct Struct_ov009_0218aa28* var9 = &arg0->unknown_50_;
        int var10 = (arg0->unknown_4_ - 0x70) % 0xc;
        if (var10 >= 0 && var10 < 0xc) {
            func_ov017_021c9400(var6, var10, var7, *var8, *var9, -1);
        }
    }
    return 1;
}
