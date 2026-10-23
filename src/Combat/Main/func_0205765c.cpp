#include <globaldefs.h>
#include "GameState/Field3b0.h"

#include "Combat/DistanceSort.h"
#include "GameState/GameState.h"

struct Struct_02057334_2;
extern "C" int func_02057854(Struct_02057334_2 *arg0);
struct Struct_020546c8;
extern "C" void *func_02055108(Struct_020546c8 *arg0);

extern "C" void func_02059a54(void *arg0);

struct Struct_0205765c {
    unsigned char unknown_0_[0x10];
    Vector3fix unknown_10_;
    unsigned char unknown_1c_[0x10];
    unsigned char unknown_2c_;
    unsigned char unknown_2d_[3];
    Struct_020546c8 *unknown_30_;
    Struct_0205765c *unknown_34_;
    unsigned char unknown_38_;
    unsigned char unknown_39_[0x128 - 0x39];
    int unknown_128_;
    unsigned char unknown_12c_[0xc];
    float unknown_138_;
    unsigned char unknown_13c_[0xc];
    Struct_0205765c *unknown_148_;
};

struct Struct_0205765c_2 {
    unsigned char unknown_0_[5];
    unsigned char unknown_5_;
};

struct Struct_0205765c_3 {
    int unknown_0_;
    Vector3fix unknown_4_;
};

// USA: func_0205765c
extern "C" ARM void func_0205765c(int arg0) {
    Struct_0205765c *var0 = (Struct_0205765c *) arg0;
    if (func_02057854((Struct_02057334_2 *) var0) && var0->unknown_38_) {
        return;
    }

    Struct_0205765c_2 *var1 = (Struct_0205765c_2 *) func_02055108(var0->unknown_30_);
    if (!var1->unknown_5_) {
        Struct_02056c3c var2[64];
        memset(var2, 0, sizeof(var2));
        Vector3fix var3  = ((Struct_0205765c_3 *) func_020100bc(GameState::GetInstance()))->unknown_4_;
        var3.y           = 0;
        int var4                = 0;
        Struct_0205765c *var5 = var0->unknown_34_;
        while (var5 != NULL) {
            if (!var5->unknown_2c_) {
                var5 = var5->unknown_148_;
                continue;
            }
            int var6 = (int) var5->unknown_138_;
            if (var6 <= 0) {
                var5 = var5->unknown_148_;
                continue;
            }
            if (var6 > 31) {
                var6 = 31;
            }
            var6 += 31;
            if (var6 > 47) {
                var6 -= 17;
            }
            var5->unknown_128_     = var6;
            Vector3fix var7     = var5->unknown_10_;
            var7.y              = 0;
            var2[var4].unknown_0_     = var5;
            var2[var4].unknown_4_ = (float) Vector3fix_Distance(&var7, &var3) / 4096.0f;
            var5                    = var5->unknown_148_;
            var4++;
        }
        if (var4 > 0) {
            func_02056c3c(var0, var2, 0, var4 - 1);
            for (int var8 = 0; var8 < var4; var8++) {
                func_02059a54(var2[var8].unknown_0_);
            }
        }
    } else {
        Struct_0205765c *var9 = var0->unknown_34_;
        while (var9 != NULL) {
            if (!var9->unknown_2c_) {
                var9 = var9->unknown_148_;
                continue;
            }
            func_02059a54(var9);
            var9 = var9->unknown_148_;
        }
    }
}
