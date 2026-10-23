#include <globaldefs.h>

struct Entry020e3840 {
    int f0;
    unsigned char f4, f5, f6;
};
extern "C" void func_020e3840(struct Entry020e3840* s);

// USA: func_020e3814
extern "C" ARM void func_020e3814(struct Entry020e3840 *p) {
    int i;
    for (i = 0; i < 4; ) {
        func_020e3840(p);
        i++;
        p++;
    }
}
