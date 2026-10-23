#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Obj020bc6fc;
extern "C" void func_020bc6fc(struct Obj020bc6fc*);

struct Tween020c0260;
extern "C" void func_020c0204(struct Tween020c0260*, int, int);

extern "C" void func_020bc870(SignedAllocatorHeader*, unsigned char);

struct Obj020bc548 {
    char pad0[0x2c];
    unsigned char field2c;
};

// USA: func_020bc548
extern "C" ARM void func_020bc548(struct Obj020bc548* obj, int flag) {
    if (obj == 0 || obj->field2c == 0) return;
    if (flag == 0) {
        func_020bc6fc((struct Obj020bc6fc*)obj);
        return;
    }
    func_020c0204((struct Tween020c0260*)((char*)obj + 0x1c), 0, flag);
    func_020bc870((SignedAllocatorHeader*)obj, 0);
    obj->field2c = 2;
}
