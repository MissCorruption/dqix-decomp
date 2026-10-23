#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_02052e2c;
extern "C" short* func_02052e2c(Struct_02052e2c* arg0);
struct Struct_02015ef4_4 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
    short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_;
};
extern "C" unsigned short func_020de234(Struct_02015ef4_4* arg0, int arg1);
struct Struct_02072e94 {
    short unknown_0_[10];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 7;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
};
struct Struct_020e8834 { char unknown_0_[8]; };
struct Struct_020e883c { char unknown_0_[10]; };
extern Struct_020e8834 data_020e8834;
extern Struct_020e883c data_020e883c;
extern char data_020f0d04[];
extern char data_020f0d0a[];

// USA: func_02072e94
extern "C" ARM int func_02072e94(char* arg0, int arg1, int arg2,
                                Struct_02015ef4_4* arg3, void* arg4) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    unsigned char* var1 = (unsigned char*)func_02053c6c((unsigned char*)var0);
    Struct_02072e94* var2 = (Struct_02072e94*)func_02052e2c((Struct_02052e2c*)var0);
    int var3 = var2->unknown_14_0_;
    int var4 = func_020de234(arg3, var2->unknown_14_0_);
    Struct_02015ef4_4* var5 = NULL;
    Struct_02015ef4_4* var6 = NULL;
    if (arg4 != NULL) {
        var6 = (Struct_02015ef4_4*)arg4;
        var5 = (Struct_02015ef4_4*)((char*)arg4 + 0xe0);
    }
    Struct_020e8834 var7 = data_020e8834;
    char var8[2] = {};
    char var9[2] = {};
    if (arg2 == 4) {
        strcpy(var7.unknown_0_, data_020f0d04);
        var8[0] = 'a';
        var8[1] = 0;
        var4 += var2->unknown_15_0_;
    }
    int var10 = -1;
    if (var5 != NULL && var5->unknown_18_ > -1) {
        var10 = func_020de234(var5, var3);
    }
    if (arg2 == 3) {
        var8[0] = 'a';
        var8[1] = 0;
        if (var10 >= 0) {
            unsigned int var11 = var10 / 100;
            if (var11 < 10) {
                Struct_020e883c var12 = data_020e883c;
                char var13 = var12.unknown_0_[var11];
                if (var13 == 0) return 0;
                var8[0] = var13;
                if (var11 == 3 && var3 == 0 && var2->unknown_0_[3] == 9001) {
                    var8[0] = 'f';
                }
            } else {
                return 0;
            }
        }
    }
    if (arg2 == 5 && var6 != NULL) {
        if (var2->unknown_0_[4] == 8010 || var2->unknown_0_[4] < 0) {
            var4 = func_020de234(var6, var3);
        }
        strcpy(var7.unknown_0_, data_020f0d04);
    }
    if (arg2 == 6) strcpy(var7.unknown_0_, data_020f0d04);
    if (arg3->unknown_18_ == 1000) var4 += var1[0x56a];
    sprintf(arg0, data_020f0d0a, (char)arg3->unknown_12_4_, var4, var8, var9, var7.unknown_0_);
    return 1;
}
