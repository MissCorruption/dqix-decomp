#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void* __clear(void*, int);
struct Struct_02015ef4 { unsigned int unknown_0_[3]; };
extern "C" int func_0202ec84(void*, Struct_02015ef4*, int*, int*);

struct Struct_02039fec {
    unsigned char unknown_0_[5];
    signed char unknown_5_;
    unsigned char unknown_6_[2];
    short unknown_8_;
    short unknown_a_;
    unsigned char unknown_c_[0xc];
};
struct Struct_02039fec_2 {
    unsigned char unknown_0_[0x550];
    struct Struct_02039fec unknown_550_[16];
    int unknown_6d0_;
    int unknown_6d4_;
};
struct Struct_0203a5e8 {
    unsigned char unknown_0_[2];
    short unknown_2_;
    signed char unknown_4_;
    signed char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    short unknown_8_;
    short unknown_a_;
    Struct_02015ef4 unknown_c_;
};
struct Struct_0203a5e8_2 {
    unsigned char unknown_0_[0x550];
    Struct_0203a5e8 unknown_550_[16];
    int unknown_6d0_;
    int unknown_6d4_;
};

// USA: func_0203a5e8
extern "C" ARM void func_0203a5e8(Struct_02039fec_2* arg0, int arg1) {
    Struct_0203a5e8* var0 = (Struct_0203a5e8*)&arg0->unknown_550_[arg1];
    Struct_0203a5e8_2* var1 = (Struct_0203a5e8_2*)arg0;
    signed char var2 = 0;
    int var3 = 0;
    void* var4 = func_020100bc(GameState::GetInstance());
    if (var4 != NULL) {
        bool var5 = false;
        int var6 = var5;
        int var7[16];
        int var8[16];
        int var9[16];
        __clear(var7, sizeof(var7));
        __clear(var8, sizeof(var8));
        __clear(var9, sizeof(var9));
        for (int var10 = 0; var10 < 16; var10++) {
            if (var1->unknown_550_[var10].unknown_5_ > 0) {
                int var11, var12 = 0;
                func_0202ec84(var4, &var1->unknown_550_[var10].unknown_c_, &var11, &var12);
                var11 += var1->unknown_550_[var10].unknown_4_;
                var12 += var1->unknown_550_[var10].unknown_2_;
                var9[var10] = var12;
                if (var12 < 36) var12 = 36;
                else if (var12 > 196) var12 = 196;
                var7[var10] = var11;
                var8[var10] = var12;
            }
        }
        for (int var13 = 0; var13 < 16; var13++) {
            bool var14 = false;
            int* var15 = var9;
            int var16 = var3 + var15[arg1];
            if (var16 < 36) var16 = 36;
            else if (var16 > 196) var16 = 196;
            for (int var17 = 0; var17 < 16; var17++) {
                if (var17 == arg1) continue;
                if (var1->unknown_550_[var17].unknown_5_ <= 0 || var1->unknown_550_[var17].unknown_5_ >= 35) continue;
                if (var0->unknown_7_ == 4 && var1->unknown_550_[var17].unknown_7_ == 4) continue;
                if (abs(var2 + var7[arg1] - var7[var17]) < 8 && abs(var16 - var8[var17]) < 14) {
                    var14 = true;
                    break;
                }
            }
            if (!var14) break;
            if (!var5) {
                var3 = 20 * var6 - 4;
                var6 = -var6;
                var2 = 24;
                var5 = true;
            } else {
                var3 = 20 * var6;
                var2 = 0;
                if (var6 <= 0) var6--;
                var5 = false;
            }
        }
    }
    if (var0->unknown_4_ == -127) {
        var0->unknown_4_ = 0;
        var0->unknown_2_ = 0;
    }
    var0->unknown_4_ += var2;
    var0->unknown_2_ += var3;
}
