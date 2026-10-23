#include <globaldefs.h>

struct ByteField0x2c5_020a2cbc {
    char pad[0x2c5];
    unsigned char field;
};

// USA: func_020a2cbc
extern "C" ARM void func_020a2cbc(ByteField0x2c5_020a2cbc* obj, int value) {
    obj->field = value;
}
