#include <globaldefs.h>

struct S020556cc {
    char pad[0x28];
    int f28;
    int f2c;
    int f30;
};

// USA: func_020556cc
extern "C" ARM void func_020556cc(struct S020556cc* p, int a, int b, int c) {
    p->f30 = a;
    p->f2c = b;
    p->f28 = c;
}
