#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020f16b0[8];
extern float data_02109bb0[8];

// USA: func_020e62e0
extern "C" __declspec(initcode) ARM void __sinit_020e62e0(void) {
    float var0;
    float var1;
    float var2;
    data_02109bb0[5] = data_020f16b0[0] + (data_020f16b0[1] + (data_020f16b0[3] + data_020f16b0[2]));
    var0 = data_02109bb0[4] + data_020f16b0[3];
    var1 = data_020f16b0[2];
    data_02109bb0[3] = var0;
    var0 = var0 + var1;
    var2 = data_020f16b0[1];
    data_02109bb0[2] = var0;
    var0 = var0 + var2;
    data_02109bb0[1] = var0;
}
