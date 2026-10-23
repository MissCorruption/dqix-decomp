#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

struct GetSubField0x18Data {
    char pad[0x18];
    void* field18;
};

// USA: func_02055120
extern "C" ARM void* func_02055120(struct S02055080* p) {
    struct GetSubField0x18Data* r = (struct GetSubField0x18Data*)func_02055080(p);
    return r == NULL ? NULL : r->field18;
}
