#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d7654[8];
extern float data_ov017_021d8394[8];

// USA: func_ov017_021d6f58
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d6f58(void) {
    float var0;
    float var1;
    float var2;
    data_ov017_021d8394[3] = data_ov017_021d7654[2] + (data_ov017_021d7654[1] + (data_ov017_021d7654[4] + data_ov017_021d7654[3]));
    var0 = data_ov017_021d8394[2] + data_ov017_021d7654[4];
    var1 = data_ov017_021d7654[3];
    data_ov017_021d8394[1] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d7654[1];
    data_ov017_021d8394[4] = var0;
    var0 = var0 + var2;
    data_ov017_021d8394[0] = var0;
}
