#include <globaldefs.h>

struct Vec3s {
    short x;
    short y;
    short z;
};

// USA: func_0202861c
extern "C" ARM void func_0202861c(struct Vec3s* dst, struct Vec3s* src) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}
