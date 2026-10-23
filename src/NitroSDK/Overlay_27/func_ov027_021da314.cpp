#include <globaldefs.h>

extern "C" void VectorizedMemset(void* dst, int value, unsigned int len);
extern "C" void VectorizedInvertedMemcpy(const void* src, void* dst, unsigned int len);

struct Struct_ov027_021da314 {
    unsigned int unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_ov027_021da314
extern "C" ARM void func_ov027_021da314(Struct_ov027_021da314* arg0, unsigned int arg1, unsigned int arg2, int arg3) {
    if (arg1 < 0x4000) arg1 = 0x4000;
    if (arg2 > 0x8000) arg2 = 0x8000;
    if (arg1 < arg0->unknown_0_) arg1 = arg0->unknown_0_;
    unsigned int var0 = arg0->unknown_0_ + arg0->unknown_c_;
    if (arg2 > var0) arg2 = var0;
    if (arg1 >= arg2) return;
    if (arg3 != 0) {
        VectorizedMemset(arg0->unknown_8_ + arg1, 0, arg2 - arg1);
        return;
    }
    VectorizedInvertedMemcpy(arg0->unknown_4_ + arg1, arg0->unknown_8_ + arg1, arg2 - arg1);
}
