#include <globaldefs.h>

struct Reloc020b0278 { char pad[0xc]; unsigned int offset; };

// USA: func_020b0278
extern "C" ARM void func_020b0278(struct Reloc020b0278* p) {
    p->offset = p->offset + (unsigned int)p;
}
