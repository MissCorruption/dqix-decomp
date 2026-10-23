#include <globaldefs.h>

extern "C" int func_020d2ff0(const char* arg0);
extern "C" void* memset(void* arg0, int arg1, int arg2);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern char data_ov023_021fe144;

struct Struct_ov023_021f229c { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_ov023_021f229c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    char unknown_c_[0x44 - 0xc];
#if defined(jpn)
    char unknown_44_[0x118];
#else
    char unknown_44_[0x200];
#endif
};

// USA: func_ov023_021f229c
extern "C" ARM void func_ov023_021f229c(Struct_ov023_021f229c_2* arg0, Struct_ov023_021f229c* arg1) {
    if (arg1 == 0) return;
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_4_ = arg1->unknown_4_;
    arg0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_4_ = (int)arg0->unknown_44_;
    int var0 = arg1->unknown_4_;
    if (var0 == 0) return;
#if defined(jpn)
    memset(arg0->unknown_44_, 0, 0x118);
#else
    memset(arg0->unknown_44_, 0, 0x200);
#endif
    sprintf(arg0->unknown_44_ + func_020d2ff0(arg0->unknown_44_), &data_ov023_021fe144, var0);
}
