#include <globaldefs.h>

struct Struct_02085a48 {
    char unknown_0_[0x2ac];
    short unknown_2ac_;
    char unknown_2ae_[0x304 - 0x2ae];
    int unknown_304_;
};

// USA: func_02085a48
extern "C" ARM float func_02085a48(struct Struct_02085a48* arg0) {
    if (arg0->unknown_2ac_ <= 0) {
        return 1.0f;
    }
    return (float)((arg0->unknown_304_ << 26) >> 26) / 10.0f;
}
