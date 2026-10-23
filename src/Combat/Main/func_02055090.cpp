#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

// USA: func_02055090
extern "C" ARM void* func_02055090(struct S02055080* obj) {
    void* x = func_02055080(obj);
    if (x == NULL) return NULL;
    return *(void**)x;
}
