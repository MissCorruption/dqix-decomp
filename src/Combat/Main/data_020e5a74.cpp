#include <globaldefs.h>
#include "World/ZoneWarpScript.h"

#pragma define_section initcode ".init" RX

extern float data_020ef378[8];

// USA: func_020e5a74
extern "C" __declspec(initcode) ARM void __sinit_020e5a74(void) {
    float var0;
    float var1;
    float var2;
    data_020fdc20.unknown_c_[4] = data_020ef378[1] + (data_020ef378[2] + (data_020ef378[0] + data_020ef378[3]));
    var0 = data_020fdc20.unknown_c_[3] + data_020ef378[0];
    var1 = data_020ef378[3];
    data_020fdc20.unknown_c_[2] = var0;
    var0 = var0 + var1;
    var2 = data_020ef378[2];
    data_020fdc20.unknown_c_[1] = var0;
    var0 = var0 + var2;
    data_020fdc20.unknown_c_[0] = var0;
}
