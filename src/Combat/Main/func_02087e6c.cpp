#include <globaldefs.h>

extern "C" void func_02087efc(unsigned char* p);
extern "C" void func_02088c38(unsigned char* p);
extern "C" void func_02088c9c(unsigned char* p);

struct Obj02087e6c {
    char pad0[0x14];
    int field14;
    char pad18[0x58 - 0x18];
    int field58_0 : 21;
    int field58 : 3;
    char pad5c[0x75 - 0x5c];
    unsigned char byte75;
    char pad76[0x98 - 0x76];
    unsigned char byte98;
};

// USA: func_02087e6c
extern "C" ARM int func_02087e6c(struct Obj02087e6c* obj, int delta) {
    int val = delta + obj->field58;

    if (val > 2) {
        val = 2;
    }
    if (val < -2) {
        val = -2;
    }

    if (val == 0) {
        func_02087efc((unsigned char*)obj);
        return 0;
    }

    obj->field58 = val;
    obj->byte75 = 5;
    obj->byte98 = 0;
    obj->field14 |= 0x20000;
    func_02088c38((unsigned char*)obj);
    func_02088c9c((unsigned char*)obj);
    return obj->field58;
}
