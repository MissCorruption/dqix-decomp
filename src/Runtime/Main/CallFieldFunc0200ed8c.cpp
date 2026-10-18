#include <globaldefs.h>

struct S0200ed8c {
    void* field0;
    int pad4;
    void (*func)(void*, int);
};

// KEEP-NAME
// USA: func_0200ed8c
extern "C" ARM void __end__catch(S0200ed8c* obj) {
    void* f0 = obj->field0;
    if (f0 != 0 && obj->func != 0) {
        obj->func(f0, -1);
    }
}
