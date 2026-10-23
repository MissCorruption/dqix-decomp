#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov015_02190d7c;
extern "C" void func_ov015_021931b4(struct Struct_ov015_02190d7c* arg0, int arg1);
extern "C" void func_ov015_02192700(void* arg0, int arg1);

struct Struct_ov015_02191ea4 {
    int unknown_0_;
    struct Struct_ov015_02191ea4* unknown_4_;
};

struct Struct_ov015_02191ea4_2 {
    char unknown_0_[0x2c];
    struct Struct_ov015_02191ea4* unknown_2c_;
    char unknown_30_[0x34 - 0x2c - 4];
    int unknown_34_;
    char unknown_38_[0x1a4 - 0x34 - 4];
    int unknown_1a4_;
};

// USA: func_ov015_02191ea4
extern "C" ARM void func_ov015_02191ea4(struct Struct_ov015_02191ea4_2* arg0, int arg1) {
    int var0;
    struct Struct_ov015_02191ea4* var1 = arg0->unknown_2c_;
    if (var1 == 0) {
        return;
    }

    for (var0 = 0; var0 < arg1; var0++) {
        var1 = var1->unknown_4_;
    }

    if (var1 == 0) {
        return;
    }

    arg0->unknown_34_ = var1->unknown_0_;
    func_ov015_021931b4((struct Struct_ov015_02190d7c*)arg0, arg0->unknown_1a4_);
    arg0->unknown_1a4_ = 0x25;
    func_ov015_02192700(arg0, 0);
}
