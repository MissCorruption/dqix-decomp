#include <globaldefs.h>

extern "C" void func_ov028_021d8b44(void* arg0, void* arg1);
unsigned long long GetCurrentTimestamp(void);

struct Struct_ov028_021d9530 {
    char unknown_0_[0x84];
    unsigned long long unknown_88_;
    unsigned long long unknown_90_;
    int unknown_98_;
    int unknown_9c_;
    unsigned char unknown_a0_;
    char unknown_a1_[3];
    unsigned int unknown_a4_;
    unsigned int unknown_a8_;
};

// USA: func_ov028_021d9530
extern "C" ARM void func_ov028_021d9530(Struct_ov028_021d9530* arg0, void* arg1) {
    func_ov028_021d8b44(arg0, arg1);
    arg0->unknown_90_ = 0;
    arg0->unknown_88_ = arg0->unknown_90_;
    arg0->unknown_9c_ = 0;
    arg0->unknown_98_ = 0;
    arg0->unknown_a0_ = 0;
    unsigned long long var0 = GetCurrentTimestamp();
    arg0->unknown_a4_ = (unsigned int)var0;
    arg0->unknown_a8_ = (unsigned int)(var0 >> 32);
}
