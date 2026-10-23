#include <globaldefs.h>

extern "C" void* func_ov000_02160130();
extern "C" void func_ov000_02163440(void*, short, unsigned short, unsigned short);

struct Struct_ov025_021e821c {
    char unknown_0_[8];
    short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;

    short inline_ov025_021e821c() const { return unknown_8_; }
    unsigned short inline_ov025_021e821c_2() const { return unknown_a_; }
    unsigned short inline_ov025_021e821c_3() const { return unknown_c_; }
};

// USA: func_ov025_021e821c
extern "C" ARM int func_ov025_021e821c(Struct_ov025_021e821c* arg0) {
    short var0 = arg0->inline_ov025_021e821c();
    unsigned short var1 = arg0->inline_ov025_021e821c_2();
    unsigned short var2 = arg0->inline_ov025_021e821c_3();
    func_ov000_02163440(func_ov000_02160130(), var0, var1, var2);
    return 1;
}
