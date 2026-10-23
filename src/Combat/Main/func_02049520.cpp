#include <globaldefs.h>

struct StructFields02049550;
extern "C" void func_02049550(struct StructFields02049550* p);

struct Sub02049520 {
    unsigned char pad[0x20];
    unsigned int flags;
};
struct Obj02049520 {
    unsigned char pad[0x13c];
    struct Sub02049520* sub;
};

// USA: func_02049520
extern "C" ARM void func_02049520(struct Obj02049520* obj) {
    struct Sub02049520* sub = obj->sub;
    if (sub == NULL) return;
    func_02049550((struct StructFields02049550*)((unsigned char*)sub + 0x4e));
    obj->sub->flags &= ~0x4;
}
