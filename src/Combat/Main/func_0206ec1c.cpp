#include <globaldefs.h>

extern "C" void func_0209953c(unsigned short);

// USA: func_0206ec1c
extern "C" ARM int func_0206ec1c(int arg0, int arg1, unsigned char* arg2, unsigned int arg3) {
    int var0 = arg1 % 2;
    int var1 = arg1 / 2;
    if (arg3 <= var1) {
        func_0209953c(0x3e7);
        return 0;
    }
    {
        int var2 = arg2[var1];
        if (var0 != 0) {
            return var2 & 0xf;
        }
        return var2 >> 4;
    }
}
