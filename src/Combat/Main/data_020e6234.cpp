#include <globaldefs.h>
struct LootableContainerManager;

#pragma define_section initcode ".init" RX

extern "C" ARM char* _ZN24LootableContainerManagerC1Ev(char* arg0);
extern "C" ARM LootableContainerManager* func_020269d0(LootableContainerManager* arg0);

extern "C" void __register_global_object(int arg0, int arg1, void* arg2);

extern char data_02108e90;
extern int data_02108e84;

// USA: func_020e6234
extern "C" __declspec(initcode) ARM void __sinit_020e6234(void) {
    _ZN24LootableContainerManagerC1Ev(&data_02108e90);
    __register_global_object((int)&data_02108e90, (int)func_020269d0, &data_02108e84);
}
