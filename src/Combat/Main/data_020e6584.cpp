#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020f1b40[8];
extern float data_02109fcc[8];

// USA: func_020e6584
extern "C" __declspec(initcode) ARM void __sinit_020e6584(void) {
    float var0;
    float var1;
    float var2;
    data_02109fcc[4] = data_020f1b40[1] + (data_020f1b40[2] + (data_020f1b40[0] + data_020f1b40[3]));
    var0 = data_02109fcc[3] + data_020f1b40[0];
    var1 = data_020f1b40[3];
    data_02109fcc[2] = var0;
    var0 = var0 + var1;
    var2 = data_020f1b40[2];
    data_02109fcc[1] = var0;
    var0 = var0 + var2;
    data_02109fcc[0] = var0;
}
