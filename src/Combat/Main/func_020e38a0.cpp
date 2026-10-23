#include <globaldefs.h>

struct Entry020e3840 {
    int f0;
    unsigned char f4, f5, f6;
};
extern "C" void func_020e3840(struct Entry020e3840* s);

// USA: func_020e38a0
extern "C" ARM struct Entry020e3840* func_020e38a0(struct Entry020e3840 *p) {
    int i;
    for (i = 0; i < 4; ) {
        if (p->f4 == 0) {
            func_020e3840(p);
            return p;
        }
        i++;
        p++;
    }
    return NULL;
}
