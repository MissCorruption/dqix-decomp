#include <globaldefs.h>

struct Struct_ov031_0220527c;
struct Struct_ov031_02205814_2 {
    char unknown_0_[0x64];
    void* unknown_64_;
    char unknown_68_[8];
    short unknown_70_;
    signed char unknown_72_;
    signed char unknown_73_;
    unsigned short unknown_74_;
    unsigned short unknown_76_;
    unsigned int unknown_78_;
};
struct Struct_ov031_02205814 {
    char unknown_0_[0x10];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned int unknown_14_;
};
extern "C" void* func_ov031_02205134(void*, void*, int);
extern "C" int func_ov031_0220527c(Struct_ov031_0220527c*, void*);
extern "C" int func_ov031_0220586c(void*);

// USA: func_ov031_02205814
extern "C" ARM int func_ov031_02205814(Struct_ov031_02205814_2* arg0) {
    Struct_ov031_02205814* var0 = (Struct_ov031_02205814*)func_ov031_02205134((void*)func_ov031_0220586c, arg0, arg0->unknown_72_);
    if (!var0) return -33;
    var0->unknown_10_ = arg0->unknown_74_;
    var0->unknown_12_ = arg0->unknown_76_;
    var0->unknown_14_ = arg0->unknown_78_;
    arg0->unknown_70_ |= 2;
    return func_ov031_0220527c((Struct_ov031_0220527c*)arg0, var0);
}
