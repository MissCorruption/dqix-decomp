#include <globaldefs.h>

struct Struct_ov003_0215f4a4_3 {
    char unknown_0_[0xd];
    unsigned char unknown_d_;
    char unknown_e_[0x14 - 0xd - 1];
};

struct Struct_ov003_0215f4a4 {
    struct Struct_ov003_0215f4a4_3* unknown_0_;
    char unknown_4_[2];
    short unknown_6_;
};

struct Struct_ov003_0215f4a4_2 {
    char unknown_0_[4];
    struct Struct_ov003_0215f4a4* unknown_4_;
};

// USA: func_ov003_0215f4a4
extern "C" ARM struct Struct_ov003_0215f4a4_3* func_ov003_0215f4a4(struct Struct_ov003_0215f4a4_2* arg0, int arg1) {
    struct Struct_ov003_0215f4a4* var0 = arg0->unknown_4_;
    short var1 = var0->unknown_6_;
    struct Struct_ov003_0215f4a4_3* var2 = var0->unknown_0_;
    short var3 = 0;
    while (var3 < var1) {
        if (var2->unknown_d_ == arg1) return var2;
        var3 = (short)(var3 + 1);
        var2 = (struct Struct_ov003_0215f4a4_3*)((char*)var2 + 0x14);
    }
    return 0;
}
