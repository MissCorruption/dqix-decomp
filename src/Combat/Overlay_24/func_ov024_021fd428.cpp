#include <globaldefs.h>

struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);

struct Struct_ov024_021fd428 {
    char unknown_0_[0x661];
    unsigned char unknown_661_;
    char unknown_662_[0x668 - 0x661 - 1];
    struct Struct_ov024_021da670_7* unknown_668_;
};

extern "C" void func_ov024_021fd160(void* arg0, int arg1);

// USA: func_ov024_021fd428
extern "C" ARM void func_ov024_021fd428(struct Struct_ov024_021fd428* arg0) {
    if (func_ov024_021da9b0(arg0->unknown_668_)) {
        if (!arg0->unknown_661_) {
            func_ov024_021fd160(arg0, 3);
        }
    }
}
