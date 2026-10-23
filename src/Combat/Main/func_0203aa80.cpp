#include <globaldefs.h>

extern "C" void func_020bdb0c(void* arg0, int arg1);

// USA: func_0203aa80
extern "C" ARM void func_0203aa80(void* arg0, int arg1) {
    void* var0 = *(void**)arg0;
    if (var0 == NULL) return;
    func_020bdb0c(var0, arg1);
}
