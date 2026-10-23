#include <globaldefs.h>

struct ByteFlags02033f2c {
    char pad[0xe0];
    unsigned char flags_e0;
};

// USA: func_02033f2c
extern "C" ARM void func_02033f2c(struct ByteFlags02033f2c* p) {
    p->flags_e0 &= ~0x40;
    p->flags_e0 &= ~0x80;
}
