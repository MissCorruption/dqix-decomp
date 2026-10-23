#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d7c2c[8];
extern float data_ov017_021d8424[8];

// USA: func_ov017_021d7178
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d7178(void) {
    float var0;
    float var1;
    float var2;
    data_ov017_021d8424[4] = data_ov017_021d7c2c[0] + (data_ov017_021d7c2c[1] + (data_ov017_021d7c2c[3] + data_ov017_021d7c2c[2]));
    var0 = data_ov017_021d8424[3] + data_ov017_021d7c2c[3];
    var1 = data_ov017_021d7c2c[2];
    data_ov017_021d8424[2] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d7c2c[1];
    data_ov017_021d8424[1] = var0;
    var0 = var0 + var2;
    data_ov017_021d8424[0] = var0;
}
