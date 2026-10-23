#include <globaldefs.h>

struct StructAA8;
extern "C" int func_02072aa8(struct StructAA8* obj, int ptr, int value);

struct Source020e03f0 {
    unsigned int lowBits : 12;
    unsigned int highBits : 20;
    int field4;
};

// USA: func_020e03f0
extern "C" ARM int func_020e03f0(struct Source020e03f0* self, struct StructAA8* obj) {
    if (obj == NULL) return 0;
    func_02072aa8(obj, self->field4, self->lowBits);
    return 1;
}
