#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020f1a8c[8];
extern float data_02109db8[8];

// USA: func_020e64fc
extern "C" __declspec(initcode) ARM void __sinit_020e64fc(void) {
    float var0;
    float var1;
    float var2;
    data_02109db8[3] = data_020f1a8c[0] + (data_020f1a8c[1] + (data_020f1a8c[3] + data_020f1a8c[2]));
    var0 = data_02109db8[2] + data_020f1a8c[3];
    var1 = data_020f1a8c[2];
    data_02109db8[1] = var0;
    var0 = var0 + var1;
    var2 = data_020f1a8c[1];
    data_02109db8[0] = var0;
    var0 = var0 + var2;
    data_02109db8[4] = var0;
}
