#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" ARM void func_02048144(void* arg0);
struct Vector3i;

struct Struct_020489e8 {
    char unknown_0_[0x41];
    unsigned char unknown_41_0_ : 5;
    unsigned char unknown_41_5_ : 3;
};

struct Struct_020489e8_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    float unknown_4_;
};

extern "C" void func_02048f64(void* arg0);
extern "C" void func_0204956c(void* arg0);

struct Struct_020489e8_3;
extern "C" void func_0204a054(struct Struct_020489e8_3* arg0);

struct Struct_020489e8_4 {
    char unknown_0_[0x10];
    int unknown_10_[3];
    char unknown_1c_[0x20 - 0x1c];
    int unknown_20_;
};

struct Struct_020489e8_5 {
    char unknown_0_[0x44];
    int unknown_44_[3];
    char unknown_50_[0x54 - 0x50];
    int unknown_54_;
    char unknown_58_[0x13c - 0x58];
    struct Struct_020489e8_4* unknown_13c_;
};

// USA: func_020489e8
extern "C" ARM void func_020489e8(struct Struct_020489e8_5* arg0) {
    func_02048144(arg0);
    if (arg0->unknown_13c_ == NULL) return;
    if (arg0->unknown_13c_->unknown_20_ & 1) {
        *(Vector3i*)arg0->unknown_13c_->unknown_10_ = *(Vector3i const*)arg0->unknown_44_;
        arg0->unknown_13c_->unknown_10_[1] = arg0->unknown_54_;
    }
    int var0 = 0.0f != ((struct Struct_020489e8_2*)((char*)arg0->unknown_13c_ + 0x60))->unknown_4_;
    if (var0) {
        GameState* var1 = GameState::GetInstance();
        int var2 = var1->GetEffectiveDeltaTime();
        int var3 = ((Object3D*)((struct Struct_020489e8*)arg0))->GetOwnAlpha();
        ((AlphaTween*)(&((struct Struct_020489e8_2*)((char*)arg0->unknown_13c_ + 0x60))->unknown_0_))->SetCurrentValue((float)var3);
        float var4 = ((AlphaTween*)((struct Struct_020489e8_2*)((char*)arg0->unknown_13c_ + 0x60)))->Advance(var2);
        unsigned char var5 = (unsigned char)(int)var4;
        ((struct Struct_020489e8*)arg0)->unknown_41_0_ = var5;
    }
    func_02048f64(arg0);
    func_0204956c(arg0);
    func_0204a054((struct Struct_020489e8_3*)arg0);
}
