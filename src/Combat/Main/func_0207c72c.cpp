#include <globaldefs.h>

extern "C" void* func_0207c60c(void* arg0, unsigned int arg1);
extern "C" signed short func_0207c620(unsigned char* arg0, unsigned int arg1);

// USA: func_0207c72c
extern "C" ARM short func_0207c72c(void* arg0, unsigned int arg1, short arg2) {
    signed char* var0 = (signed char*)func_0207c60c(arg0, arg1);
    if (var0 == NULL) return 0;
    short var1 = 0;
    short var2 = func_0207c620((unsigned char*)arg0, arg1);
    unsigned int var3;
    for (var3 = 0; var3 < var2; var3++) {
        if (*var0 > 0) {
            if (arg2 == var1) return *var0;
            var1++;
        }
        var0++;
    }
    return 0;
}
