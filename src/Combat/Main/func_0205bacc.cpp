#include <globaldefs.h>

struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84* s);
extern "C" void func_0205bb04(void* s, int n);

struct Node0205bacc {
    int field0;
};

// USA: func_0205bacc
extern "C" ARM void func_0205bacc(struct Node0205bacc* s, int val) {
    if (val < 0) return;
    s->field0 = val;
    if (func_0205bb84((struct Struct_0205bb84*)s) < val) return;
    func_0205bb04(s, val - 1);
}
