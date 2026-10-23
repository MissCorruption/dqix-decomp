#include <globaldefs.h>

struct Field0Low12_02097408 {
    unsigned int value : 12;
};

// USA: func_02097408
extern "C" ARM int func_02097408(struct Field0Low12_02097408* obj) {
    return obj->value * 0x20;
}
