#include <globaldefs.h>

struct Struct_0202e5d8_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0202e5d8_3 {
    struct Struct_0202e5d8_2 unknown_0_;
    struct Struct_0202e5d8_2 unknown_c_;
    struct Struct_0202e5d8_2 unknown_18_;
    struct Struct_0202e5d8_2 unknown_24_;
};

// USA: func_020c2034
extern "C" ARM void Mat4x3_ApplyToVector(struct Struct_0202e5d8_2* arg0, struct Struct_0202e5d8_3* arg1, struct Struct_0202e5d8_2* arg2) {
    int var0 = arg0->unknown_4_;
    int var1 = arg0->unknown_0_;
    int var2 = arg0->unknown_8_;
    arg2->unknown_0_ = (int)(((long long)var1 * arg1->unknown_0_.unknown_0_ + (long long)var0 * arg1->unknown_c_.unknown_0_ + (long long)var2 * arg1->unknown_18_.unknown_0_) >> 12);
    arg2->unknown_0_ += arg1->unknown_24_.unknown_0_;
    arg2->unknown_4_ = (int)(((long long)var1 * arg1->unknown_0_.unknown_4_ + (long long)var0 * arg1->unknown_c_.unknown_4_ + (long long)var2 * arg1->unknown_18_.unknown_4_) >> 12);
    arg2->unknown_4_ += arg1->unknown_24_.unknown_4_;
    arg2->unknown_8_ = (int)(((long long)var1 * arg1->unknown_0_.unknown_8_ + (long long)var0 * arg1->unknown_c_.unknown_8_ + (long long)var2 * arg1->unknown_18_.unknown_8_) >> 12);
    arg2->unknown_8_ += arg1->unknown_24_.unknown_8_;
}
