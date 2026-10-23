#include <globaldefs.h>
#if defined(jpn)
extern "C" int func_02069430(void*, unsigned short);
extern "C" int func_02069444(void*, unsigned short);
extern "C" int func_020694a0(void*, unsigned short);
extern "C" void func_0206cb14(void*, int, unsigned short);
#endif

struct Struct_0204500c_4;
extern "C" void func_0206b198(struct Struct_0204500c_4* arg0, unsigned short arg1);
extern "C" ARM bool func_02044494(void* arg0, void* arg1);
extern "C" int func_02044420(void* arg0, void* arg1);

#if defined(jpn)
struct Struct_0206b104 {
 char unknown_0_[0x18]; unsigned short* unknown_4c_; int unknown_1c_; int unknown_20_; int unknown_24_;
 char unknown_28_[0x10]; int unknown_6c_; int unknown_70_; union { int unknown_74_; int unknown_88_; }; int unknown_78_;
};
#else
struct Struct_0206b104 {
    char unknown_0_[0x4c];
    unsigned short* unknown_4c_;
    char unknown_50_[0x54 - 0x50];
    int unknown_54_;
    int unknown_58_;
    char unknown_5c_[0x6c - 0x5c];
    int unknown_6c_;
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
    char unknown_7c_[0x88 - 0x7c];
    int unknown_88_;
};

#endif
// USA: func_0206b104
extern "C" ARM void func_0206b104(struct Struct_0206b104* arg0) {
#if defined(jpn)
    if ((arg0->unknown_20_ == 0) | (arg0->unknown_24_ == 0)) return;
#else
    if (arg0->unknown_54_ == 0 || arg0->unknown_58_ == 0) return;
#endif
    if (arg0->unknown_6c_ == 0) return;
    unsigned short* var0;
    unsigned int var1 = arg0->unknown_88_;
    for (; var1 < arg0->unknown_6c_; var1++) {
        var0 = arg0->unknown_4c_ + var1;
        #if defined(jpn)
        if (func_02069430(arg0, *var0)) {
#else
        if (func_02044494(arg0, var0)) {
#endif
            #if defined(jpn)
            var1 += func_02069444(arg0, *var0);
#else
            var1 += func_02044420(arg0, var0);
#endif
        } else {
#if defined(jpn)
            func_0206cb14(arg0, 12, *var0);
            func_0206cb14(arg0, 6, *var0);
#else
            func_0206b198((struct Struct_0204500c_4*)arg0, *var0);
#endif
        }
    }
    arg0->unknown_6c_ = 0;
    arg0->unknown_70_ = 0;
    arg0->unknown_74_ = 0;
    arg0->unknown_78_ = 0;
}
