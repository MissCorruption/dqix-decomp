#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0209ef2c(void*, int, int, int);
extern "C" void* func_0209dccc();

// USA: func_0209d0dc
extern "C" ARM int func_0209d0dc(char* arg0, int arg1) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    arg0 += 8;
    for (int var2 = 1; var2 < arg1; var2 += 2) {
        int var3 = func_ov017_021d60f4(arg0);
        char* var4 = arg0 + 8;
        arg0 += 0x10;
        int var5 = func_ov017_021d60f4(var4);
        func_0209ef2c(var0, var1, var3, var5);
    }
    return 1;
}
