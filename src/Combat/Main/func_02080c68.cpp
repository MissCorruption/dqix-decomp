#include <globaldefs.h>

struct Struct_0207f0ac;
struct Struct_0207fdcc_2;

struct Struct_02080c68_2 {
    char unknown_0_[0x8];
    short unknown_8_;
    char unknown_a_[0x12 - 0xa];
    union {
        unsigned char unknown_0_;
        struct { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; } unknown1_0_;
    } unknown_12_;
};

struct Struct_02080c68 {
    char unknown_0_[0xc2];
    short unknown_c2_;
};

extern "C" struct Struct_02080c68_2* func_0207f0ac(struct Struct_0207f0ac* arg0, int arg1);
extern "C" struct Struct_02080c68* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);

// USA: func_02080c68
extern "C" ARM void func_02080c68(void* arg0, int arg1, int arg2) {
    struct Struct_02080c68_2* var0 = func_0207f0ac((struct Struct_0207f0ac*)((char*)arg0 + 0xc), arg1);
    struct Struct_02080c68* var1;
    if (var0 == NULL) {
        return;
    }
    var0->unknown_12_.unknown_0_ = (var0->unknown_12_.unknown_0_ & ~0xf) | (arg2 & 0xf);
    var1 = func_02081da8((struct Struct_0207fdcc_2*)arg0, var0->unknown_8_);
    if (var1 != NULL) {
        var1->unknown_c2_ = var0->unknown_12_.unknown1_0_.unknown_0_0_ & 0xf;
    }
}
