#include <globaldefs.h>

struct B88ccObj {
    char unk[0x19d5];
    unsigned char field;
};

// USA: func_020688cc
extern "C" ARM int func_020688cc(int unused, struct B88ccObj* obj) {
    return obj->field == 0;
}
