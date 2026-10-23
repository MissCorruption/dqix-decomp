#include <globaldefs.h>

struct Struct_0202e95c;

struct Struct_ov025_021e8584 {
    char unknown_0_[0x8];
    short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f14(void* arg0);
extern "C" void func_0202e95c(Struct_0202e95c*, short, unsigned short);

// USA: func_ov025_021e8584
extern "C" ARM int func_ov025_021e8584(struct Struct_ov025_021e8584* arg0) {
    void* var0 = func_ov000_02160130();
    func_0202e95c((struct Struct_0202e95c*)func_ov000_02160f14(var0), arg0->unknown_8_, arg0->unknown_a_);
    return 1;
}
