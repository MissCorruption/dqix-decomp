#include <globaldefs.h>

struct Struct_0202df68;

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f14(void* arg0);
extern "C" void func_0202e9a4(struct Struct_0202df68* arg0, int arg1);

struct Struct_ov025_021e8510 {
    char unknown_0_[0x8];
    int unknown_8_;
};

// USA: func_ov025_021e8510
extern "C" ARM int func_ov025_021e8510(struct Struct_ov025_021e8510* arg0) {
    void* var0 = func_ov000_02160130();
    if (!var0) return 1;
    void* var1 = func_ov000_02160f14(var0);
    if (!var1) return 1;
    func_0202e9a4((struct Struct_0202df68*)var1, arg0->unknown_8_);
    return 1;
}
