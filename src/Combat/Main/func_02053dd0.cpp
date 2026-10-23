#include <globaldefs.h>

struct Struct_02053dd0_2 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_02053dd0_3 {
    char unknown_0_[0x8];
    int unknown_8_;
};

struct Struct_02053dd0 {
    char unknown_0_[0x138];
    struct Struct_02053dd0_2* unknown_138_;
#if defined(jpn)
    char unknown_13c_[0x54];
#else
    char unknown1_13c_[0x60];
#endif
    struct Struct_02053dd0_3* unknown_19c_;
};

// USA: func_02053dd0
extern "C" ARM void func_02053dd0(struct Struct_02053dd0* arg0) {
    struct Struct_02053dd0_3* var0 = arg0->unknown_19c_;
    if (var0 == 0 || (arg0->unknown_138_->unknown_14_ & 1) != 0) {
        return;
    }
    var0->unknown_8_++;
}
