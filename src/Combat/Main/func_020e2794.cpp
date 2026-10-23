#include <globaldefs.h>

struct Struct_0205a254;
extern "C" void func_020e27ec(struct Struct_0205a254* arg0, int arg1, short arg2, short arg3);
extern "C" void func_0205ae8c(void* arg0);
extern "C" void func_020e1780(void* arg0);

struct Struct_020e2794 {
    unsigned char unknown_0_[0x3f];
    unsigned char unknown_3f_0_ : 1;
};

struct Struct_020e2794_2 {
    unsigned char unknown_0_[0xc];
    struct Struct_020e2794* unknown_c_;
    void* unknown_10_;
    unsigned char unknown_14_[4];
    short unknown_18_;
    short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned char unknown_1e_[2];
    struct Struct_0205a254* unknown_20_;
};

// USA: func_020e2794
extern "C" ARM void func_020e2794(struct Struct_020e2794_2* arg0, void* arg1) {
    if (!arg0->unknown_c_->unknown_3f_0_) return;
    if (arg0->unknown_20_ != NULL) {
        func_020e27ec(arg0->unknown_20_, arg0->unknown_1c_, arg0->unknown_18_, arg0->unknown_1a_);
        if (arg1 != NULL) func_0205ae8c(arg1);
    }
    func_020e1780(arg0->unknown_10_);
}
