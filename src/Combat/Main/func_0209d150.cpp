#include <globaldefs.h>

extern "C" void func_0209f030(void*, int, int, int);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0209dccc();

// USA: func_0209d150
extern "C" ARM int func_0209d150(char* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4(arg0 + 8);
    int var3 = func_ov017_021d60f4(arg0 + 0x10);
    func_0209f030(var0, var1, var2, var3);
    return 1;
}
