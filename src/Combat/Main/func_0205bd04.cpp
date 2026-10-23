#include <globaldefs.h>

struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84*);

struct Struct_0205bd04 {
    char pad[0x4e];
    unsigned char field4e;
};

// USA: func_0205bd04
extern "C" ARM int func_0205bd04(struct Struct_0205bd04* s) {
    if (s->field4e == 0) return -1;
    return func_0205bb84((struct Struct_0205bb84*)s);
}
