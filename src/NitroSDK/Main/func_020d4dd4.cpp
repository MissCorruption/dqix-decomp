#include <globaldefs.h>

extern "C" void func_020cf020(void);
extern "C" int func_020cf1a8(int arg0);

extern unsigned int data_020f2304;

// USA: func_020d4dd4
extern "C" ARM unsigned short func_020d4dd4(void) {
    unsigned int var0[3];
    if (data_020f2304 == 0x10000) {
        func_020cf020();
        if (func_020cf1a8((int)var0) == 0) {
            data_020f2304 = (unsigned short)(var0[2] + (var0[1] << 8));
        }
    }
    return data_020f2304 = (unsigned short)(data_020f2304 + 1);
}
