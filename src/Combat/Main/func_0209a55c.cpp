#include <globaldefs.h>

struct Struct_0209a104_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void func_0209a530(struct Struct_0209a104_2* arg0, struct Struct_0209a104_2* arg1);

struct Struct_0209a55c {
    struct Struct_0209a104_2* unknown_0_;
    int unknown_4_;
};

// USA: func_0209a55c
extern "C" ARM void func_0209a55c(struct Struct_0209a55c* arg0, struct Struct_0209a104_2* arg1) {
    struct Struct_0209a104_2* var0;
    int var1;
    var0 = arg0->unknown_0_;
    if (var0 == NULL) return;
    var1 = arg0->unknown_4_;
    if (var1 >= 0x74) return;
    arg0->unknown_4_ = var1 + 1;
    func_0209a530(&arg0->unknown_0_[var1], arg1);
}
