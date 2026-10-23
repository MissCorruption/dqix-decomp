#include <globaldefs.h>

struct Struct_02015134_4 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    short unknown_12_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    unsigned int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
};

struct Struct_02015134_3 {
    struct Struct_02015134_4 *unknown_0_;
    char *unknown_4_;
    char *unknown_8_;
    char *unknown_c_;
    char *unknown_10_;
    char *unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_[6];
    int unknown_48_;
};

// USA: func_0204bf44
extern "C" ARM void func_0204bf44(Struct_02015134_3* arg0, void* arg1, Struct_02015134_4* arg2, unsigned int) {
    arg0->unknown_0_ = arg2;
    arg0->unknown_4_ = (char*)arg2 + arg0->unknown_0_->unknown_24_;
    arg0->unknown_8_ = (char*)arg2 + arg0->unknown_0_->unknown_28_;
    arg0->unknown_c_ = (char*)arg2 + arg0->unknown_0_->unknown_2c_;
    arg0->unknown_10_ = (char*)arg2 + arg0->unknown_0_->unknown_30_;
    if (arg0->unknown_0_->unknown_0_ == 3) {
        arg0->unknown_14_ = (char*)arg2 + arg0->unknown_0_->unknown_38_;
    }
    arg0->unknown_24_ = arg0->unknown_0_->unknown_8_ << arg0->unknown_0_->unknown_4_;
    arg0->unknown_28_ = arg0->unknown_0_->unknown_a_ << arg0->unknown_0_->unknown_4_;
    arg0->unknown_2c_ = arg0->unknown_0_->unknown_c_ << arg0->unknown_0_->unknown_4_;
    arg0->unknown_18_ = arg0->unknown_0_->unknown_e_ << arg0->unknown_0_->unknown_4_;
    arg0->unknown_1c_ = arg0->unknown_0_->unknown_10_ << arg0->unknown_0_->unknown_4_;
    arg0->unknown_20_ = arg0->unknown_0_->unknown_12_ << arg0->unknown_0_->unknown_4_;
    arg0->unknown_48_ = arg0->unknown_0_->unknown_1c_ * arg0->unknown_0_->unknown_20_ + (arg0->unknown_0_->unknown_20_ >> 1);
}
