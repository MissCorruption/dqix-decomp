#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d7cbc[8];
extern float data_ov017_021d845c[8];

// USA: func_ov017_021d7200
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d7200(void) {
    float var0;
    float var1;
    float var2;
    data_ov017_021d845c[5] = data_ov017_021d7cbc[1] + (data_ov017_021d7cbc[2] + (data_ov017_021d7cbc[0] + data_ov017_021d7cbc[3]));
    var0 = data_ov017_021d845c[4] + data_ov017_021d7cbc[0];
    var1 = data_ov017_021d7cbc[3];
    data_ov017_021d845c[3] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d7cbc[2];
    data_ov017_021d845c[2] = var0;
    var0 = var0 + var2;
    data_ov017_021d845c[1] = var0;
}
