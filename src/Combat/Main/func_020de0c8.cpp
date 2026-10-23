#include <globaldefs.h>

struct Fields020dde64;
extern "C" ARM void func_020dde64(struct Fields020dde64* obj);

struct Struct020de0c8 {
    unsigned char pad[0x18];
    int field18;
};

// USA: func_020de0c8
extern "C" ARM void func_020de0c8(struct Struct020de0c8* obj) {
    obj->field18 -= 0x333;
    if (obj->field18 > 0) return;
    func_020dde64((struct Fields020dde64*)obj);
}
