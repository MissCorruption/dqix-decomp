#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_02039df4 { char unknown_0_[0x6]; unsigned short unknown_6_; };

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

struct Struct_02037d88_8;

extern "C" struct Struct_ov009_0218aa28 func_02034104(void* arg0);
extern "C" int fix32_Atan2(int arg0, int arg1);

extern char data_02108760;

struct Struct_02078898 {
    char unknown_0_[0x6];
    unsigned short unknown_6_;
    char unknown_8_[0x44 - 0x8];
    struct Struct_ov009_0218aa28 unknown_44_;
    char unknown_50_[0xb2 - 0x50];
    unsigned short unknown_b2_;
    char unknown_b4_[0x166 - 0xb4];
    unsigned short unknown_166_;
    char unknown_168_[0x17c - 0x168];
    unsigned char unknown_17c_;
};

#if defined(jpn)
enum { Enum_02078898_1844 = 0x524 };
#else
enum { Enum_02078898_1844 = 0x734 };
#endif

// USA: func_02078898
extern "C" ARM int func_02078898(struct Struct_02078898* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned short var1 = arg0->unknown_166_;
    GameObject* var2 = var0->GetMaybeWanderingMonsterByIndex(var1);
    if (var2 == 0) return 0;

    void* var3 = GetGameResources();
    char* var4 = (char*)var3 + 0x3000;
    void* var5 = *(void**)(var4 + Enum_02078898_1844);

    GameObject* var6 = var0->GetProtagonist();
    unsigned short var7 = ((Object3D*)((struct Struct_02039df4*)var6))->GetField06();
    unsigned short var8 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
    if (var7 == var8 && *((unsigned char*)var5 + 3) == 0) {
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 6, 0);
    }

    struct Struct_ov009_0218aa28 var9 = func_02034104(var2);
    struct Struct_ov009_0218aa28 var10;
    Vector3fix_Subtract((const Vector3fix*)&var9, (const Vector3fix*)&arg0->unknown_44_, (Vector3fix*)&var10);
    Vector3fix_Normalize((const Vector3fix*)&var10, (Vector3fix*)&var10);
    int var11 = fix32_Atan2(var10.unknown_0_, var10.unknown_8_);
    func_02033834((struct Struct_02033834_2*)arg0, var11);

    arg0->unknown_b2_ = 0;
    func_02033b68((struct Struct_02033b68*)arg0, 0);
    ((Object3D*)((unsigned char*)arg0))->DisableFlag(0x80);
    ((Object3D*)((struct Struct_02037d88_8*)arg0))->SetInheritedAlpha(0x1f);
    arg0->unknown_17c_ = 0;
    return 1;
}
