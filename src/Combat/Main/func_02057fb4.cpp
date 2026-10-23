#include <globaldefs.h>

extern "C" void* func_02057f8c(void* arg0, int arg1);
extern "C" void func_02057fd8(void* arg0, void* arg1, void* arg2);

// USA: func_02057fb4
extern "C" ARM void func_02057fb4(void* arg0, int arg1, void* arg2) {
    void* var0 = func_02057f8c(arg0, arg1);
    func_02057fd8(arg0, var0, arg2);
}
