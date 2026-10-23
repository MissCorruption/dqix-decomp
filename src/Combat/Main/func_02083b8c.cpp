#include <globaldefs.h>

extern "C" void func_02083b60(unsigned char* arg0, int arg1);

// USA: func_02083b8c
extern "C" ARM void func_02083b8c(unsigned char* arg0, unsigned char* arg1, unsigned int arg2) {
    unsigned int var0;
    for (var0 = 0; var0 < arg2; var0++) {
        func_02083b60(arg0, arg1[var0]);
    }
}
