#include <globaldefs.h>

struct Flags02033fdc {
    char pad[0xe0];
    unsigned char flags;
};

// USA: func_02033fdc
extern "C" ARM void func_02033fdc(struct Flags02033fdc* p) {
    p->flags &= ~0x4;
}
