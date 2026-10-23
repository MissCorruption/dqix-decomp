#include <globaldefs.h>

struct HalfwordTriple0202e98c;
extern "C" void func_0202e98c(struct HalfwordTriple0202e98c* p);

struct TargetHalfwords0202e95c {
    char pad[0x212];
    unsigned short field212;
    unsigned short field214;
    unsigned short field216;
};

// USA: func_0202e95c
extern "C" ARM void func_0202e95c(TargetHalfwords0202e95c* obj, short a, unsigned short b) {
    if (b != 0) {
        obj->field214 = a;
        obj->field216 = b;
        return;
    }
    func_0202e98c((struct HalfwordTriple0202e98c*)obj);
    obj->field212 = a;
}
