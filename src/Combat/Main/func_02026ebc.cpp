#include <globaldefs.h>

extern signed char data_020e7039;

extern "C" void func_0205afdc(int a, void* b, int c);

// USA: func_02026ebc
extern "C" ARM void func_02026ebc(void* obj) {
    unsigned char i = 0;
    signed char v;
    while ((v = (&data_020e7039)[i]) >= 0) {
        func_0205afdc((int)((char*)obj + 0x94), (char*)obj + 0xe8 + v * 40, 0);
        i = (unsigned char)(i + 1);
    }
}
