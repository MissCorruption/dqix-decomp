#include <globaldefs.h>

struct S02055080;
extern "C" void* func_02055080(struct S02055080* p);

struct GetSubField0x14Data {
    char pad[0x14];
    void* field14;
};

// USA: func_02055108
extern "C" ARM void* func_02055108(struct S02055080* p) {
    struct GetSubField0x14Data* r = (struct GetSubField0x14Data*)func_02055080(p);
    return r == NULL ? NULL : r->field14;
}
