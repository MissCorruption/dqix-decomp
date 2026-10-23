#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" float func_ov017_021d6110(void*);
extern "C" void func_0209f634(void*, int, int);
extern "C" void* func_0209dccc();

// USA: func_0209d5dc
extern "C" ARM int func_0209d5dc(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    float var2 = func_ov017_021d6110((char*)arg0 + 8);
    func_0209f634(var0, var1, (int)var2);
    return 1;
}
