#include <globaldefs.h>

struct S02079ce8 {
    unsigned int f : 12;
};

// USA: func_02079ce8
extern "C" ARM int func_02079ce8(struct S02079ce8* p) {
    return p->f * 8;
}
