#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"
struct Struct_0208a370_3 { Random* unknown_0_; };
struct Struct_0208a370 { char unknown_0_[0x18]; unsigned short unknown_18_[6]; };
struct Struct_0208a370_2 { char unknown_0_[0x148]; Struct_0208a370* unknown_148_; };
extern "C" GameObject* func_0200fea4(GameState*, int);
extern "C" int func_0208a03c(Struct_0208a370_3*, unsigned char, int, int*, int);
extern "C" int func_ov000_02154a04(Random*, int, int, int);
extern unsigned char data_020e8caa[];
// USA: func_0208a370
extern "C" ARM int func_0208a370(Struct_0208a370_3* arg0, int arg1, int arg2, int* arg3, int arg4) {
    unsigned char* var0;
    int var1;
    Struct_0208a370* var2;
    int var3;
    var2 = ((Struct_0208a370_2*)func_0200fea4(GameState::GetInstance(), arg2))->unknown_148_;
    var0 = data_020e8caa + arg1 * 6;
    int var4 = NextRandomMax(arg0->unknown_0_, 256) + 1;
    for (var1 = 0; var1 < 6; var1++) {
        if (var0[var1] >= var4) break;
        var4 -= var0[var1];
    }
    if (var1 >= 6) var1 = 5;
    if (func_0208a03c(arg0, (unsigned char)var1, arg2, arg3, arg4)) return var2->unknown_18_[var1];
    for (var3 = var1; --var3 >= 0; ) {
        if (func_0208a03c(arg0, (unsigned char)var3, arg2, arg3, arg4)) return var2->unknown_18_[var3];
    }
    for (; ++var1 < 6; ) {
        if (func_0208a03c(arg0, (unsigned char)var1, arg2, arg3, arg4)) return var2->unknown_18_[var1];
    }
    *arg3 = 0;
    *arg3 = func_ov000_02154a04(arg0->unknown_0_, arg2, 2, arg4);
    return 2;
}
