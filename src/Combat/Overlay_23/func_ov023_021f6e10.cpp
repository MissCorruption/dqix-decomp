#include <globaldefs.h>

// USA: func_ov023_021f6e10
extern "C" ARM void func_ov023_021f6e10(void* arg0, int arg1, unsigned int arg2) {
    if (arg2 >= 0x10) return;
    unsigned short* var0 = (unsigned short*)((char*)arg0 + 0x2c);
    var0[arg1] |= (1 << arg2);
}
