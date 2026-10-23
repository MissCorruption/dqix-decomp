#include <globaldefs.h>

struct Struct_ov001_02155d54;

struct Struct_ov028_021d9574 {
    char unknown_0_[0x80];
    unsigned char unknown_80_;
    char unknown_81_[3];
    long long unknown_88_;
    long long unknown_90_;
    int unknown_98_;
    int unknown_9c_;
    unsigned char unknown_a0_;
    char unknown_a1_[3];
    long long unknown_a8_;
    long long unknown_b0_;
};

long long GetCurrentTimestamp(void);
extern "C" void func_ov028_021d8d40(
    struct Struct_ov001_02155d54* arg0, int arg1);

// USA: func_ov028_021d9574
extern "C" ARM void func_ov028_021d9574(struct Struct_ov028_021d9574* arg0) {
    if (arg0->unknown_80_ == 0) {
        return;
    }
    arg0->unknown_98_ = arg0->unknown_9c_;
    arg0->unknown_90_ = GetCurrentTimestamp();
    arg0->unknown_9c_ = (int)((unsigned long long)(arg0->unknown_90_ - arg0->unknown_88_) * 0x3c / 0x7fd88);
    if (arg0->unknown_9c_ == arg0->unknown_98_) {
        return;
    }
    func_ov028_021d8d40(
        (struct Struct_ov001_02155d54*)arg0, arg0->unknown_9c_ - arg0->unknown_98_);
    arg0->unknown_a0_ = (arg0->unknown_a0_ == 0);
    arg0->unknown_b0_ = arg0->unknown_90_ - arg0->unknown_a8_;
}
