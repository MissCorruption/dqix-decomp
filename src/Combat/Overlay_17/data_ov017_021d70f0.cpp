#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d7aec[8];
extern float data_ov017_021d8410[8];

// USA: func_ov017_021d70f0
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d70f0(void) {
    float var0;
    float var1;
    float var2;
    data_ov017_021d8410[4] = data_ov017_021d7aec[1] + (data_ov017_021d7aec[2] + (data_ov017_021d7aec[0] + data_ov017_021d7aec[3]));
    var0 = data_ov017_021d8410[3] + data_ov017_021d7aec[0];
    var1 = data_ov017_021d7aec[3];
    data_ov017_021d8410[2] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d7aec[2];
    data_ov017_021d8410[1] = var0;
    var0 = var0 + var2;
    data_ov017_021d8410[0] = var0;
}
