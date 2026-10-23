#include <globaldefs.h>

struct Struct_020a8304_3 { unsigned char unknown_0_; unsigned char unknown_1_; char unknown_2_[0x2c - 2]; };
struct Struct_020a8304 {
    struct Struct_020a8304_3* unknown_0_;
    char unknown_4_[2];
    unsigned short unknown_6_;
};

extern "C" struct Struct_020a8304_3* func_020a8458(struct Struct_020a8304* arg0);

struct Struct_020a8304_2 {
    struct Struct_020a8304_3* unknown_0_;
    char unknown_4_[2];
    unsigned short unknown_6_;
    struct Struct_020a8304_3* unknown_8_;
    unsigned short unknown_c_;
};

// USA: func_020a8304
extern "C" ARM void func_020a8304(struct Struct_020a8304_2* arg0) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_6_; var0++) {
        struct Struct_020a8304_3* var1 = (struct Struct_020a8304_3*)((char*)arg0->unknown_0_ + var0 * 0x2c);
        var1->unknown_1_ = 0xff;
    }
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    struct Struct_020a8304_3* var2 = func_020a8458((struct Struct_020a8304*)arg0);
    if (var2 == 0) {
        return;
    }
    arg0->unknown_8_ = var2;
    var2->unknown_1_ = 0;
    arg0->unknown_c_ = arg0->unknown_c_ + 1;
    unsigned char var3 = 1;
    while (var2 != 0) {
        struct Struct_020a8304_3* var4 = func_020a8458((struct Struct_020a8304*)arg0);
        *(int*)((char*)var2 + 0x28) = (int)var4;
        if (var4 != 0) {
            var4->unknown_1_ = var3;
            var3 = (unsigned char)(var3 + 1);
            arg0->unknown_c_ = arg0->unknown_c_ + 1;
        }
        var2 = var4;
    }
}
