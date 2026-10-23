#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055090(struct S02055080* obj);

// USA: func_02055168
extern "C" ARM int func_02055168(struct S02055080* obj) {
    void* x = func_02055090(obj);
    if (x == NULL) return 0;
    return *(int*)x;
}
