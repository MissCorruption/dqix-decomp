#include <globaldefs.h>

#pragma define_section initcode ".init" RX

#if defined(jpn)
extern float data_ov001_02164d14[8];
#else
extern float func_ov002_02164d14[8];
#endif
extern float data_ov001_02165880[8];

// USA: func_ov001_02164aec
extern "C" __declspec(initcode) ARM void __sinit_ov001_02164aec(void) {
#if defined(jpn)
    float *var0 = data_ov001_02164d14;
#else
    float *var0 = func_ov002_02164d14;
#endif
    float var1;
    float var2;
    float var3;
    data_ov001_02165880[13] = var0[1] + (var0[0] + (var0[2] + var0[3]));
    var1 = data_ov001_02165880[0] + var0[2];
    var2 = var0[3];
    data_ov001_02165880[4] = var1;
    var1 = var1 + var2;
    var3 = var0[0];
    data_ov001_02165880[12] = var1;
    var1 = var1 + var3;
    data_ov001_02165880[11] = var1;
}
