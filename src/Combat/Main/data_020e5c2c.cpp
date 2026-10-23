#include <globaldefs.h>
#pragma define_section initcode ".init" RX

struct Struct_020e5afc {
    struct Struct_020e5afc* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" char* func_0203c73c(char* arg0);
extern "C" char* func_0203c75c(char* arg0);
extern "C" ARM void __register_global_object(int arg0, int arg1, struct Struct_020e5afc* arg2);

extern void* data_02105ab4;
extern void* data_02105248;

// USA: func_020e5c2c
extern "C" __declspec(initcode) ARM void __sinit_020e5c2c(void) {
    func_0203c73c((char*)&data_02105ab4);
    __register_global_object((int)&data_02105ab4, (int)(void*)func_0203c75c, (struct Struct_020e5afc*)&data_02105248);
}
