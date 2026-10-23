#include <globaldefs.h>

struct Struct_020809a0_2 {
    char unknown_0_[0xa];
    short unknown_a_;
    short unknown_c_;
    char unknown_e_[0x30 - 0xe];
};

struct Struct_0207f524 {
    struct Struct_020809a0_2* unknown_0_;
    short unknown_4_;
};

extern "C" struct Struct_020809a0_2* func_0207f6ac(struct Struct_0207f524* arg0, int arg1);

struct Struct_020809a0 {
    char unknown_0_[4];
    struct Struct_0207f524 unknown_4_;
};

// USA: func_020809a0
extern "C" ARM void func_020809a0(struct Struct_020809a0* arg0, int arg1, short arg2, short arg3) {
    struct Struct_020809a0_2* var0 = func_0207f6ac(&arg0->unknown_4_, arg1);
    if (var0 != NULL) {
        var0->unknown_a_ = arg2;
        var0->unknown_c_ = arg3;
    }
}
