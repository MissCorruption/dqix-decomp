#include <globaldefs.h>

struct Flags020340b4 {
    char pad[0xc2];
    unsigned char flags;
};

// USA: func_020340b4
extern "C" ARM void func_020340b4(struct Flags020340b4* p) {
    p->flags |= 0x80;
}
