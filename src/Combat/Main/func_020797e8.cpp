#include <globaldefs.h>

struct S020797e8 {
    int pad0;
    unsigned int f : 12;
};

// USA: func_020797e8
extern "C" ARM int func_020797e8(struct S020797e8* p) {
    return p->f;
}
