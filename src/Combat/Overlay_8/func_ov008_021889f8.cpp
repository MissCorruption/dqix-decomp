#include <globaldefs.h>
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif


extern "C" void func_0205af84(int arg0, void* arg1, int arg2);
extern "C" void func_0205ac40(int arg0, void* arg1);

struct Struct_ov008_021889f8 { char unknown_0_[0x2bc]; int unknown_2bc_; int unknown_2c0_; };

struct Struct_ov008_02184878 {
    char unknown_0_[0x730];
    int unknown_730_;
    struct Struct_ov008_021889f8* unknown_734_;
    char unknown_738_[0xb18 - 0x738];
    unsigned int unknown_b18_;
};

// USA: func_ov008_021889f8
extern "C" ARM void func_ov008_021889f8(struct Struct_ov008_02184878* arg0) {
    if (arg0->unknown_730_ == 0) return;
    if (!(arg0->unknown_b18_ & 0x80000)) return;
    struct Struct_ov008_021889f8* var0 = arg0->unknown_734_;
    var0->unknown_2bc_ = R(0xd0000, 0xc8000);
    var0->unknown_2c0_ = 0x62000;
    func_0205af84(arg0->unknown_730_, (char*)arg0->unknown_734_ + 0x2a8, 1);
    func_0205ac40(arg0->unknown_730_, (char*)arg0->unknown_734_ + 0x2a8);
}
