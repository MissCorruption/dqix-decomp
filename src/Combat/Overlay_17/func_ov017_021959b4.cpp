#include <globaldefs.h>

struct Struct_0202b2f0;
extern "C" struct Struct_0202b2f0* func_0202ae18(void);
extern "C" int func_0202c540(struct Struct_0202b2f0* arg0);
extern "C" int func_0202c578(struct Struct_0202b2f0* arg0, int arg1);

// USA: func_ov017_021959b4
extern "C" ARM int func_ov017_021959b4(void) {
    struct Struct_0202b2f0* var0 = func_0202ae18();
    if (func_0202c540(var0)) {
        if (func_0202c578(var0, 0) != 0) return 1;
    }
    return 0;
}
