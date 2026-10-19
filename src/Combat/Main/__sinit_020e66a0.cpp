#include "Input/Input.h"
#include <globaldefs.h>

#pragma define_section initcode ".init" RX

void BlankFunction02012530(void* self);
void EmptyStub02012534(void);
void ClearField0x0_02046724(int* field);
extern "C" void __register_global_object(void* obj, void* dtor, void* node);

extern "C" KeyManager* _ZN10KeyManagerC1Ev(KeyManager* self);
extern "C" KeyManager* _ZN10KeyManagerD1Ev(KeyManager* self);

extern int data_02114e14;
extern int data_02114e08;
extern int data_02114e04;
extern unsigned char data_02114e54;

// USA: __sinit_020e66a0
extern "C" __declspec(initcode) ARM void __sinit_020e66a0(void) {
    _ZN10KeyManagerC1Ev(&g_keyManager);
    __register_global_object(&g_keyManager, (void*)_ZN10KeyManagerD1Ev, &data_02114e14);
    BlankFunction02012530(&data_02114e54);
    __register_global_object(&data_02114e54, (void*)EmptyStub02012534, &data_02114e08);
    ClearField0x0_02046724(&data_02114e04);
}
