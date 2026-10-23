#include <globaldefs.h>

struct Flags0202ecfc {
    char pad0[0x168];
    unsigned int field168;
};

// USA: func_0202ecfc
extern "C" ARM void func_0202ecfc(struct Flags0202ecfc* p) {
    p->field168 &= ~0x1;
}
