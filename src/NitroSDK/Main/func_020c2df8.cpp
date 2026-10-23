#include <globaldefs.h>

struct Struct_020c20d4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020c2df8
extern "C" ARM int Vector3fix_InnerProduct(struct Struct_020c20d4* arg0, struct Struct_020c20d4* arg1) {
    long long var0 = (long long)arg0->unknown_0_ * arg1->unknown_0_ + (long long)arg0->unknown_4_ * arg1->unknown_4_ + (long long)arg0->unknown_8_ * arg1->unknown_8_;
    return (int)((var0 + 0x800) >> 12);
}
