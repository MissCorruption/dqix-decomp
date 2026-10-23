#include <globaldefs.h>

struct ShortField02033ec8 {
    char pad[0xc6];
    short field_c6;
};

// USA: func_02033ec8
extern "C" ARM int func_02033ec8(struct ShortField02033ec8* p) {
    return p->field_c6 == 0;
}
