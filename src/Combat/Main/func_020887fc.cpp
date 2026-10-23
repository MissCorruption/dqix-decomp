#include <globaldefs.h>

struct Obj02088818;
extern "C" void func_02088818(struct Obj02088818* obj, unsigned short mode);

// USA: func_020887fc
extern "C" ARM void func_020887fc(unsigned char* obj) {
    *(int*)(obj + 0x18) |= 0x80;
    func_02088818((struct Obj02088818*)obj, 5);
}
