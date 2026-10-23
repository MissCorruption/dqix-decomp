#include <globaldefs.h>

// USA: func_0205e7dc
extern "C" ARM void func_0205e7dc(unsigned char* arg0, int arg1) {
    unsigned char* var0 = arg0 + 0x1524;
    var0[(unsigned)arg1 >> 3] |= 1 << (arg1 % 8);
}
