#include <globaldefs.h>

struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);

struct Struct_ov024_021fd784 {
    char unknown_0_[0x661];
    unsigned char unknown_661_;
    char unknown_662_[0x668 - 0x661 - 1];
    struct Struct_ov024_021de124* unknown_668_;
};

extern "C" void func_ov024_021fd160(void* arg0, int arg1);

// USA: func_ov024_021fd784
extern "C" ARM void func_ov024_021fd784(struct Struct_ov024_021fd784* arg0) {
    if (func_ov024_021de25c(arg0->unknown_668_)) {
        if (!arg0->unknown_661_) {
            func_ov024_021fd160(arg0, 7);
        }
    }
}
