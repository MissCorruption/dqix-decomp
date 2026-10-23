#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov001_0215ab20(int arg0);
extern "C" void func_ov001_02159d9c(void* arg0);

// USA: func_ov001_0215bf34
extern "C" ARM int func_ov001_0215bf34(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_ov001_0215ab20(var0);
    if (var1 == NULL) return 0;
    func_ov001_02159d9c(var1);
    return 1;
}
