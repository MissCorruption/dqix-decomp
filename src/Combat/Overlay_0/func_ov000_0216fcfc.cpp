#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310 *c, int key);

// USA: func_ov000_0216fcfc
extern "C" ARM int func_ov000_0216fcfc(void* obj, int key) {
    return func_020e0434((struct Container020e0310*)((char*)obj + 0x88), key);
}
