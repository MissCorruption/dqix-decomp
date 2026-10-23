#include <globaldefs.h>

extern signed char data_020e7039;

extern "C" void func_0205afdc(int arg0, void* arg1, int arg2);

// USA: func_02026ebc
extern "C" ARM void func_02026ebc(void* arg0) {
    unsigned char var0 = 0;
    signed char var1;
    while ((var1 = (&data_020e7039)[var0]) >= 0) {
        func_0205afdc((int)((char*)arg0 + 0x94), (char*)arg0 + 0xe8 + var1 * 40, 0);
        var0 = (unsigned char)(var0 + 1);
    }
}
