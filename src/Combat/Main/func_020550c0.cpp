#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

struct GetSubField0x8Data {
    char pad[0x8];
    void* field8;
};

// USA: func_020550c0
extern "C" ARM void* func_020550c0(struct S02055080* p) {
    struct GetSubField0x8Data* r = (struct GetSubField0x8Data*)func_02055080(p);
    return r == NULL ? NULL : r->field8;
}
