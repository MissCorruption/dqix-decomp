#include <globaldefs.h>
#pragma define_section initcode ".init" RX

struct Struct_020e5afc {
    struct Struct_020e5afc* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void* func_02028c8c(void* arg0);
extern "C" void* func_02028d2c(void* arg0);
extern "C" ARM void __register_global_object(int arg0, int arg1, struct Struct_020e5afc* arg2);

extern void* data_020fdd44;
extern void* data_020fdd38;

// USA: func_020e5afc
extern "C" __declspec(initcode) ARM void __sinit_020e5afc(void) {
    func_02028c8c(&data_020fdd44);
    __register_global_object((int)&data_020fdd44, (int)func_02028d2c, (struct Struct_020e5afc*)&data_020fdd38);
}
