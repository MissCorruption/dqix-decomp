#include <globaldefs.h>

struct Struct_ov023_021fff08 {
    char unknown_0_[0x4];
    void *unknown_4_;
};

extern struct Struct_ov023_021fff08 data_ov023_021fff08;

// USA: func_ov023_021f5598
extern "C" ARM void func_ov023_021f5598(void *arg0) {
    data_ov023_021fff08.unknown_4_ = arg0;
}
