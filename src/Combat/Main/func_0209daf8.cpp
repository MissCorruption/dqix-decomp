#include <globaldefs.h>

extern "C" void* func_0209dccc();
extern "C" int func_0209fdf8();
extern "C" int func_ov017_021d6134(void*, int);

// USA: func_0209daf8
extern "C" ARM int func_0209daf8(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_0209fdf8();
    func_ov017_021d6134(arg0, var1);
    return 1;
}
