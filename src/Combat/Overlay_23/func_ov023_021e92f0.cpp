#include <globaldefs.h>

extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_020ac494(void* arg0);

// USA: func_ov023_021e92f0
extern "C" ARM int func_ov023_021e92f0(void* arg0) {
    unsigned char var0[0xb0];
    func_020ac4c0(var0);
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = var1 / 32;
    int var3 = var1 % 32;
    unsigned int* var4 = (unsigned int*)(var0 + 0x4c);
    var4[var2] = var4[var2] | (1 << var3);
    func_020ac494(var0);
    return 1;
}
