#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d79c0[8];
extern "C" float _ZZ21inline_ov017_021b06b0vE1s[8];

// USA: func_ov017_021d6fe0
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d6fe0(void) {
    float var0;
    float var1;
    float var2;
    _ZZ21inline_ov017_021b06b0vE1s[5] = data_ov017_021d79c0[1] + (data_ov017_021d79c0[2] + (data_ov017_021d79c0[0] + data_ov017_021d79c0[3]));
    var0 = _ZZ21inline_ov017_021b06b0vE1s[4] + data_ov017_021d79c0[0];
    var1 = data_ov017_021d79c0[3];
    _ZZ21inline_ov017_021b06b0vE1s[3] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d79c0[2];
    _ZZ21inline_ov017_021b06b0vE1s[2] = var0;
    var0 = var0 + var2;
    _ZZ21inline_ov017_021b06b0vE1s[1] = var0;
}
