#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov000_02183b0c[8];
extern float data_ov000_02184250[8];

// USA: func_ov000_0218381c
extern "C" __declspec(initcode) ARM void __sinit_ov000_0218381c(void) {
    float var0;
    float var1;
    float var2;
    data_ov000_02184250[4] = data_ov000_02183b0c[1] + (data_ov000_02183b0c[2] + (data_ov000_02183b0c[4] + data_ov000_02183b0c[3]));
    var0 = data_ov000_02184250[3] + data_ov000_02183b0c[4];
    var1 = data_ov000_02183b0c[3];
    data_ov000_02184250[2] = var0;
    var0 = var0 + var1;
    var2 = data_ov000_02183b0c[2];
    data_ov000_02184250[1] = var0;
    var0 = var0 + var2;
    data_ov000_02184250[0] = var0;
}
