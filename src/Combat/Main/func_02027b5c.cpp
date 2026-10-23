#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02027b5c_2712 = 0x9cc };
#else
enum { Enum_02027b5c_2712 = 0xa98 };
#endif

struct Struct_02027b5c {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0201f3b4 {
    char unknown_0_[Enum_02027b5c_2712];
    unsigned char unknown_a98_;
    unsigned char unknown_a99_;
    char unknown_a9a_[2];
    struct Struct_02027b5c* unknown_a9c_;
};

// USA: func_02027b5c
extern "C" ARM void func_02027b5c(struct Struct_0201f3b4* arg0, unsigned short arg1, unsigned char arg2, int arg3, int arg4) {
    struct Struct_02027b5c* var0 = arg0->unknown_a9c_;
    struct Struct_02027b5c* var1;
    if (var0 == NULL) return;
    if (arg0->unknown_a98_ <= arg0->unknown_a99_) return;
    var1 = &var0[arg0->unknown_a99_];
    var1->unknown_0_ = arg1;
    var1->unknown_2_ = arg2;
    var1->unknown_4_ = arg3;
    var1->unknown_8_ = arg4;
    arg0->unknown_a99_++;
}
