#include <globaldefs.h>

extern "C" void* func_020bd42c(void*);
extern "C" int func_020bdcc4(void*, int, int);

// USA: func_0203ab6c
extern "C" ARM int func_0203ab6c(void* obj, void* arg1) {
    char* p = (char*)obj;
    if (*(void**)p == NULL) return 0;
    func_020bd42c(p + 0x4);
    func_020bdcc4(arg1, 6, *(int*)p);
    return 1;
}
