#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "GameState/GameState.h"
#include "Input/Input.h"
#include "Resource/GameResources.h"

struct Struct_02040774_2;
struct Struct_02033834;
struct Struct_02038138;
struct Struct_020968d0 {
    char unknown_0_[0x224];
    unsigned char unknown_224_;
};
struct Struct_020adaac {
    char unknown_0_[0x44];
    Vector3i unknown_44_;
    char unknown_50_[4];
    int unknown_54_;
    char unknown_58_[0x5a];
    short unknown_b2_;
    short unknown_b4_;
    char unknown_b6_[0x7e];
    int unknown_134_;
    char unknown_138_[0xc];
    int unknown_144_;
    int unknown_148_;
    char unknown_14c_[0x18];
    Vector3i unknown_164_;
    char unknown_170_[4];
    Vector3i unknown_174_;
    char unknown_180_[0x1c];
    unsigned char unknown_19c_;
    char unknown_19d_[3];
    unsigned char unknown_1a0_;
};
extern "C" void* func_020100bc(GameState*);
extern "C" void func_02012fe4();
extern "C" void func_020407b4(Struct_02040774_2*, int, int, int);
extern "C" void* func_ov017_0218d268(void*);
extern "C" int func_0202e7f0(void*);
extern "C" int func_020968c4(Struct_02038138*);
int fix32ReduceAngle0To2Pi(int);
int fix32SignedAngleDistance(int, int);
extern "C" int func_020968d0(Struct_020968d0*, int*);
extern "C" void func_02033874(Struct_02033834*, int);
extern const int data_020e9118[8];

// USA: func_020adaac
extern "C" ARM void func_020adaac(Struct_020adaac* arg0) {
    void* var0 = func_020100bc(GameState::GetInstance());
    void* var1 = GetGameResources();
    int var2;
    func_02012fe4();
    func_020407b4((Struct_02040774_2*)arg0, arg0->unknown_44_.x, 0xa000, arg0->unknown_44_.z);
    Vector3i var3 = arg0->unknown_164_;
    var3.y = 0xa000;
    arg0->unknown_164_ = var3;
    Vector3i var4 = arg0->unknown_174_;
    var4.y = 0xa000;
    arg0->unknown_174_ = var4;
    arg0->unknown_134_ = 0;
    if (g_keyManager.IsUpHeld() && g_keyManager.IsLeftHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 12;
    } else if (g_keyManager.IsUpHeld() && g_keyManager.IsRightHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 13;
    } else if (g_keyManager.IsDownHeld() && g_keyManager.IsLeftHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 14;
    } else if (g_keyManager.IsDownHeld() && g_keyManager.IsRightHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 15;
    } else if (g_keyManager.IsUpHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 8;
    } else if (g_keyManager.IsDownHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 9;
    } else if (g_keyManager.IsLeftHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 10;
    } else if (g_keyManager.IsRightHeld()) {
        arg0->unknown_134_ = 1;
        arg0->unknown_1a0_ = 11;
    }
    if (g_touchInput.timeHeld_ > 5) arg0->unknown_134_ = 2;
    if (!arg0->unknown_19c_) {
        arg0->unknown_134_ = 0;
        return;
    }
    if (arg0->unknown_134_ == 1 || arg0->unknown_134_ == 2) {
        Struct_020968d0* var5 = (Struct_020968d0*)func_ov017_0218d268(var1);
        if (arg0->unknown_134_ == 1) {
            int var6 = data_020e9118[arg0->unknown_1a0_ - 8];
            var2 = var6 + func_0202e7f0(var0);
        } else if (var5->unknown_224_) {
            var2 = func_020968c4((Struct_02038138*)var5);
        }
        int var7 = arg0->unknown_54_;
        var2 = fix32ReduceAngle0To2Pi(var2);
        var7 = fix32ReduceAngle0To2Pi(var7);
        int var8 = arg0->unknown_148_;
        int var9 = fix32SignedAngleDistance(var7, var2);
        if (var9 > 0) {
            if (var9 < var8) var7 = var2;
            else var7 += var8;
        } else if (var9 < 0) {
            if (-var9 < var8) var7 = var2;
            else var7 -= var8;
        }
        var7 = fix32ReduceAngle0To2Pi(var7);
        if (func_020968d0(var5, 0) || !var5->unknown_224_)
            func_02033874((Struct_02033834*)arg0, var7);
    }
    arg0->unknown_b2_ = arg0->unknown_144_;
    arg0->unknown_b4_ = arg0->unknown_144_;
}
