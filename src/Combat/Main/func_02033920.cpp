#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" int func_02032424(struct Struct_ov009_0218aa28*, struct Struct_ov009_0218aa28*);
struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2*, int);
int fix32SignedAngleDistance(int a, int b);
int fix32abs(int x);
extern char data_020efa3c;

struct Struct_02033920 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[0x3e];
    struct Struct_ov009_0218aa28 unknown_44_;
    char unknown_50_[4];
    int unknown_54_;
    char unknown_58_[0x56];
    short unknown_ae_;
    short unknown_b0_;
    char unknown_b2_[0xc];
    unsigned char unknown_be_;
    char unknown_bf_[5];
    unsigned short unknown_c4_;
};

// USA: func_02033920
extern "C" ARM void func_02033920(struct Struct_02033920* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    if (arg1 == arg0->unknown_4_) return;
    GameObject* var1 = var0->GetGameObjectByIndex(arg1);
    if (var1 == 0) return;
    int var2 = func_02032424((struct Struct_ov009_0218aa28*)((char*)var1 + 0x44), &arg0->unknown_44_);
    func_02033834((struct Struct_02033834_2*)arg0, var2);
    if (arg2 == 0) return;
    if (arg0->unknown_be_ != 0) return;
    int var3 = fix32SignedAngleDistance(arg0->unknown_54_, arg0->unknown_ae_);
    int var4 = fix32abs(var3);
    if (var4 <= 0x1000) return;
    if (arg0->unknown_b0_ > 0x10c) return;
    int var5 = ((Object3D*)arg0)->MaybeSetRegularAnimation(&data_020efa3c, 0x11);
    if (var5 != 0) {
        arg0->unknown_c4_ |= 0x8000;
    }
}
