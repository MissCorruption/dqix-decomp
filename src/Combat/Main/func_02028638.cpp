#include <globaldefs.h>

struct Struct_02028460_3 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" int Vector3fix_Distance(struct Struct_02028460_3* arg0, struct Struct_02028460_3* arg1);

struct Struct_02028638 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    unsigned char unknown_a_[6];
};

struct Struct_02028638_2 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_[1];
    struct Struct_02028638* unknown_4_;
};

// USA: func_02028638
extern "C" ARM int func_02028638(struct Struct_02028638_2* arg0, struct Struct_02028460_3* arg1) {
    if (arg0->unknown_2_ == 0) return 0;

    struct Struct_02028638* var0 = arg0->unknown_4_;
    struct Struct_02028460_3 var1;
    var1.unknown_0_ = (int)var0[0].unknown_4_ << 12;
    var1.unknown_4_ = (int)var0[0].unknown_6_ << 12;
    var1.unknown_8_ = (int)var0[0].unknown_8_ << 12;
    int var2 = 0;
    int var3 = Vector3fix_Distance(arg1, &var1);

    for (int var4 = 1; var4 < arg0->unknown_2_; var4++) {
        struct Struct_02028460_3 var5;
        var5.unknown_0_ = (int)var0[var4].unknown_4_ << 12;
        var5.unknown_4_ = (int)var0[var4].unknown_6_ << 12;
        var5.unknown_8_ = (int)var0[var4].unknown_8_ << 12;
        int var6 = Vector3fix_Distance(arg1, &var5);
        if (var6 < var3) {
            var2 = var0[var4].unknown_0_;
            var3 = var6;
        }
    }
    return var2;
}
