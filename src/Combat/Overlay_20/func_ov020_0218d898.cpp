#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov020_0218d898_1264 = 0x480 };
#else
enum { Enum_ov020_0218d898_1264 = 0x4f0 };
#endif

struct Struct_ov020_0218d898 {
    char unknown_0_[Enum_ov020_0218d898_1264];
    int unknown_4f0_;
    float unknown_4f4_;
    int unknown_4f8_;
    int unknown_4fc_;

    int inline_ov020_0218d898() const { return unknown_4f0_ > 0; }
    int inline_ov020_0218d898_2() const { return unknown_4fc_ > 0; }
};

// USA: func_ov020_0218d898
extern "C" ARM int func_ov020_0218d898(struct Struct_ov020_0218d898* arg0) {
    return arg0->inline_ov020_0218d898() || arg0->inline_ov020_0218d898_2();
}
