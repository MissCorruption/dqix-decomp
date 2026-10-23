#include <globaldefs.h>

struct Field4Low12_02097420 {
    unsigned int pad0;
    unsigned int value : 12;
};

// USA: func_02097420
extern "C" ARM int func_02097420(struct Field4Low12_02097420* obj) {
    return obj->value;
}
