#include <globaldefs.h>

struct Flags020340c4 {
    char pad[0xc2];
    unsigned char flags;
};

// USA: func_020340c4
extern "C" ARM void func_020340c4(struct Flags020340c4* p) {
    p->flags &= ~0x80;
}
