#include <globaldefs.h>

struct B88e4Obj {
    char unk[0x19d6];
    unsigned char field;
};

// USA: func_020688e4
extern "C" ARM int func_020688e4(int unused, struct B88e4Obj* obj) {
    return obj->field == 0;
}
