#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_020322c0_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

short fix32cos(int x);
short fix32sin(int x);
extern "C" void Vector3fix_Normalize(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1);
extern "C" int Vector3fix_InnerProduct(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1);

struct Struct_020322c0 {
    char unknown_0_[0x24];
    struct Struct_ov009_0218aa28 unknown_24_;
};

// USA: func_020322c0
extern "C" ARM int func_020322c0(const struct Struct_020322c0* arg0, const struct Struct_020322c0_2* arg1) {
    struct Struct_ov009_0218aa28 var0 = arg0->unknown_24_;
    Vector3fix_Normalize(&var0, &var0);

    int var1 = fix32cos(arg1->unknown_0_);
    struct Struct_ov009_0218aa28 var2;
    var2.unknown_0_ = fix32sin(arg1->unknown_0_);
    var2.unknown_4_ = 0;
    var2.unknown_8_ = var1;
    Vector3fix_Normalize(&var2, &var2);

    return Vector3fix_InnerProduct(&var2, &var0);
}
