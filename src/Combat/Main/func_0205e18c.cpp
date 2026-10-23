#include <globaldefs.h>

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};

extern "C" void func_020d8654(void);
extern "C" void func_020d8694(void);

// USA: func_0205e18c
extern "C" ARM void func_0205e18c(struct Struct_0205e18c* arg0, struct Struct_0205e18c_2* arg1) {
    func_020d8654();
    if (arg0->unknown_0_ != NULL) {
        arg0->unknown_4_->unknown_18_ = arg1;
        arg0->unknown_4_ = arg1;
    } else {
        arg0->unknown_0_ = arg1;
        arg0->unknown_4_ = arg1;
        arg0->unknown_0_->unknown_18_ = NULL;
    }
    arg0->unknown_8_++;
    arg0->unknown_4_->unknown_18_ = NULL;
    func_020d8694();
}
