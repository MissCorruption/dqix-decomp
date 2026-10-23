#include <globaldefs.h>

extern "C" void func_0200d894(void* p);

// USA: func_0200d91c
extern "C" ARM int func_0200d91c(void* arg0, char* arg1, unsigned int* arg2) {
    unsigned int var0 = 0;
    unsigned int var1 = *arg2;
    if (var0 < var1) {
        do {
            func_0200d894(arg1 + var0);
            var0++;
        } while (var0 < var1);
    }
    return 0;
}
