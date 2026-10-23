#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned short func_ov004_0215eb20(void* arg0, int arg1);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);

struct Struct_ov004_021707f0 {
    signed char unknown_0_;
    signed char unknown_1_;
    char unknown_2_[0x12];
    int unknown_14_;
    char unknown_18_[0xc];
};

signed char data_ov004_021707e8[6];
Struct_ov004_021707f0 data_ov004_021707f0;
extern unsigned char data_ov004_02170820[];
extern int data_ov004_02170854[];

// USA: func_ov004_0215ef14
extern "C" ARM void func_ov004_0215ef14() {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), data_ov004_021707f0.unknown_14_);
    int var1 = 0;
    for (int var2 = 1; var2 < 13; var2++) {
        if (func_ov004_0215eb20(var0, data_ov004_02170854[var2])) {
            data_ov004_021707f0.unknown_1_++;
            data_ov004_02170820[data_ov004_02170854[var2] - 1] = var1;
            data_ov004_021707e8[5]++;
            var1++;
        }
    }
}
