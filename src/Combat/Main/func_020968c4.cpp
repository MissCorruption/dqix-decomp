#include <globaldefs.h>

struct ShortField0x22e_020968c4 {
    char pad[0x22e];
    short field;
};

// USA: func_020968c4
extern "C" ARM int func_020968c4(struct ShortField0x22e_020968c4* obj) {
    return obj->field;
}
