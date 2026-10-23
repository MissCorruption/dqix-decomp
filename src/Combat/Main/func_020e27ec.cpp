#include <globaldefs.h>

struct Container0205a3d0;
struct Elem0205a3d0;
extern "C" struct Elem0205a3d0* func_0205a3d0(struct Container0205a3d0* c, int key);

// USA: func_020e27ec
extern "C" ARM void func_020e27ec(struct Container0205a3d0* c, int key, short a, short b) {
    struct Elem0205a3d0* e = func_0205a3d0(c, key);
    if (e != NULL) {
        *(short*)((char*)e + 0x4) = a;
        *(short*)((char*)e + 0x6) = b;
    }
}
