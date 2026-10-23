#include <globaldefs.h>

struct HandleField8_02097238 {
    int pad0;
    int pad4;
    int value;
};

// USA: func_02097238
extern "C" ARM int func_02097238(struct HandleField8_02097238* obj) {
    return obj->value;
}
