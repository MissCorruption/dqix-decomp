#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

struct GetSubField0x10Data {
    char pad[0x10];
    void* field10;
};

// USA: func_020550f0
extern "C" ARM void* func_020550f0(struct S02055080* p) {
    struct GetSubField0x10Data* r = (struct GetSubField0x10Data*)func_02055080(p);
    return r == NULL ? NULL : r->field10;
}
