#include <globaldefs.h>

struct IntField0x60_0209ff64 {
    char pad[0x60];
    int field;
};

// USA: func_0209ff64
extern "C" ARM void func_0209ff64(struct IntField0x60_0209ff64* obj, int value) {
    obj->field = value;
}
