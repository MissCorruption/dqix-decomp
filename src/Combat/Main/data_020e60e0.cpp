#include <globaldefs.h>

#pragma define_section initcode ".init" RX

extern int data_020f0d70;

// USA: func_020e60e0
extern "C" __declspec(initcode) ARM unsigned int __sinit_020e60e0(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    arg0 = (unsigned int)&data_020f0d70;
    #if defined(jpn)
    arg1 = *(unsigned int*)arg0;
#else
    arg1 = *(unsigned int*)((char*)arg0 + 0x14);
#endif
    arg1 = arg1 + 0xb;
    #if defined(jpn)
    *(unsigned int*)((char*)arg0 + 4) = (unsigned int)arg1;
#else
    *(unsigned int*)((char*)arg0 + 0x18) = (unsigned int)arg1;
#endif
    return arg0;
}
