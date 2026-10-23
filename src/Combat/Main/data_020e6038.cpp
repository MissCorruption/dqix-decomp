#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020f0d1c[8];
extern float data_02108dc4[8];

// USA: func_020e6038
extern "C" __declspec(initcode) ARM void __sinit_020e6038(void) {
    float var0;
    float var1;
    float var2;
    data_02108dc4[4] = data_020f0d1c[0] + (data_020f0d1c[1] + (data_020f0d1c[3] + data_020f0d1c[2]));
    var0 = data_02108dc4[3] + data_020f0d1c[3];
    var1 = data_020f0d1c[2];
    data_02108dc4[2] = var0;
    var0 = var0 + var1;
    var2 = data_020f0d1c[1];
    data_02108dc4[1] = var0;
    var0 = var0 + var2;
    data_02108dc4[0] = var0;
}
