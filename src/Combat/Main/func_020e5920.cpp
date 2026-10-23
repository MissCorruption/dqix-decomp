#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern float data_020ef07c[6] __attribute__((aligned(4)));
extern float data_020f33b4[6];
extern char data_020f33d8[];
extern char data_020f33cc[];

extern "C" void func_02012200(char*);
extern "C" void func_02012224(char*);
extern "C" void __register_global_object(void* arg0, void* arg1, void* arg2);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020e5920
extern "C" __declspec(initcode) ARM void __sinit_020e5920(void) {
    float var0;
    float var1;
#if defined(jpn)
    var0 = data_020ef07c[2] + data_020ef07c[1];
    var0 = data_020ef07c[0] + var0;
    var0 = data_020ef07c[3] + var0;
    data_020f33b4[2] = var0;
    var0 = data_020f33b4[5] + data_020ef07c[2];
    var1 = data_020ef07c[1];
    data_020f33b4[4] = var0;
    var0 = var0 + var1;
    data_020f33b4[3] = var0;
    var1 = data_020ef07c[0];
    var0 = var0 + var1;
    data_020f33b4[1] = var0;
#else
    var0 = data_020ef07c[1] + data_020ef07c[2];
    var0 = data_020ef07c[0] + var0;
    var0 = data_020ef07c[3] + var0;
    data_020f33b4[1] = var0;
    var0 = data_020f33b4[5] + data_020ef07c[1];
    var1 = data_020ef07c[2];
    data_020f33b4[4] = var0;
    var0 = var0 + var1;
    var1 = data_020ef07c[0];
    data_020f33b4[3] = var0;
    var0 = var0 + var1;
    data_020f33b4[2] = var0;
#endif
    func_02012200((char*)&data_020f33d8);
    __register_global_object((void*)&data_020f33d8, (void*)func_02012224, (void*)&data_020f33cc);
}
