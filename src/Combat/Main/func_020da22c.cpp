#include <globaldefs.h>

struct HandleStruct {
    int field0;
    unsigned char field4;
    int field8;
};

// USA: func_020da22c
extern "C" ARM void func_020da22c(struct HandleStruct* s) {
    s->field8 = -1;
    s->field0 = -1;
    s->field4 = 0;
}
