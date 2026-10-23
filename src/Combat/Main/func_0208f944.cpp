#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Grotto/Main/DetailedTreasureMapData.h"

extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void* func_02012fe4(void);
extern "C" int func_0201b588(int arg0);
extern "C" int func_0201b5d8(int arg0);

struct Struct_0208f944 {
    char unknown_0_[IS_JPN ? 0x280 : 0x260];
    unsigned char unknown_260_;
    char unknown_261_;
    unsigned char unknown_262_;
    char unknown_263_[5];
    unsigned int unknown_268_;
    unsigned int unknown_26c_;
    unsigned int unknown_270_;
    unsigned short unknown_274_;
};

struct Struct_0208f944_2 {
    unsigned short unknown_0_;
    char unknown_2_[5];
    unsigned char unknown_7_;
    char unknown_8_[2];
    unsigned char unknown_a_;
    char unknown_b_[5];
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned short unknown_1c_;
};

// USA: func_0208f944
extern "C" ARM void func_0208f944(struct Struct_0208f944* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0208f944_2* var1 = (struct Struct_0208f944_2*)func_0200fd0c(var0);
    struct GrottoStruct* var2 = var0->GetGrottoStruct();
    void* var3 = func_02012fe4();
    int var4 = var1->unknown_0_;
    int var5 = *(unsigned short*)var3;

    if (arg0->unknown_262_ != 0 && var4 != 0xc3b5) {
        var1->unknown_0_ = arg0->unknown_274_;
        var1->unknown_7_ = 1;
        var1->unknown_1c_ = 0x3244;
        var1->unknown_10_ = arg0->unknown_268_;
        var1->unknown_14_ = arg0->unknown_26c_;
        var1->unknown_18_ = arg0->unknown_270_;
        var1->unknown_a_ = 0;
        var4 = arg0->unknown_274_;
    }

    arg0->unknown_262_ = 0;

    if (!func_0201b588(var4)) {
        if (func_0201b588(var5)) {
            if (var4 < 0x7530 || var4 > 0x9c3f) {
                ((DetailedTreasureMapData*)arg0)->Clear();
            }
        }
    }

    if (func_0201b588(var4) && !func_0201b588(var5)) {
        signed char var6 = var2->unknown_8;
        if (var6 != -1) {
            if (!func_0201b5d8(var4)) {
                int var7 = var4 % 20;
                var1->unknown_0_ = (unsigned short)((var7 + 0x1c40 + 0x8000) + var6 * 20);
            }
        }
    }

    arg0->unknown_260_ = 0;
}
