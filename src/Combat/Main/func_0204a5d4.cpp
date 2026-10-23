#include <globaldefs.h>

struct S0204a5d4 {
    char pad[0x260];
    int field0x260;
};

// USA: func_0204a5d4
extern "C" ARM void func_0204a5d4(struct S0204a5d4* p, int v) {
    p->field0x260 = v;
}
