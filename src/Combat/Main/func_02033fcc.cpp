#include <globaldefs.h>

struct Flags02033fcc {
    char pad[0xe0];
    unsigned char flags;
};

// USA: func_02033fcc
extern "C" ARM void func_02033fcc(struct Flags02033fcc* p) {
    p->flags |= 0x4;
}
