#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

struct GetSubField0xCData {
    char pad[0xc];
    void* fieldC;
};

// USA: func_020550d8
extern "C" ARM void* func_020550d8(struct S02055080* p) {
    struct GetSubField0xCData* r = (struct GetSubField0xCData*)func_02055080(p);
    return r == NULL ? NULL : r->fieldC;
}
