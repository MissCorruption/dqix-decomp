#include <globaldefs.h>

struct Obj020dfe88;
extern "C" int func_020dfe88(struct Obj020dfe88*);

struct Struct020dfc40 {
    unsigned char pad[0xc];
    short field_c;
    int field_10;
};

extern "C" void func_020dfc40(struct Struct020dfc40* p);

// USA: func_020dfc6c
extern "C" ARM void func_020dfc6c(struct Struct020dfc40* p) {
    func_020dfe88((struct Obj020dfe88*)p);
    func_020dfc40(p);
}
