#include <globaldefs.h>

extern "C" void* func_0209dccc();
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0209e9f4(void*, int, int);

// USA: func_0209cf88
extern "C" ARM int func_0209cf88(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 8);
    func_0209e9f4(var0, var1, var2);
    return 1;
}
