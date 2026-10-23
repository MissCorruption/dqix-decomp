#include <globaldefs.h>

struct Struct_020546c8;
extern "C" void* func_02055080(struct Struct_020546c8* arg0);

// USA: func_02055150
extern "C" ARM void* func_02055150(struct Struct_020546c8* arg0) {
    void* var0 = func_02055080(arg0);
    if (var0 == NULL) return NULL;
    return *(void**)((char*)var0 + 0x20);
}
