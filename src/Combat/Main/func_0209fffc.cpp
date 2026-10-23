#include <globaldefs.h>

struct S_9fffc {
    char pad[0x8];
    unsigned int val : 16;
    unsigned int hi : 16;
};

// USA: func_0209fffc
extern "C" ARM void func_0209fffc(struct S_9fffc* p, unsigned int amount) {
    unsigned int v = p->val + amount;
    if (v > 0xffff) {
        v = 0xffff;
    }
    p->val = v;
}
