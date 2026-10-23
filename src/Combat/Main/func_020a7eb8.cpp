#include <globaldefs.h>
#include "GameState/GameState.h"

struct Vector3i;

struct Struct_020a7eb8 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_020a66a4 {
    char unknown_0_[0x44];
    struct Struct_020a7eb8 unknown_44_;
    char unknown_50_[0x140 - 0x50];
    int unknown_140_;
};

extern "C" void func_02032fdc(struct Struct_020a66a4* arg0, int arg1, int arg2);

// USA: func_020a7eb8
extern "C" ARM void func_020a7eb8(struct Struct_020a66a4* arg0) {
    GameState::GetInstance();
    struct Struct_020a7eb8 var0 = arg0->unknown_44_;
    var0.unknown_4_ += arg0->unknown_140_;
    *(Vector3i*)((int*)&arg0->unknown_44_) = *(Vector3i const*)((int*)&var0);
    func_02032fdc(arg0, 1, 0);
    *(Vector3i*)((int*)&var0) = *(Vector3i const*)((int*)&arg0->unknown_44_);
    var0.unknown_4_ -= arg0->unknown_140_;
    *(Vector3i*)((int*)&arg0->unknown_44_) = *(Vector3i const*)((int*)&var0);
}
