#include <globaldefs.h>

struct S0208aa18 {
    char _pad[0xc];
    int x;
    int y;
    int z;
};

// USA: func_0208aa18
extern "C" ARM void func_0208aa18(struct S0208aa18 *s, int x, int y, int z) {
    s->x = x;
    s->y = y;
    s->z = z;
}
