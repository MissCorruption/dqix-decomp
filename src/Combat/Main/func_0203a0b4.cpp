#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Graphics.h"

struct Struct_02015ef4 { unsigned int unknown_0_[3]; };

struct Struct_0203a46c {
    char unknown_0_[0x1c];
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};

extern "C" int func_020100bc(GameState*);
extern "C" void func_0202ec84(void*, struct Struct_02015ef4*, int*, int*);
extern "C" void func_0203a46c(struct Struct_0203a46c*, int, int, int);
extern "C" void func_0203a47c(unsigned int*, unsigned int, unsigned int, unsigned int);
extern "C" void func_02047554(void* arg0, int arg1, int arg2);

extern const int data_020e7830[5];

struct Struct_0203a0b4_2 {
    struct Struct_0203a46c unknown_0_;
    char unknown_28_[0x82 - 0x28];
    short unknown_82_;
    char unknown_84_[0x88 - 0x84];
};

struct Struct_0203a0b4_3 {
    unsigned short unknown_0_;
    short unknown_2_;
    signed char unknown_4_;
    signed char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    short unknown_8_;
    short unknown_a_;
    struct Struct_02015ef4 unknown_c_;
};

struct Struct_0203a0b4 {
    struct Struct_0203a0b4_2 unknown_0_[5];
    struct Struct_0203a0b4_2 unknown_2a8_[5];
    struct Struct_0203a0b4_3 unknown_550_[16];
    int unknown_6d0_;
    int unknown_6d4_;
};

// USA: func_0203a0b4
extern "C" ARM void func_0203a0b4(struct Struct_0203a0b4* arg0) {
    int var0;
    int var1;
    int var2;
    struct Struct_0203a0b4_3* var3;
    int var4;
    int var5;
    int var6;
    void* var7 = (void*)func_020100bc(GameState::GetInstance());
    if (var7 == 0) return;
    var2 = arg0->unknown_6d0_;
    while (var2 != arg0->unknown_6d4_) {
        var3 = &arg0->unknown_550_[var2];
        var1 = var3->unknown_5_ - 5;
        var1 = var1 <= 4 ? var1 * 7 : 31;
        if (var3->unknown_5_ < 35 && var1 > 0) {
            int var8 = var3->unknown_7_;
            int var9 = var3->unknown_0_;
            var5 = 1;
            int var10, var11;
            func_0202ec84(var7, &var3->unknown_c_, &var10, &var11);
            var10 += var3->unknown_4_;
            var11 = var11 + var3->unknown_2_ - 20;
            if (var10 < 16) var10 = 16;
            if (var10 > 240) var10 = 240;
            var4 = var10;
            if (var11 < 16) var11 = 16;
            if (var11 > 176) var11 = 176;
            int var12 = var11;
            var0 = var4 + (var3->unknown_6_ * 8 / 2 - 8);
            var10 = var0;
            var6 = var3->unknown_6_ - 1;
            while (var9 > 0) {
                bool var13 = true;
                int var14 = 0, var15 = 0, var16 = 0;
                int var17 = 0x1000;
                int var18 = 34 - var3->unknown_5_ - var6 * 3;
                if (var18 < 0) {
                    var18 = 0;
                    var13 = false;
                } else if (var18 < 5) {
                    int var19 = data_020e7830[var18];
                    var17 = var19 + 0x1000;
                    var14 = (int)(((long long)var19 * -0x4000 + 0x800) >> 12);
                    var15 = (int)(((long long)var19 * -0x8000 + 0x800) >> 12);
                    var16 = (int)(((long long)var19 * 0x5000 + 0x800) >> 12);
                }
                if (var13) {
                    func_0203a46c(&arg0->unknown_0_[var8].unknown_0_, var14 + (var0 << 12), var15 + ((var11 - 8) << 12), var16 + (var5 << 12));
                    arg0->unknown_0_[var8].unknown_82_ = var1;
                    func_0203a47c((unsigned int*)&arg0->unknown_0_[var8], var17, var17, 0x1000);
                    GXFIFO_MATRIX_PUSH = 0;
                    func_02047554(&arg0->unknown_0_[var8], var9 % 10, 1);
                    GXFIFO_MATRIX_POP = 1;
                }
                var9 = var9 / 10;
                var10 -= 8;
                var0 = var10;
                var5++;
                var6--;
            }
            if (var1 > 0) {
                float var20 = (float)arg0->unknown_550_[var2].unknown_a_ / 4096.0f;
                var4 -= (int)(16.0f * var20);
                int var21 = var12 - (int)(8.0f * var20) - 8;
                func_0203a46c(&arg0->unknown_2a8_[var8].unknown_0_, var4 << 12, var21 << 12, 0);
                func_0203a47c((unsigned int*)&arg0->unknown_2a8_[var8], arg0->unknown_550_[var2].unknown_a_, arg0->unknown_550_[var2].unknown_a_, 0x1000);
                arg0->unknown_2a8_[var8].unknown_82_ = var1;
                GXFIFO_MATRIX_PUSH = 0;
                func_02047554(&arg0->unknown_2a8_[var8], 0, 1);
                GXFIFO_MATRIX_POP = 1;
            }
        }
        var2++;
        if (var2 >= 16) var2 = 0;
    }
}
