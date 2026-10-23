#include <globaldefs.h>

extern "C" void func_020bdb0c(void* arg0, int arg1);

// USA: func_0203aa44
extern "C" ARM void func_0203aa44(void* arg0) {
    void* var0 = *(void**)arg0;
    if (var0 == NULL) return;
    func_020bdb0c(var0, *(int*)((char*)arg0 + 0xa0));
}
