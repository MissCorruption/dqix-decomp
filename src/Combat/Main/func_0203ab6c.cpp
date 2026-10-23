#include <globaldefs.h>

extern "C" void* func_020bd42c(void*);
extern "C" int func_020bdcc4(void*, int, int);

// USA: func_0203ab6c
extern "C" ARM int func_0203ab6c(void* arg0, void* arg1) {
    char* var0 = (char*)arg0;
    if (*(void**)var0 == NULL) return 0;
    func_020bd42c(var0 + 0x4);
    func_020bdcc4(arg1, 6, *(int*)var0);
    return 1;
}
