#include <globaldefs.h>

struct S020d2eb0 {
    char pad[0x38];
    int field0x38;
};

// USA: func_020d2eb0
extern "C" ARM int func_020d2eb0(struct S020d2eb0* p) {
    return p->field0x38;
}
