#include <globaldefs.h>

struct Obj0218ef2c;
extern "C" int func_ov016_0218ef2c(struct Obj0218ef2c* o);

// USA: func_ov016_0218e6a8
extern "C" ARM int func_ov016_0218e6a8(void* p) {
    if (p == NULL) {
        return 0;
    }
    return func_ov016_0218ef2c((struct Obj0218ef2c*)p);
}
