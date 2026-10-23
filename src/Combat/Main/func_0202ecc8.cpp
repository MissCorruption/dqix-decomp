#include <globaldefs.h>

struct Block0202ecc8 {
    unsigned int v[12];
};

struct Dst0202ecc8 {
    char pad[0xf0];
    struct Block0202ecc8 block;
};

// USA: func_0202ecc8
extern "C" ARM void func_0202ecc8(struct Dst0202ecc8* dst, struct Block0202ecc8* src) {
    dst->block = *src;
}
