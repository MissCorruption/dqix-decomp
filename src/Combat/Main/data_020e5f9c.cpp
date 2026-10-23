#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020f0b30[8];
extern float data_02108d48[8];

// USA: func_020e5f9c
extern "C" __declspec(initcode) ARM void __sinit_020e5f9c(void) {
    float var0;
    float var1;
    float var2;
    data_02108d48[3] = data_020f0b30[0] + (data_020f0b30[1] + (data_020f0b30[3] + data_020f0b30[2]));
    var0 = data_02108d48[2] + data_020f0b30[3];
    var1 = data_020f0b30[2];
    data_02108d48[1] = var0;
    var0 = var0 + var1;
    var2 = data_020f0b30[1];
    data_02108d48[0] = var0;
    var0 = var0 + var2;
    data_02108d48[4] = var0;
}
