#include <globaldefs.h>

struct Struct_02088514;
extern "C" int func_02088514(struct Struct_02088514* arg0);

struct Struct_ov024_021fd3f0 {
    char unknown_0_[0x138];
    struct Struct_02088514* unknown_138_;
};

struct Struct_ov024_021fd3f0_2 {
    char unknown_0_[0x661];
    unsigned char unknown_661_;
    char unknown_662_[0x668 - 0x661 - 1];
    struct Struct_ov024_021fd3f0* unknown_668_;
};

extern "C" void func_ov024_021fd160(void* arg0, int arg1);

// USA: func_ov024_021fd3f0
extern "C" ARM void func_ov024_021fd3f0(struct Struct_ov024_021fd3f0_2* arg0) {
    if (func_02088514(arg0->unknown_668_->unknown_138_)) {
        if (!arg0->unknown_661_) {
            func_ov024_021fd160(arg0, 2);
        }
    }
}
