#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" int func_0208a03c(void* arg0, int arg1, int arg2, int* arg3, int arg4);
extern "C" int func_ov000_02154a04(int arg0, int arg1, int arg2, int arg3);

struct Struct_0208a700 { char unknown_0_[0x18]; unsigned short unknown_18_[6]; };
struct Struct_0208a700_2 { char unknown_0_[0x148]; Struct_0208a700* unknown_148_; };

enum Enum_0208a700 { Enum_0208a700_0 = 0, Enum_0208a700_1 = 1, Enum_0208a700_2 = 2, Enum_0208a700_5 = 5 };

// USA: func_0208a700
extern "C" ARM int func_0208a700(int* arg0, int arg1, int* arg2, int arg3) {
    unsigned char var0;
    GameState* var1;
    GameObject* var2;
    struct ModifiableCombatStats* var3;
    unsigned char* var4;
    Enum_0208a700 var5;
    Enum_0208a700 var6;
    Enum_0208a700 var7;
    Enum_0208a700 var8;
    int var9;
    int var10;
    unsigned char var11;
    unsigned char var12;
    unsigned char var13;
    unsigned char var14;
    Struct_0208a700* var15;

    var5 = Enum_0208a700_0;
    var6 = Enum_0208a700_1;
    var7 = Enum_0208a700_5;
    var8 = Enum_0208a700_2;
    var1 = GameState::GetInstance();
    var2 = func_0200fea4(var1, arg1);
    var3 = var2->currentStats_;
    var15 = ((Struct_0208a700_2*)var2)->unknown_148_;
    var4 = (unsigned char*)((char*)var3 + 0x38);
    *var4 = *var4 % 2u;

    for (var0 = 0; var0 < 2; var0++) {
        var9 = var5;
        var10 = var5;
        if (*var4 != 0) {
            var9 = var6;
            var10 = var7;
        }
        var11 = var10 - var9 + 1;
        var12 = NextRandomMax((struct Random*)*arg0, var11);
        *var4 = *var4 + 1;
        *var4 = *var4 % 2u;
        for (var13 = 0; var13 < var11; var13++) {
            var14 = var9 + var12;
            if (func_0208a03c(arg0, var14, arg1, arg2, arg3) != 0) {
                return var15->unknown_18_[var14];
            }
            var12++;
            var12 %= var11;
        }
    }
    *arg2 = 0;
    *arg2 = func_ov000_02154a04(*arg0, arg1, var8, arg3);
    return var8;
}
