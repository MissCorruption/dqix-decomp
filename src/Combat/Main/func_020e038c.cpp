#include <globaldefs.h>

struct Node020dfbdc {
    int field0;
    int field4;
};

extern "C" int func_020dfbdc(void* a, struct Node020dfbdc* node);
extern "C" int func_020e0280(void* a, void* b, void* out, void* fn);

// USA: func_020e038c
extern "C" ARM int func_020e038c(void* a, void* b, int c) {
    int local;
    if (b == NULL || c == 0) return 0;
    func_020e0280(a, b, &local, (void*)func_020dfbdc);
    return 1;
}
