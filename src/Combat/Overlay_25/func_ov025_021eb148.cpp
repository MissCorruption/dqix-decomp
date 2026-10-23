#include <globaldefs.h>

struct Obj021e8a20 {
    int a;
    short b;
    short c;
    unsigned char d;
    unsigned char e;
};

extern "C" void func_ov025_021e8a20(struct Obj021e8a20* obj);
extern "C" int func_ov025_021eb188(void* arg0, struct Obj021e8a20* obj);

// USA: func_ov025_021eb148
extern "C" ARM int func_ov025_021eb148(void* arg0, short b, int c, unsigned char d) {
    struct Obj021e8a20 local;
    func_ov025_021e8a20(&local);
    local.b = b;
    local.c = c;
    local.d = d;
    return func_ov025_021eb188(arg0, &local);
}
