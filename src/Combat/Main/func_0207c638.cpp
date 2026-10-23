#include <globaldefs.h>

extern "C" void* func_0207c60c(void* arg0, unsigned int arg1);
extern "C" signed short func_0207c620(unsigned char* arg0, unsigned int arg1);

// USA: func_0207c638
extern "C" ARM short func_0207c638(void* arg0, unsigned int arg1) {
    signed char* var0 = (signed char*)func_0207c60c(arg0, arg1);
    short var1 = func_0207c620((unsigned char*)arg0, arg1);
    short var2 = 0;
    short var3;
    for (var3 = 0; var3 < var1; var3++) {
        if (var0[var3] > 0) var2++;
    }
    return var2;
}
