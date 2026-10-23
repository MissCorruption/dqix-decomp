#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern "C" void __register_global_object(void* arg0, void* arg1, void* arg2);
extern "C" void* func_0202c794(void* arg0);
extern "C" ARM void* func_0202c7a8(void* arg0);
extern "C" ARM void* func_0202c7bc(void* arg0);
extern "C" ARM void* func_0202c814(void* arg0);

extern int data_020fefec;
extern int data_020fefe0;
extern int data_02100044;
extern int data_020fefd4;

// USA: func_020e5b28
extern "C" __declspec(initcode) ARM void __sinit_020e5b28(void) {
    func_0202c794(&data_020fefec);
    __register_global_object(&data_020fefec, (void*)func_0202c7a8, &data_020fefe0);
    func_0202c7bc(&data_02100044);
    __register_global_object(&data_02100044, (void*)func_0202c814, &data_020fefd4);
}
