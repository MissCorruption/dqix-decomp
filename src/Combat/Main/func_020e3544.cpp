#include <globaldefs.h>

struct Bytes020e303c;
extern "C" void func_020e303c(struct Bytes020e303c* s);

struct Entry020e3544 {
    unsigned char id;
    unsigned char pad[3];
};

// USA: func_020e3544
extern "C" ARM void func_020e3544(struct Entry020e3544 *p, int id) {
    int i;
    for (i = 0; i < 8; ) {
        if (p->id == id) {
            func_020e303c((struct Bytes020e303c*)p);
        }
        i++;
        p++;
    }
}
