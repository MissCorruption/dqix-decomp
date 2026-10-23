#include <globaldefs.h>

extern "C" void func_01ff8000(void);

struct Struct_ov031_0220f2e0 {
    unsigned char unknown_0_[8];
    void *unknown_8_;
    int unknown_c_;
};

// USA: func_ov031_0220f2e0
extern "C" ARM int func_ov031_0220f2e0(struct Struct_ov031_0220f2e0 *arg0) {
    if (arg0->unknown_8_ == NULL) {
        arg0->unknown_8_ = (void *)func_01ff8000;
        arg0->unknown_c_++;
        return 1;
    }
    if (arg0->unknown_8_ != (void *)func_01ff8000) {
        return 0;
    }
    arg0->unknown_c_++;
    return 1;
}
