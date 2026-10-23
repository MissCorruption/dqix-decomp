#include <globaldefs.h>

extern "C" THUMB int func_ov031_0221e27c(void* arg0);

// USA: func_ov031_0221e250
extern "C" THUMB void func_ov031_0221e250(void* arg0, unsigned char* arg1, unsigned char* arg2, unsigned int arg3) {
    unsigned int var0 = 0;
    if (arg3 != 0) {
        do {
            unsigned char var1 = (unsigned char)func_ov031_0221e27c(arg0);
            arg1[var0] = arg2[var0] ^ var1;
            var0++;
        } while (var0 < arg3);
    }
}
