#include <globaldefs.h>
#pragma define_section initcode ".init" RX

extern "C" void func_0203a878(void* arg0);
class Struct_0203a54c;
extern "C" void func_0203a8d4(Struct_0203a54c* arg0);

struct Struct_02104b60 {
    struct Struct_02104b60* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void __register_global_object(int arg0, int arg1, struct Struct_02104b60* arg2);

extern int data_02104b6c;
extern struct Struct_02104b60 data_02104b60;

// USA: func_020e5c00
extern "C" __declspec(initcode) ARM void __sinit_020e5c00(void) {
    func_0203a878(&data_02104b6c);
    __register_global_object((int)&data_02104b6c, (int)func_0203a8d4, &data_02104b60);
}
