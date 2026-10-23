#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" struct Struct_ov009_0218aa28 func_02034104(GameObject* arg0);
extern "C" int fix32_Atan2(int arg0, int arg1);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

struct Struct_02078688 {
    char unknown_0_[0x44];
    struct Struct_ov009_0218aa28 unknown_44_;
    char unknown_50_[0x62];
    short unknown_b2_;
    char unknown_b4_[0xb2];
    unsigned short unknown_166_;
    char unknown_168_[0x12];
    unsigned char unknown_17a_;
};

// USA: func_02078688
extern "C" ARM int func_02078688(struct Struct_02078688* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetMaybeWanderingMonsterByIndex(arg0->unknown_166_);
    if (var1 != 0) {
        struct Struct_ov009_0218aa28 var2 = func_02034104(var1);
        struct Struct_ov009_0218aa28 var3;
        Vector3fix_Subtract((const Vector3fix*)&var2, (const Vector3fix*)&arg0->unknown_44_, (Vector3fix*)&var3);
        Vector3fix_Normalize((const Vector3fix*)&var3, (Vector3fix*)&var3);
        int var4 = fix32_Atan2(var3.unknown_0_, var3.unknown_8_);
        func_02033834((struct Struct_02033834_2*)arg0, var4);
    }

    arg0->unknown_b2_ = 0;
    func_02033b68((struct Struct_02033b68*)arg0, 2);
    ((Object3D*)((unsigned char*)arg0))->EnableFlag(0x80);
    arg0->unknown_17a_ = 0;
    return 1;
}
