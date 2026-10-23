#include <globaldefs.h>

struct ScaledPair020dfbc0 {
    unsigned short a;
    unsigned short b;
};

// USA: func_020dfbc0
extern "C" ARM int func_020dfbc0(struct ScaledPair020dfbc0* s) {
    return (int)((char*)(s->a << 3) + (s->b << 3));
}
