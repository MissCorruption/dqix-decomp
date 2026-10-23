// USA: func_ov003_02167548
#include <globaldefs.h>

struct Obj0207fcb8;
extern "C" void func_0207fcb8(Obj0207fcb8* obj);
struct Obj0207fd00;
extern "C" void func_0207fd00(Obj0207fd00* obj);
struct Cont0207fd44;
extern "C" void func_0207fd44(Cont0207fd44* obj);

struct Obj02167548 {
    char pad0[0x10];
    void* field10;
#if defined(jpn)
    char pad14[0x44 - 0x14];
#else
    char pad14[0x74 - 0x14];
#endif
    unsigned char flag74;
};

extern "C" ARM void func_ov003_02167548(Obj02167548* obj) {
    if (obj->flag74 && obj->field10) {
        func_0207fcb8((Obj0207fcb8*)obj->field10);
        func_0207fd00((Obj0207fd00*)obj->field10);
        func_0207fd44((Cont0207fd44*)obj->field10);
    }
}
