#include <globaldefs.h>

extern "C" ARM void func_ov031_0223566c(int arg0, void *arg1);
extern "C" ARM int func_ov031_0223d524(void *arg0);
extern "C" ARM int func_ov031_0223d49c(void *arg0);

// USA: func_ov031_02235594
extern "C" ARM int func_ov031_02235594() {
    int var0[2];
    func_ov031_0223566c(1, var0);
    if (func_ov031_0223d524(var0) != 0)
        return 1;
    int var1 = 2;
    do {
        func_ov031_0223566c(var1, var0);
        if (func_ov031_0223d524(var0) != 0)
            return var1;
        var1++;
    } while (var1 <= 3);
    func_ov031_0223566c(4, var0);
    if (func_ov031_0223d49c(var0) != 0)
        return 4;
    return 0;
}
