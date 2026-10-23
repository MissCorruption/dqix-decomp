#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);

struct Struct_ov004_02170010 {
    short unknown_0_;
    short unknown_2_;
};
extern struct Struct_ov004_02170010 data_ov004_02170010[];

// USA: func_ov004_0216794c
extern "C" ARM void func_ov004_0216794c(short* arg0, short* arg1, short* arg2, char* arg3, int* arg4) {
    *arg0 = *(int*)((char*)func_02010828(GameState::GetInstance()) + 0xf74);
    *arg1 = func_02086aec((struct Struct_02053f7c*)func_02010828(GameState::GetInstance()), 0x5617);
    *arg3 = 0;
    short var0 = *arg0;
    int var1;
    for (var1 = 0; var1 < 10; var1++) {
        if (data_ov004_02170010[var1].unknown_0_ > var0) {
            goto found;
        }
    }
    var1 = -1;
found:
    *arg4 = var1;
    if (*arg4 >= 0) {
        *arg2 = data_ov004_02170010[*arg4].unknown_0_;
        if (*arg0 + *arg1 >= *arg2) {
            *arg3 = 1;
        }
    } else {
        *arg2 = 0;
        *arg3 = 0;
    }
}
