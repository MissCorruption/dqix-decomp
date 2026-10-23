#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" unsigned char func_02011494(char* arg0, void* arg1);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void* func_ov000_02161318(void* arg0, int arg1);
extern "C" int func_ov000_0217f5dc(void* arg0);

struct Struct_ov000_0217228c {
    unsigned char unknown_0_[0x6c];
    unsigned char unknown_6c_[4];
    signed char unknown_70_[4];
    unsigned char unknown_74_[5];
    unsigned char unknown_79_;
};

// USA: func_ov000_0217228c
extern "C" ARM void func_ov000_0217228c(struct Struct_ov000_0217228c* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1[4];
    int var2 = func_020114ec((char*)var0, var1);
    unsigned char var3[4];
    __clear(var3, 4);
    for (int var4 = 0; var4 < var2; var4++) {
        arg0->unknown_6c_[var4] = var1[var4];
        var3[var1[var4]] = 1;
    }
    for (; var2 < 4; var2++) {
        for (int var5 = 0; var5 < 4; var5++) {
            if (var3[var5] == 0) {
                arg0->unknown_6c_[var2] = var5;
                var3[var5] = 1;
                break;
            }
        }
    }
#if defined(jpn)
    signed char var6[4];
#else
    unsigned char var6[4];
#endif
    unsigned char var7 = 0;
    int var8 = func_02011494((char*)var0, var6);
    for (int var9 = 0; var9 < 4; var9++) {
#if defined(jpn)
        if (var9 < var8) {
            arg0->unknown_70_[var9] = var6[var9];
        } else {
            arg0->unknown_70_[var9] = -1;
        }
#else
        arg0->unknown_70_[var9] = -1;
        if (var9 < var8) {
            arg0->unknown_70_[var9] = var6[var9];
        }
#endif
        void* var10 = func_ov000_02161318(arg0, arg0->unknown_70_[var9]);
        if (var10 != NULL && func_ov000_0217f5dc(var10) != 0) {
            var7++;
        }
    }
    arg0->unknown_79_ = var7;
}
