#include <globaldefs.h>

extern "C" int func_020ac460(void* arg0);

// USA: func_ov023_021ed6cc
extern "C" ARM bool func_ov023_021ed6cc(int arg0) {
    unsigned int var0[15];
    func_020ac460(var0);
    int var1 = arg0 / 32;
    int var2 = arg0 % 32;
    int var3 = 0;
    if (var0[var1] & (1 << var2)) var3 = 1;
    return var3 != 0;
}
