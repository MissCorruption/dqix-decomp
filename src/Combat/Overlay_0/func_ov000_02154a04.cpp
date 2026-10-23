#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include <GameState/GameState.h>
#include <Util/Random.h>
#include <std_library_functions.h>

struct Struct_ov000_02154a04 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[8];
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
    int unknown_18_;
    unsigned int unknown_1c_0_ : 14;
    unsigned int unknown_1d_6_ : 5;
    unsigned int unknown_1e_3_ : 13;
};
struct Struct_ov000_02154a04_2 { char unknown_0_[0x17c]; unsigned char unknown_17c_; };

extern "C" void* func_02079e2c(char*, int);
extern "C" int func_ov000_0215e9fc(Random*, short*, int, int);
extern "C" short func_ov000_02154f30(Random*, short, int, short*);
extern "C" void func_ov000_02153d10(Random*, short*);
extern "C" void func_ov000_02153d78(Random*, short, short*);
extern "C" GameObject* func_0200fea4(GameState*, int);
extern "C" int func_ov000_02153e78(Random*, short*, int, int, int);
extern "C" int func_ov000_0215eb1c(Random*, short*, int, int);
extern "C" signed char func_ov000_0215fbe0(Random*, int);
extern short data_ov000_02182af4[8];

// USA: func_ov000_02154a04
extern "C" ARM int func_ov000_02154a04(Random* arg0, int arg1, int arg2, short* arg3) {
    int var0 = 0;
    GameState::GetInstance();
    Struct_ov000_02154a04* var1 = (Struct_ov000_02154a04*)func_02079e2c((char*)func_020797dc(), (short)arg2);
    if (!var1) return 0;
    unsigned int var2 = var1->unknown_9_0_;
    unsigned int var3 = var1->unknown_17_4_;
    if (var3 == 1) {
        arg3[var0++] = arg1;
    } else if (var2 == 1) {
        if (var3 == 2 || var3 == 5) {
            int var4 = func_ov000_0215e9fc(arg0, arg3, 8, 1);
            arg3[0] = func_ov000_02154f30(arg0, (short)arg1, var4, arg3);
            var0 = 1;
        } else if (var3 == 4) {
            var0 = func_ov000_0215e9fc(arg0, arg3, 8, 1);
        } else if (var3 == 3) {
            var0 = func_ov000_0215e9fc(arg0, arg3, 8, 1);
        }
    } else if (var2 == 2) {
        if (var3 == 2) {
            short var5 = 0;
            func_ov000_02153d10(arg0, &var5);
            arg3[var0++] = var5;
        } else if (var3 == 8) {
            short var6 = 0;
            func_ov000_02153d78(arg0, (short)arg1, &var6);
            arg3[var0++] = var6;
        } else if (var3 == 4) {
            GameObject* var7 = func_0200fea4(GameState::GetInstance(), (short)arg1);
            var0 = func_ov000_02153e78(arg0, arg3, 8, ((Struct_ov000_02154a04_2*)var7)->unknown_17c_, 1);
        } else if (var3 == 3) {
            var0 = func_ov000_0215eb1c(arg0, arg3, 8, 1);
        }
    }
    short var8[8];
    unsigned short* var9 = (unsigned short*)data_ov000_02182af4;
    int var10 = 8;
    unsigned short* var11 = (unsigned short*)var8;
    do { *var11 = *var9++; var11++; } while (--var10);
    short* var12 = var8;
    int var13 = func_ov000_0215fbe0(arg0, (signed char)var1->unknown_1d_6_);
    if (var13 > 0) {
        for (int var14 = 0; var14 < var13; var14++) var12[var14] = arg3[NextRandomMax(arg0, var0)];
        memset(arg3, 0, var0 * 2);
        memcpy(arg3, var8, var13 * 2);
        var0 = var13;
    }
    return var0;
}
