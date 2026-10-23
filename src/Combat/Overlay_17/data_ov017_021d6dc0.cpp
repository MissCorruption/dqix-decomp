#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d73d8[8];
extern float data_ov017_021d8340[8];

// USA: func_ov017_021d6dc0
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d6dc0(void) {
    float var0;
    float var1;
    float var2;
    data_ov017_021d8340[9] = data_ov017_021d73d8[3] + (data_ov017_021d73d8[1] + (data_ov017_021d73d8[0] + data_ov017_021d73d8[2]));
    var0 = data_ov017_021d8340[8] + data_ov017_021d73d8[0];
    var1 = data_ov017_021d73d8[2];
    data_ov017_021d8340[7] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d73d8[1];
    data_ov017_021d8340[6] = var0;
    var0 = var0 + var2;
    data_ov017_021d8340[5] = var0;
}
