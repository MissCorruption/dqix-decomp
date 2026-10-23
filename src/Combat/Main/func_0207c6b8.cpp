#include <globaldefs.h>

extern "C" void* func_0207c5f8(unsigned char* arg0, unsigned int arg1);
extern "C" signed short func_0207c620(unsigned char* arg0, unsigned int arg1);

// USA: func_0207c6b8
extern "C" ARM int func_0207c6b8(unsigned char* arg0, unsigned int arg1, int arg2) {
    signed short* var0 = (signed short*)func_0207c5f8(arg0, arg1);
    if (var0 == NULL) {
        return -1;
    }
    signed short var1;
    var1 = 0;
    int var2 = func_0207c620(arg0, arg1);
    for (unsigned int var3 = 0; var3 < (unsigned int)var2; var3++) {
        signed short var4 = *var0;
        if (var4 > 0) {
            if (arg2 == var1) {
                return var4;
            }
            var1++;
        }
        var0++;
    }
    return -1;
}
