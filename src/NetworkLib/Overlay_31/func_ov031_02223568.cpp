#include <globaldefs.h>

extern "C" void func_ov031_022274e4(int *arg0, int *arg1);
extern "C" int func_ov031_02222ce4(void *arg0);

// USA: func_ov031_02223568
extern "C" ARM int func_ov031_02223568(void *arg0) {
    int var0;
    func_ov031_022274e4(0, &var0);
    if (var0 != 1) return var0;
    return func_ov031_02222ce4(arg0);
}
