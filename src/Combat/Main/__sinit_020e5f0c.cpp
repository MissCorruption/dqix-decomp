#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern "C" void func_02064d1c(void* arg0);

extern float data_020f05ac[4];
extern float data_02108830[5];
extern char data_02108844;

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020e5f0c
extern "C" __declspec(initcode) ARM void __sinit_020e5f0c(void) {
    float var0;
    float var1;
    float var2;
    data_02108830[4] = data_020f05ac[0] + data_020f05ac[1] + data_020f05ac[3] + data_020f05ac[2];
    var0 = data_02108830[3] + data_020f05ac[0];
    var1 = data_020f05ac[1];
    data_02108830[2] = var0;
    var0 = var0 + var1;
    var2 = data_020f05ac[3];
    data_02108830[1] = var0;
    var0 = var0 + var2;
    data_02108830[0] = var0;
    func_02064d1c(&data_02108844);
}
