#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_020332ac_2;
struct Struct_020332ac : Object3D {
    short unknown_ac_, unknown_ae_, unknown_b0_;
    short unknown_b2_, unknown_b4_, unknown_b6_;
    char unknown_b8_[6];
    unsigned char unknown_be_, unknown_bf_;
    char unknown_c0_[3];
    unsigned char unknown_c3_;
    unsigned short unknown_c4_;
    short unknown_c6_;
    Vector3fix unknown_c8_;
    Vector3fix unknown_d4_;
    unsigned char unknown_e0_0_ : 2;
    unsigned char unknown_e0_2_ : 1;
    unsigned char unknown_e0_3_ : 1;
    unsigned char unknown_e0_4_ : 1;
    unsigned char unknown_e0_5_ : 1;
    unsigned char unknown_e0_6_ : 2;
};
struct Struct_020ef9d0 { signed char unknown_0_; char unknown_1_[12]; };
extern Struct_020ef9d0 data_020ef9d0[];
extern "C" void func_02033710(Struct_020332ac_2*);
extern "C" void func_02033e38(void*);
extern "C" void func_0203348c(Struct_020332ac*);
extern "C" void func_02033ce8(Struct_020332ac*);
extern "C" void func_020339c8(Struct_020332ac*);

// USA: func_020332ac
extern "C" ARM void func_020332ac(Struct_020332ac* arg0) {
    if (!arg0->unknown_e0_2_) {
        func_02033710((Struct_020332ac_2*)arg0);
        func_0203348c(arg0);
        if (arg0->unknown_e0_4_) {
            arg0->unknown_e0_4_ = 0;
            if (arg0->unknown_e0_5_) {
                arg0->unknown_e0_5_ = 0;
                arg0->position_ = arg0->unknown_d4_;
            } else {
                Vector3fix var0;
                Vector3fix_Subtract(&arg0->unknown_d4_, &arg0->position_, &var0);
                int var1 = Vector3fix_Length(&var0);
                if (var1 > 0) {
                    GameState* var2 = GameState::GetInstance();
                    int var3 = arg0->unknown_b6_ * var2->GetTickCount();
                    Vector3fix var4;
                    Vector3fixMultiplyScalar(&var0, fix32_Divide(0x1000, var1), &var4);
                    if (arg0->unknown_b2_ <= var1) {
                        arg0->unknown_b2_ += var3;
                        if (arg0->unknown_b4_ < arg0->unknown_b2_) arg0->unknown_b2_ = arg0->unknown_b4_;
                    } else {
                        arg0->unknown_b2_ -= var3;
                        if (arg0->unknown_b2_ < 0) arg0->unknown_b2_ = 0;
                    }
                    int var5 = arg0->unknown_b2_ * var2->GetTickCount();
                    if (var1 < var5) var5 = var1;
                    Vector3fix var6;
                    Vector3fixMultiplyScalar(&var4, var5, &var6);
                    Vector3fix var7;
                    Vector3fix_Add(&arg0->position_, &var6, &var7);
                    arg0->position_ = var7;
                } else arg0->unknown_b2_ = 0;
            }
        }
        func_02033e38(arg0);
        if (arg0->HasAnimationStopped() || arg0->HasAnimationReachedEnd()) {
            arg0->unknown_bf_ = arg0->unknown_be_;
            int var8 = data_020ef9d0[(short)arg0->unknown_be_].unknown_0_;
            if (var8 > -1) arg0->unknown_be_ = var8;
            func_02033ce8(arg0);
        }
    }
    int var9 = arg0->unknown_c3_;
    if (var9) {
        var9 -= GameState::GetInstance()->GetTickCount();
        if (var9 < 0) var9 = 0;
        arg0->unknown_c3_ = var9;
    }
    func_020339c8(arg0);
    arg0->AdvanceEffects();
}
