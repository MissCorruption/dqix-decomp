#include <globaldefs.h>

extern "C" void func_02059cc8(unsigned char* arg0);

// USA: func_020d7334
extern "C" ARM void func_020d7334(unsigned char* arg0, int arg1) {
    int var0;
    unsigned int var1;
    if (arg1 >= 0xc0) arg1 -= 0xbc;
    var0 = arg1 * 0xd8;
    func_02059cc8(arg0 + var0);
    *(int*)(arg0 + 0xd4 + var0) = 0;
    var1 = ~(1 << arg1);
    *(unsigned short*)(arg0 + 0xa00 + 0x24) &= var1;
    *(unsigned short*)(arg0 + 0xa00 + 0x26) &= var1;
}
