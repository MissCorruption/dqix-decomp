#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);
extern "C" void* func_0203cf4c(void);
extern "C" int func_0203dfdc(void* arg0, int arg1);

// USA: func_ov001_0215fa10
extern "C" ARM int func_ov001_0215fa10(char* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_0203cf4c();
    int var2 = func_0203dfdc(var1, var0);
    func_ov017_021d6134(arg0 + 8, var2);
    return 1;
}
