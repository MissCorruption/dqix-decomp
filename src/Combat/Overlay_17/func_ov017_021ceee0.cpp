#if defined(jpn)
enum { Enum_ov017_021ceee0_1788 = 0x4ec, Enum_ov017_021ceee0_352 = 0x154, Enum_ov017_021ceee0_364 = 0x160 };
#else
enum { Enum_ov017_021ceee0_1788 = 0x6fc, Enum_ov017_021ceee0_352 = 0x160, Enum_ov017_021ceee0_364 = 0x16c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02015438 { signed char unknown_0_; };
extern "C" int func_02046b24(struct Struct_02015438** arg0);

struct Struct_02048150;
extern "C" int func_02086ef0(struct Struct_02048150* arg0, int arg1);

extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
struct Vector3i;

struct Struct_02033834_2;
struct Struct_02033834;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);
extern "C" void func_02033874(struct Struct_02033834* arg0, int arg1);

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov017_021ceee0 {
    char unknown_0_[4];
    int unknown_4_[3];
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
};

// USA: func_ov017_021ceee0
extern "C" ARM void func_ov017_021ceee0(void* arg0, struct Struct_ov017_021ceee0* arg1, GameState* arg2, char* arg3) {
    GameObject* var0;
    struct Struct_02015438** var1 = *(struct Struct_02015438***)(arg3 + 0x3000 + Enum_ov017_021ceee0_1788);
    var0 = arg2->GetMaybeWanderingMonsterByIndex(arg1->unknown_12_);
    if (func_02086ef0((struct Struct_02048150*)func_02010828(arg2), arg1->unknown_12_)) {
        return;
    }
    if (!var0) {
        return;
    }
    if (func_02046b24(var1) == 0xa) {
        int var2 = arg1->unknown_12_ <= 3;
        if (!var2) {
            return;
        }
        if (!(var0->obj3D_.unknown_0_ & 0x80)) {
            return;
        }
        GameObject* var3 = func_0200ff1c(arg2, arg1->unknown_12_);
        if (!var3) {
            return;
        }
        int var4[3];
        __clear(var4, 0xc);
        var4[1] = arg1->unknown_10_;
        *(Vector3i*)((int*)((char*)var3 + Enum_ov017_021ceee0_352)) = *(Vector3i const*)arg1->unknown_4_;
        *(Vector3i*)((int*)((char*)var3 + Enum_ov017_021ceee0_364)) = *(Vector3i const*)var4;
        return;
    }
    if (func_02046b24(var1) == 4) {
        return;
    }
    *(Vector3i*)(&var0->obj3D_.position_.x) = *(Vector3i const*)arg1->unknown_4_;
    if (arg1->unknown_13_ == 0) {
        func_02033834((struct Struct_02033834_2*)var0, arg1->unknown_10_);
    } else {
        func_02033874((struct Struct_02033834*)var0, arg1->unknown_10_);
    }
}
