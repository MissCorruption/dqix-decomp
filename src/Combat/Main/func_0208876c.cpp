#include <globaldefs.h>

struct Obj02088818;
extern "C" void func_02088818(struct Obj02088818* obj, unsigned short mode);

struct StateWrapObj0208876c {
    unsigned char pad00[0x18];
    unsigned int flags18;
};

// USA: func_0208876c
extern "C" ARM void func_0208876c(struct StateWrapObj0208876c* obj) {
    obj->flags18 |= 0x80;
    func_02088818((struct Obj02088818*)obj, 3);
}
