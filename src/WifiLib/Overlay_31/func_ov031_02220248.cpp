#include <globaldefs.h>

// USA: func_ov031_02220248
extern "C" THUMB unsigned char* func_ov031_02220248(unsigned char** arg0, unsigned char* arg1, unsigned int* arg2, unsigned int* arg3) {
    unsigned char* var0 = *arg0;
    if (var0 >= arg1)
        return 0;

    unsigned short var1 = *(unsigned short*)(var0 + 0);
    *arg2 = (unsigned short)((unsigned char)(var1 >> 8) | ((var1 << 8) & 0xff00));

    unsigned short var2 = *(unsigned short*)(var0 + 2);
    unsigned int var3 = (unsigned short)((unsigned char)(var2 >> 8) | ((var2 << 8) & 0xff00));
    *arg3 = var3;

    unsigned char* var4 = var0 + 4;
    *arg0 = var4 + (((var3 + 11) & ~7) - 4);
    return var4;
}
