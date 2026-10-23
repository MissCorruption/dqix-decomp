#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_ov017_021d7f84[8];
extern float data_ov017_021d847c[8];

// USA: func_ov017_021d7288
extern "C" __declspec(initcode) ARM void __sinit_ov017_021d7288(void) {
    float var0;
    float var1;
    float var2;
    data_ov017_021d847c[6] = data_ov017_021d7f84[4] + (data_ov017_021d7f84[0] + (data_ov017_021d7f84[1] + data_ov017_021d7f84[3]));
    var0 = data_ov017_021d847c[5] + data_ov017_021d7f84[1];
    var1 = data_ov017_021d7f84[3];
    data_ov017_021d847c[4] = var0;
    var0 = var0 + var1;
    var2 = data_ov017_021d7f84[0];
    data_ov017_021d847c[3] = var0;
    var0 = var0 + var2;
    data_ov017_021d847c[2] = var0;
}
