#include <globaldefs.h>

struct Struct_020c189c { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_020c189c_2 {
    struct Struct_020c189c unknown_0_;
    struct Struct_020c189c unknown_c_;
    struct Struct_020c189c unknown_18_;
    struct Struct_020c189c unknown_24_;
};

extern "C" void func_020ca528(struct Struct_020c189c_2* src, struct Struct_020c189c_2* dst);

// USA: func_020c189c
extern "C" ARM void Mat4x3_ApplyTranslation(struct Struct_020c189c_2* arg0, struct Struct_020c189c_2* arg1, int arg2, int arg3, int arg4) {
    if (arg0 != arg1) func_020ca528(arg0, arg1);
    arg1->unknown_24_.unknown_0_ = arg0->unknown_24_.unknown_0_ + (int)(((long long)arg2 * arg0->unknown_0_.unknown_0_ + (long long)arg3 * arg0->unknown_c_.unknown_0_ + (long long)arg4 * arg0->unknown_18_.unknown_0_) >> 12);
    arg1->unknown_24_.unknown_4_ = arg0->unknown_24_.unknown_4_ + (int)(((long long)arg2 * arg0->unknown_0_.unknown_4_ + (long long)arg3 * arg0->unknown_c_.unknown_4_ + (long long)arg4 * arg0->unknown_18_.unknown_4_) >> 12);
    arg1->unknown_24_.unknown_8_ = arg0->unknown_24_.unknown_8_ + (int)(((long long)arg2 * arg0->unknown_0_.unknown_8_ + (long long)arg3 * arg0->unknown_c_.unknown_8_ + (long long)arg4 * arg0->unknown_18_.unknown_8_) >> 12);
}
