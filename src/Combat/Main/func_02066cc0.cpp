#include <globaldefs.h>

struct Struct_02066cc0 {
    short unknown_0_;
    short unknown_2_;
};

struct Struct_02066a6c_2 {
    char unknown_0_[0x440];
    struct Struct_02066cc0* unknown_440_;
};

// USA: func_02066cc0
extern "C" ARM void func_02066cc0(struct Struct_02066a6c_2* arg0, short* arg1, short* arg2) {
    if (arg0->unknown_440_ != NULL) {
        *arg1 = arg0->unknown_440_->unknown_0_;
        *arg2 = arg0->unknown_440_->unknown_2_;
    }
}
