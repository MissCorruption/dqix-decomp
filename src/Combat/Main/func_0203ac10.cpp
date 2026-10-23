#include <globaldefs.h>

extern "C" void* func_020bd42c(void*);
extern "C" void* func_020bc018(void* arg0, int arg1);

// USA: func_0203ac10
extern "C" ARM void func_0203ac10(void* arg0, void* arg1, int arg2) {
    char* var0 = (char*)arg0;
    if (*(void**)var0 == NULL) return;
    func_020bd42c(var0 + 0x4);
    func_020bc018(arg1, arg2);
}
