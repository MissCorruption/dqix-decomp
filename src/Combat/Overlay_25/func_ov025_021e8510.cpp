#include <globaldefs.h>

struct AngleTrig0202e9a4;

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f14(void* w);
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4* objParam, int angle);

struct Obj021e8510 {
    char pad[0x8];
    int angle;
};

// USA: func_ov025_021e8510
extern "C" ARM int func_ov025_021e8510(struct Obj021e8510* obj) {
    void* w = func_ov000_02160130();
    if (!w) return 1;
    void* x = func_ov000_02160f14(w);
    if (!x) return 1;
    func_0202e9a4((struct AngleTrig0202e9a4*)x, obj->angle);
    return 1;
}
