#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float object3DsData[8];
extern float boneTracking[8];

// USA: func_020e5b78
extern "C" __declspec(initcode) ARM void __sinit_020e5b78(void) {
    float var0;
    float var1;
    float var2;
    boneTracking[3] = object3DsData[1] + (object3DsData[2] + (object3DsData[3] + object3DsData[0]));
    var0 = boneTracking[1] + object3DsData[3];
    var1 = object3DsData[0];
    boneTracking[4] = var0;
    var0 = var0 + var1;
    var2 = object3DsData[2];
    boneTracking[2] = var0;
    var0 = var0 + var2;
    boneTracking[0] = var0;
}
