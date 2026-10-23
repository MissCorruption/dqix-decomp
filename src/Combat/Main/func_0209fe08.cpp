#include <globaldefs.h>

struct IntField0x8c_0209fe08 {
    char pad[0x8c];
    int field;
};

// USA: func_0209fe08
extern "C" ARM void func_0209fe08(struct IntField0x8c_0209fe08* obj, int value) {
    obj->field = value;
}
