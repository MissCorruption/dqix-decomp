#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0209f24c(void*, int, int);
extern "C" void* func_0209dccc();

// USA: func_0209d510
extern "C" ARM int func_0209d510(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 8);
    func_0209f24c(var0, var1, var2);
    return 1;
}
