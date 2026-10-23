#include <globaldefs.h>

struct Pair020deb08 {
    unsigned short a;
    unsigned short pad2;
    unsigned short b;
};

// USA: func_020deb08
extern "C" ARM short func_020deb08(struct Pair020deb08* obj) {
    int a = obj->a;
    int b = obj->b;
    return a > b ? a : b;
}
