#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void* arg0);
extern "C" void func_02064b98(unsigned char* arg0, int arg1);

// USA: func_ov017_021cdccc
extern "C" ARM void func_ov017_021cdccc(void* arg0, int arg1, void* arg2) {
    unsigned char* var0 = (unsigned char*)func_0205ec34(arg0);
    int var1 = arg1 + 0xe;
    int var2 = 0xe;
    int var3 = 0;
    if ((unsigned int)var1 > 0xfd) {
        var2 = 0xfd - arg1;
        var3 = 1;
    } else if (var1 == 0xfd) {
        var3 = 1;
    }
    if (var2 < 0) return;

    void* var4 = memcpy(var0 + arg1, arg2, var2);
    if (!var3) return;

    func_02064b98((unsigned char*)func_0205ec34(var4), 0xc3b5);
}
