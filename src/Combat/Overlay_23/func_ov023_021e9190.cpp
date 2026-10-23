#include <globaldefs.h>

extern "C" int func_020ac460(void* arg0);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e9190
extern "C" ARM int func_ov023_021e9190(void* arg0) {
    unsigned int var0[15];
    func_020ac460(var0);
    int var1 = 0;
    int var2 = func_ov017_021d60f4(arg0);
    int var3 = var2 / 32;
    int var4 = var2 % 32;
    if (var0[var3] & (1 << var4)) var1 = 1;
    if (var1) {
        func_ov017_021d6134((char*)arg0 + 8, 1);
    } else {
        func_ov017_021d6134((char*)arg0 + 8, 0);
    }
    return 1;
}
