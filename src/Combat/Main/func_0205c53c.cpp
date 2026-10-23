#include <globaldefs.h>

struct Struct_0205bbcc;
extern "C" void func_0205bbcc(struct Struct_0205bbcc*);
struct Struct_0205bef8;
extern "C" void func_0205bef8(struct Struct_0205bef8*);

struct Struct_0205c53c {
    char pad0[0x94];
    unsigned char field94;
    unsigned char field95;
};

// USA: func_0205c53c
extern "C" ARM void func_0205c53c(struct Struct_0205c53c* s) {
    func_0205bbcc((struct Struct_0205bbcc*)((char*)s + 0x4));
    func_0205bef8((struct Struct_0205bef8*)((char*)s + 0x54));
    s->field94 = 0;
    s->field95 = 0;
}
