#include <globaldefs.h>

extern "C" void* func_020bd42c(void*);
extern "C" void* func_020bc018(void* obj, int arg2);

// USA: func_0203ac10
extern "C" ARM void func_0203ac10(void* obj, void* a, int b) {
    char* p = (char*)obj;
    if (*(void**)p == NULL) return;
    func_020bd42c(p + 0x4);
    func_020bc018(a, b);
}
