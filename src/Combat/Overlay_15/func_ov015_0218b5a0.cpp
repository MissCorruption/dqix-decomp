#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern int data_ov015_02194560;
struct Struct_ov015_0218b5a0;
extern "C" unsigned int func_ov015_0218b978(Struct_ov015_0218b5a0*, int);
extern "C" unsigned int _ZNK6Script9Parameter5ToIntEv(unsigned int, unsigned int);

// USA: func_ov015_0218b5a0
extern "C" ARM unsigned int func_ov015_0218b5a0(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    unsigned int var0 = 0;
    arg1 = (unsigned int)&data_ov015_02194560;
    var0 = *(unsigned int*)((char*)arg1 + 0x0);
    arg0 = (unsigned int)_ZNK6Script9Parameter5ToIntEv(arg0, arg1);
    arg1 = arg0;
    arg0 = var0;
    arg0 = (unsigned int)func_ov015_0218b978((Struct_ov015_0218b5a0*)arg0, arg1);
    arg0 = 0x1;
    return arg0;
}
