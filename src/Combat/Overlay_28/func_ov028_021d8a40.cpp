#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov028_021d8a40 {
    char unknown_0_[0x8];
    unsigned int unknown_8_;
    char unknown_c_[0xa0 - 0xc];
    unsigned int unknown_a0_;
    char unknown_a4_[0xa8 - 0xa4];
    unsigned short unknown_a8_;
    unsigned short unknown_aa_;
    unsigned short unknown_ac_;
    unsigned short unknown_ae_;
};

extern "C" void func_0204c684(void* arg0);

// USA: func_ov028_021d8a40
extern "C" ARM void func_ov028_021d8a40(Struct_ov028_021d8a40* arg0, unsigned int arg1) {
    func_0204c684(arg0);
    arg0->unknown_8_ = arg1;
    arg0->unknown_ac_ = 0;
    arg0->unknown_ae_ = 0;
    arg0->unknown_a8_ = 0x20;
    arg0->unknown_aa_ = 0x20;
    arg0->unknown_a0_ = 0;
}
