#include <globaldefs.h>

extern "C" int func_ov003_0217daa4(int p);

struct Obj020dae80 { char pad[0xc]; int field_c; };

// USA: func_020dae80
extern "C" ARM int func_020dae80(struct Obj020dae80* obj) {
    int p = obj->field_c;
    if (p == 0) return p;
    return func_ov003_0217daa4(p);
}
