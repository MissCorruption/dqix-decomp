#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_020340d4;
struct Struct_020340c4;
struct Struct_020340b4;
struct Struct_0203402c;

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_021d360c(int arg0, int arg1, int arg2, Vector3s arg3);

struct Struct_ov017_021c2380 {
    unsigned short unknown_0_;
    Vector3s unknown_2_;
};

extern "C" Struct_ov017_021c2380* func_020120a0(char* arg0, unsigned int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" int func_020340d4(Struct_020340d4* arg0);
extern "C" void func_020340c4(Struct_020340c4* arg0);
extern "C" void func_020340b4(Struct_020340b4* arg0);
extern "C" int func_0203402c(Struct_0203402c* arg0);
extern "C" void func_02034044(unsigned char* arg0, int arg1);
extern "C" unsigned char func_02039d7c(char* arg0);
extern "C" void func_020397c0(void* arg0);

// USA: func_ov017_021c2380
extern "C" ARM int func_ov017_021c2380(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_0202ae18();
    Struct_ov017_021c2380* var2 = func_020120a0((char*)var0, arg0);
    if (var2 == NULL) {
        return 0;
    }
    if (var2->unknown_0_ == 0) {
        return 0;
    }

    GameObject* var3 = var0->GetMaybeWanderingMonsterByIndex(arg1);
    GameObject* var4 = var0->GetPartyMemberByIndex(arg1);
    if (var3 == NULL) {
        return 0;
    }

    int var5 = 0;
    if (arg0 == func_020100a8(var0) && func_020340d4((Struct_020340d4*)var3)) {
        var5 = func_020340d4((Struct_020340d4*)var3);
        func_020340c4((Struct_020340c4*)var3);
    }
    if (func_0203402c((Struct_0203402c*)var3)) {
        return 0;
    }
    if (var4 != NULL && func_02039d7c((char*)var4)) {
        return 0;
    }
    if (var2->unknown_0_ != var3->obj3D_.GetField06()) {
        return 0;
    }

    Vector3fix var6;
    var6.x = var2->unknown_2_.x << 4;
    var6.y = var2->unknown_2_.y << 4;
    var6.z = var2->unknown_2_.z << 4;
    Vector3fix var7 = var3->obj3D_.position_;
    if (fix32abs(var6.x - var7.x) > 0x800) {
        return 0;
    }
    if (fix32abs(var6.y - var7.y) > 0x800) {
        return 0;
    }
    if (fix32abs(var6.z - var7.z) > 0x800) {
        return 0;
    }
    if (Vector3fix_Distance(&var6, &var7) > 0x800) {
        return 0;
    }
    if (var5) {
        func_020340b4((Struct_020340b4*)var3);
        return 0;
    }

    if (func_0202c508(var1)) {
        func_02034044((unsigned char*)var3, 5000);
        if (var4 != NULL) {
            func_020397c0(var4);
        }
    }
    Vector3s var8 = {0};
    func_ov017_021d360c(1, (unsigned char)arg0, (unsigned short)arg1, var8);
    var2->unknown_0_ = 0;
    return 1;
}
