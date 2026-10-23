#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" struct Struct_ov009_0218aa28 func_020341e0(void* arg0);
extern "C" struct Struct_ov009_0218aa28 func_02034104(void* arg0);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

struct Struct_02039df4;

struct Struct_020776a0 {
    char unknown_0_[0x44];
    struct Struct_ov009_0218aa28 unknown_44_;
    char unknown_50_[0xb0 - 0x50];
    unsigned short unknown_b0_;
    unsigned short unknown_b2_;
    unsigned short unknown_b4_;
    char unknown_b6_[0x166 - 0xb6];
    unsigned short unknown_166_;
    char unknown_168_[0x17a - 0x168];
    unsigned char unknown_17a_;
    char unknown_17b_[0x17d - 0x17b];
    unsigned char unknown_17d_;
};

// USA: func_020776a0
extern "C" ARM int func_020776a0(struct Struct_020776a0* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0->unknown_166_);
    if (var1 == 0) {
        return 0;
    }

    arg0->unknown_17d_ |= 0x40;
#if defined(jpn)
    struct Struct_ov009_0218aa28 var2 = func_02034104(var1);
#else
    struct Struct_ov009_0218aa28 var2 = func_020341e0(var1);
#endif
    struct Struct_ov009_0218aa28 var3;
    Vector3fix_Subtract((const Vector3fix*)&var2, (const Vector3fix*)&arg0->unknown_44_, (Vector3fix*)&var3);
    Vector3fix_Normalize((const Vector3fix*)&var3, (Vector3fix*)&var3);
    int var4 = fix32_Atan2(var3.unknown_0_, var3.unknown_8_);
    func_02033834((struct Struct_02033834_2*)arg0, var4);

    arg0->unknown_b0_ = 0x97;
    arg0->unknown_b4_ = 0x1c2;
    arg0->unknown_b2_ = 0x1c2;
    func_02033b68((struct Struct_02033b68*)arg0, 1);

    GameObject* var5 = var0->GetProtagonist();
    unsigned short var6 = ((Object3D*)((struct Struct_02039df4*)var5))->GetField06();
    unsigned short var7 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
    if (var6 == var7) {
        ((Object3D*)((unsigned char*)arg0))->DisableFlag(0x80);
    }
    arg0->unknown_17a_ = 0;
    return 1;
}
