#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov000_021838e8[8];
extern float data_ov000_0218423c[8];

// USA: func_ov000_02183794
extern "C" __declspec(initcode) ARM void __sinit_ov000_02183794(void) {
    float var0;
    float var1;
    float var2;
    data_ov000_0218423c[4] = data_ov000_021838e8[1] + (data_ov000_021838e8[0] + (data_ov000_021838e8[3] + data_ov000_021838e8[2]));
    var0 = data_ov000_0218423c[0] + data_ov000_021838e8[3];
    var1 = data_ov000_021838e8[2];
    data_ov000_0218423c[3] = var0;
    var0 = var0 + var1;
    var2 = data_ov000_021838e8[0];
    data_ov000_0218423c[2] = var0;
    var0 = var0 + var2;
    data_ov000_0218423c[1] = var0;
}
