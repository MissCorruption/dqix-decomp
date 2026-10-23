#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Graphics/Animation3D.h"
#include "Graphics/Vector.h"
#include "World/ZoneResourceTree.h"

struct Struct_02108760;
extern "C" void func_0205eaa0(Struct_02108760 *, int, int);
extern "C" int func_0209ca2c(void *);

extern Struct_02108760 data_02108760;
extern char data_02109bf4[];
extern char data_020ef1f3[];
extern char data_020ef1f8[];
extern char data_020ef1fe[];
extern char data_020ef204[];

// USA: func_02015554
extern "C" ARM void func_02015554(void *arg0, void *arg1) {
    Struct_02015554 *var0 = static_cast<Struct_02015554 *>(arg1);
    GameState *var1               = GameState::GetInstance();
    Struct_02012ff0 *var2     = var0->unknown_24_;
    if (!var2 || !var2->unknown_4_) return;
    fix32_t var3 = var1->GetAnimationDeltaTime();
    if (var2->unknown_0_ == 0) {
        if (var2->unknown_8_) var2->unknown_8_->AdvanceTimer(var3);
        if (var2->unknown_c_) var2->unknown_c_->AdvanceTimer(var3);
        if (var2->unknown_10_) var2->unknown_10_->AdvanceTimer(var3);
        if (var2->unknown_14_) var2->unknown_14_->AdvanceTimer(var3);

        short var4 = var0->unknown_38_;
        if (var4 != fix32ReduceAngle0To2Pi(var0->unknown_34_)) {
            fix32_t var5 = fix32SignedAngleDistance(var4, var0->unknown_34_);
            fix32_t var6     = ((long long) var0->unknown_36_ * var3 + 0x800) >> 12;
            if (var5 > 0) {
                if (var5 < var6)
                    var0->unknown_38_ = var0->unknown_34_;
                else
                    var0->unknown_38_ += var6;
            } else if (var5 < 0) {
                if (-var5 < var6)
                    var0->unknown_38_ = var0->unknown_34_;
                else
                    var0->unknown_38_ -= var6;
            }
            var0->unknown_38_ = fix32ReduceAngle0To2Pi(var0->unknown_38_);
        } else if (var0->unknown_36_ != 0) {
            if (var0->unknown_2_ & 0x10) {
                var0->unknown_36_ = 0;
            } else if (var0->unknown_2_ & 0x80) {
                var0->unknown_2_ &= ~0x80;
                var0->unknown_36_ = 0;
            } else if (var0->unknown_4_0_ > 0) {
                int var7 = var0->unknown_4_0_ - 3;
                if (var7 < 0) {
                    var7            = 0;
                    var0->unknown_36_ = 0;
                }
                var0->unknown_4_0_ = var7;
                if (var0->unknown_4_0_ == 0) var0->unknown_2_ |= 4;
            }
        }
        if (var0->unknown1_3a_ != 0) {
            if (Vector3fix_Distance(&var0->unknown_8_, &var0->unknown_3c_) < var0->unknown1_3a_) {
                var0->unknown_8_      = var0->unknown_3c_;
                var0->unknown1_3a_ = 0;
            } else {
                Vector3fix var8 = var0->unknown_48_;
                Vector3fixMultiplyScalar(&var8, var0->unknown1_3a_, &var8);
                Vector3fix_Add(&var0->unknown_8_, &var8, &var0->unknown_8_);
            }
        }
    }
    if ((var0->unknown_2_ & 0x100) && var0->unknown_54_) {
        if (var0->unknown1_34_ == 0) {
            var0->unknown_54_->SetAnimationPlaybackSpeed(0x1800, 0);
            if (var0->unknown_54_->MaybeSetRegularAnimation(data_020ef1f3, 1))
                func_0205eaa0(&data_02108760, 0x12, 0);
            else if (var0->unknown_54_->MaybeSetRegularAnimation(data_020ef1f8, 1))
                func_0205eaa0(&data_02108760, 0x62, 0);
            var0->unknown1_34_ = 1;
        } else if (var0->unknown1_34_ == 1) {
            if (var0->unknown_54_->HasAnimationStopped()) {
                var0->unknown1_36_          = 500;
                var0->unknown1_34_ = 2;
            }
        } else if (var0->unknown1_34_ == 2) {
            unsigned int var9 = var1->GetEffectiveDeltaTime();
            if (var9 < var0->unknown1_36_) {
                var0->unknown1_36_ -= var9;
            } else if (!func_0209ca2c(data_02109bf4)) {
                if (var0->unknown_54_->MaybeSetRegularAnimation(data_020ef1fe, 5))
                    func_0205eaa0(&data_02108760, 0x13, 0);
                else if (var0->unknown_54_->MaybeSetRegularAnimation(data_020ef204, 5))
                    func_0205eaa0(&data_02108760, 0x62, 0);
                var0->unknown_2_ &= ~0x100;
            }
        }
    }
}
