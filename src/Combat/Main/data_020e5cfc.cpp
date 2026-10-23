#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020efe5c[8];
extern float data_021077e8[8];

// USA: func_020e5cfc
extern "C" __declspec(initcode) ARM void __sinit_020e5cfc(void) {
    float var0;
    float var1;
    float var2;
    data_021077e8[4] = data_020efe5c[0] + (data_020efe5c[1] + (data_020efe5c[3] + data_020efe5c[2]));
    var0 = data_021077e8[3] + data_020efe5c[3];
    var1 = data_020efe5c[2];
    data_021077e8[2] = var0;
    var0 = var0 + var1;
    var2 = data_020efe5c[1];
    data_021077e8[1] = var0;
    var0 = var0 + var2;
    data_021077e8[0] = var0;
}
