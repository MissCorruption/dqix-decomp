#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern int func_020dfc2c;
extern int data_02153680;
extern int data_02153694;
struct SafeAllocator;
extern "C" unsigned int func_020466d0(SafeAllocator*);
extern "C" unsigned int func_0200ee94(unsigned int, unsigned int, unsigned int, unsigned int);

// USA: func_020e68f4
extern "C" __declspec(initcode) ARM unsigned int __sinit_020e68f4(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    unsigned int var0[1];
    unsigned int var1 = 0;
    arg0 = (unsigned int)&data_02153694;
    var1 = 0x0;
    arg3 = (unsigned int)&func_020dfc2c;
    arg1 = 0x2;
    arg2 = 0x18;
    *(unsigned int*)((char*)var0 + 0x0) = (unsigned int)var1;
    arg0 = (unsigned int)func_0200ee94(arg0, arg1, arg2, arg3);
    arg0 = (unsigned int)&data_02153680;
    arg0 = (unsigned int)func_020466d0((SafeAllocator*)arg0);
    return arg0;
}
