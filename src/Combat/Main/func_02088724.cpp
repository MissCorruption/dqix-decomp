#include <globaldefs.h>

struct Obj02088818;
extern "C" void func_02088818(struct Obj02088818* obj, unsigned short mode);

struct StateWrapObj02088724 {
    unsigned char pad00[0x18];
    unsigned int flags18;
};

// USA: func_02088724
extern "C" ARM void func_02088724(struct StateWrapObj02088724* obj) {
    obj->flags18 |= 0x80;
    func_02088818((struct Obj02088818*)obj, 2);
}
