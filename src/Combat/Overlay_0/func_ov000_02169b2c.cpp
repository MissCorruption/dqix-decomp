#include <globaldefs.h>

struct Struct_ov000_02169b2c {
    char unknown_0_[4];
    struct Struct_ov000_02169b2c* unknown_4_;
};

// USA: func_ov000_02169b2c
extern "C" ARM void func_ov000_02169b2c(struct Struct_ov000_02169b2c* arg0, struct Struct_ov000_02169b2c* arg1) {
    if (arg0->unknown_4_ == NULL) {
        arg0->unknown_4_ = arg1;
        arg1->unknown_4_ = NULL;
        return;
    }
    func_ov000_02169b2c(arg0->unknown_4_, arg1);
}
