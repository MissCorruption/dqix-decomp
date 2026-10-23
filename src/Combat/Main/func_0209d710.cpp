#include <globaldefs.h>

extern "C" void func_0209fb90(void*, int);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0209dccc();

// USA: func_0209d710
extern "C" ARM int func_0209d710(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    func_0209fb90(var0, func_ov017_021d60f4(arg0));
    return 1;
}
