#include <globaldefs.h>

extern "C" int func_020dfbfc(void* a, int b, int c);

struct Node020dfbdc {
    int field0;
    int field4;
};

// USA: func_020dfbdc
extern "C" ARM int func_020dfbdc(void* a, struct Node020dfbdc* node) {
    node->field4 = func_020dfbfc(a, node->field4, 0);
    return 1;
}
