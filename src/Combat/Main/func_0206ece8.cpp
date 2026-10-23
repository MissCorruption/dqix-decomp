#include <globaldefs.h>

extern "C" void func_0209953c(unsigned short);

// USA: func_0206ece8
extern "C" ARM void func_0206ece8(int arg0, int arg1, unsigned char* arg2, unsigned int arg3) {
    int var0 = arg1 % 2;
    int var1 = arg1 / 2;
    if (arg3 <= var1) {
        func_0209953c(0x3e7);
        return;
    }
    {
        unsigned char var2 = arg2[var1];
        if (var0 != 0) {
            arg2[var1] = var2 & 0xf0;
        } else {
            arg2[var1] = var2 & 0xf;
        }
    }
}
