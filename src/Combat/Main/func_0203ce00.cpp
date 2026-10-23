#include <globaldefs.h>

struct Struct_203ce00 {
    char pad[0x5c];
    unsigned int flags;
    int field60;
    int field64;
};

// USA: func_0203ce00
extern "C" ARM int func_0203ce00(struct Struct_203ce00* obj) {
    if (obj->flags & 0x2) {
        return obj->field64;
    }
    return obj->field60;
}
