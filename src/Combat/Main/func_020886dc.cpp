#include <globaldefs.h>

struct Obj02088818;
extern "C" void func_02088818(struct Obj02088818* obj, unsigned short mode);

struct StateWrapObj020886dc {
    unsigned char pad00[0x18];
    unsigned int flags18;
};

// USA: func_020886dc
extern "C" ARM void func_020886dc(struct StateWrapObj020886dc* obj) {
    obj->flags18 |= 0x80;
    func_02088818((struct Obj02088818*)obj, 1);
}
