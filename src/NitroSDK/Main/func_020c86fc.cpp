#include <globaldefs.h>

extern "C" int func_020c8534(int arg0);
extern "C" int func_020c8520(int arg0);
extern "C" void func_020c86e8(int arg0, int arg1);

// USA: func_020c86fc
extern "C" ARM int func_020c86fc(int arg0, int arg1, int arg2) {
    int var0 = func_020c8534(arg0);
    if (var0 == 0) return 0;
    int var1 = (var0 + arg2 - 1) & ~(arg2 - 1);
    int var2 = var1 + arg1;
    int var3 = (var2 + arg2 - 1) & ~(arg2 - 1);
    int var4 = func_020c8520(arg0);
    if ((unsigned int)var3 > (unsigned int)var4) return 0;
    func_020c86e8(arg0, var3);
    return var1;
}
