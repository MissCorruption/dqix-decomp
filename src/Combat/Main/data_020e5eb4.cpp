#include <globaldefs.h>

#pragma define_section initcode ".init" RX

struct Struct_02058704;
extern "C" void func_02058704(Struct_02058704*);
extern "C" void func_0205873c(void* arg0);
extern "C" void __register_global_object(int arg0, int arg1, void* arg2);

extern void* data_021079ec;
extern void* data_021079e0;

// USA: func_020e5eb4
extern "C" __declspec(initcode) ARM void __sinit_020e5eb4(void) {
    func_02058704((Struct_02058704*)&data_021079ec);
    __register_global_object((int)&data_021079ec, (int)func_0205873c, &data_021079e0);
}
