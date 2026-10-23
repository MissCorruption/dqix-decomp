#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov014_021895a0[8];
extern float data_ov014_02189800[8];

// USA: func_ov014_02189510
extern "C" __declspec(initcode) ARM void __sinit_ov014_02189510(void) {
    float var0;
    float var1;
    float var2;
    data_ov014_02189800[6] = data_ov014_021895a0[0] + (data_ov014_021895a0[3] + (data_ov014_021895a0[2] + data_ov014_021895a0[1]));
    var0 = data_ov014_02189800[5] + data_ov014_021895a0[2];
    var1 = data_ov014_021895a0[1];
    data_ov014_02189800[2] = var0;
    var0 = var0 + var1;
    var2 = data_ov014_021895a0[3];
    data_ov014_02189800[4] = var0;
    var0 = var0 + var2;
    data_ov014_02189800[0] = var0;
}
