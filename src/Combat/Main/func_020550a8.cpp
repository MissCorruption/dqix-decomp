#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

// USA: func_020550a8
extern "C" ARM void* func_020550a8(struct S02055080* obj) {
    void* x = func_02055080(obj);
    if (x == NULL) return NULL;
    return *(void**)((char*)x + 4);
}
