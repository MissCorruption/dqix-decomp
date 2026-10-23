#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Overlay17DayCycle.h"
#include "Graphics/LightingManager.h"

struct Struct_ov017_0219c774 {
    unsigned char unknown_0_[12];
    unsigned char unknown_c_0_ : 4;
    unsigned char unknown_c_4_ : 4;
};
extern "C" float func_020103e8(GameState*);
extern "C" void func_020103c8(GameState*, float);
// USA: func_ov017_0219c774
extern "C" ARM int func_ov017_0219c774(Struct_ov017_0219c774* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    float var1 = func_020103e8(var0);
    float var2 = var1;
    if (arg1 && arg0 != 0 && arg0->unknown_c_0_ == 0) {
        var0->SetDayTimer(var1);
        func_020103c8(var0, var1);
        LightingManager* var3 = LightingManager::GetInstance();
        var3->dayNightTimer_ = var0->GetDayTimer();
        var3->timeOfDayIndex_ = var0->GetTimeOfDay();
        return 0;
    }
    int var4 = TimeOfDay_Night;
    if (var1 >= data_ov017_021d837c.unknown_8_) var4 = TimeOfDay_Evening;
    else if (var1 >= data_ov017_021d837c.unknown_4_) var4 = TimeOfDay_Day;
    else if (var1 >= data_ov017_021d837c.unknown_c_) var4 = TimeOfDay_Morning;
    int var5 = var0->GetTimeOfDay();
    if (var4 == var5) {
        int var6;
        float var7[4] = {data_ov017_021d837c.unknown_c_, data_ov017_021d837c.unknown_4_, data_ov017_021d837c.unknown_8_, data_ov017_021d837c.unknown_8_ + data_ov017_021d75b8.unknown_10_};
        float var8;
        var6 = 0;
        for (; var6 < 4; var6++) {
            var8 = data_ov017_021d75b8.unknown_0_;
            if (var7[var6] - 2.0f * var8 < var1 && var1 < var7[var6]) {
                var1 = var7[var6] - 2.0f * var8;
                var2 = var7[var6];
            }
        }
        if (data_ov017_021d837c.unknown_14_ <= var2) var2 = 0.0f;
        if (arg0 == 0 || arg0->unknown_c_0_ != 0) var1 = var2;
    }
    if ((var4 + 1) % 4 == var5) {
        float var9[4] = {data_ov017_021d837c.unknown_c_, data_ov017_021d837c.unknown_4_, data_ov017_021d837c.unknown_8_, data_ov017_021d837c.unknown_8_ + data_ov017_021d75b8.unknown_10_};
        float var10[4] = {data_ov017_021d837c.unknown_10_, data_ov017_021d837c.unknown_c_, data_ov017_021d837c.unknown_4_, data_ov017_021d837c.unknown_8_};
        if (var9[var4] - 2.0f * data_ov017_021d75b8.unknown_0_ < var1 && var1 < var9[var4]) {
            var1 = var10[var5];
            var2 = var1;
        }
    }
    var4 = TimeOfDay_Night;
    if (var1 >= data_ov017_021d837c.unknown_8_) var4 = TimeOfDay_Evening;
    else if (var1 >= data_ov017_021d837c.unknown_4_) var4 = TimeOfDay_Day;
    else if (var1 >= data_ov017_021d837c.unknown_c_) var4 = TimeOfDay_Morning;
    if (var4 == var5) arg1 = 1;
    if (arg1) {
        var0->SetDayTimer(var1);
        func_020103c8(var0, var2);
        LightingManager* var11 = LightingManager::GetInstance();
        var11->dayNightTimer_ = var0->GetDayTimer();
        var11->timeOfDayIndex_ = var0->GetTimeOfDay();
    }
    return var4 != var5;
}
