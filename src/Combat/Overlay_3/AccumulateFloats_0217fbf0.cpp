#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov003_0217fe84[8];
extern float data_ov003_02180ca4[8];

// USA: func_ov003_0217fbf0
extern "C" __declspec(initcode) ARM void __sinit_ov003_0217fbf0(void) {
    float var0;
    float var1;
    float var2;
    data_ov003_02180ca4[3] = data_ov003_0217fe84[1] + (data_ov003_0217fe84[2] + (data_ov003_0217fe84[3] + data_ov003_0217fe84[0]));
    var0 = data_ov003_02180ca4[4] + data_ov003_0217fe84[3];
    var1 = data_ov003_0217fe84[0];
    data_ov003_02180ca4[2] = var0;
    var0 = var0 + var1;
    var2 = data_ov003_0217fe84[2];
    data_ov003_02180ca4[0] = var0;
    var0 = var0 + var2;
    data_ov003_02180ca4[1] = var0;
}
