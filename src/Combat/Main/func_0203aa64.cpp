#include <globaldefs.h>

struct Obj020bdac0;
extern "C" int func_020bdac0(struct Obj020bdac0*);

// USA: func_0203aa64
extern "C" ARM int func_0203aa64(void* obj) {
    void* p = *(void**)obj;
    if (p == NULL) return 0;
    return func_020bdac0((struct Obj020bdac0*)p);
}
