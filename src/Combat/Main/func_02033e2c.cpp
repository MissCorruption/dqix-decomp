#include <globaldefs.h>

struct ShortField02033e2c {
    char pad[0xc6];
    short field_c6;
};

// USA: func_02033e2c
extern "C" ARM void func_02033e2c(struct ShortField02033e2c* obj) {
    obj->field_c6 = 0;
}
