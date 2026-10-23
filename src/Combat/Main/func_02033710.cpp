#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

int fix32ReduceAngle0To2Pi(int angle);
struct Struct_02033710;
struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);
int fix32SignedAngleDistance(int a, int b);
struct Vector3i;

extern char data_020efa3c;

struct Struct_02033710_2 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_02033710_3 { unsigned short unknown_0_0_ : 15; unsigned short unknown_1_7_ : 1; };

struct Struct_020332ac_2 {
    char unknown_0_[0x14];
    char* unknown_14_;
    char unknown_18_[0x38];
    struct Struct_02033710_2 unknown_50_;
    char unknown_5c_[0x52];
    short unknown_ae_;
    short unknown_b0_;
    char unknown_b2_[0xc];
    unsigned char unknown_be_;
    char unknown_bf_[5];
    struct Struct_02033710_3 unknown_c4_;
};

// USA: func_02033710
extern "C" ARM void func_02033710(struct Struct_020332ac_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_be_ == 4 || arg0->unknown_be_ == 6) {
        return;
    }
    unsigned int var1 = var0->GetTickCount();
    int var2 = arg0->unknown_b0_ * (int)var1;
    struct Struct_02033710_2 var3 = arg0->unknown_50_;
    int var4 = fix32SignedAngleDistance(var3.unknown_4_, arg0->unknown_ae_);
    int var5 = 1;
    if (var4 > 0) {
        if (var4 < var2) {
            var3.unknown_4_ = arg0->unknown_ae_;
        } else {
            var3.unknown_4_ += var2;
            var5 = 0;
        }
    } else if (var4 < 0) {
        int var6 = -var4;
        if (var6 < var2) {
            var3.unknown_4_ = arg0->unknown_ae_;
        } else {
            var3.unknown_4_ -= var2;
            var5 = 0;
        }
    }
    var3.unknown_4_ = fix32ReduceAngle0To2Pi(var3.unknown_4_);
    *(Vector3i*)((int*)&arg0->unknown_50_) = *(Vector3i const*)((int*)&var3);
    if (var5) {
        if (arg0->unknown_c4_.unknown_1_7_) {
            if (!((Object3D*)((struct Struct_02033710*)arg0))->IsTransitioningAnimations()) {
                arg0->unknown_c4_.unknown_1_7_ = 0;
                if (arg0->unknown_be_ == 0) {
                    if (arg0->unknown_14_ != NULL) {
                        if (strcmp(arg0->unknown_14_, &data_020efa3c) == 0) {
                            func_02033b88((struct Struct_02010604*)arg0, 0);
                        }
                    }
                }
            }
        }
    }
}
