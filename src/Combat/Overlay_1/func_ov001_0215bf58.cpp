#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void* func_ov001_0215ab20(int arg0);
extern "C" int func_ov001_0215a094(void* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_0215bf58
extern "C" ARM int func_ov001_0215bf58(void* arg0) {
    void* var0 = func_ov001_0215ab20(func_ov017_021d60f4(arg0));
    if (var0 == NULL) return 0;
    int var1 = func_ov001_0215a094(var0);
    func_ov017_021d6134((char*)arg0 + 8, var1 == 0);
    return 1;
}
