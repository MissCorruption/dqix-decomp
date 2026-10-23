#include <globaldefs.h>

struct Struct_020421c4_3 {
    char unknown_0_[8];
    char* unknown_8_;
    char* unknown_c_;
};

// USA: func_02042998
extern "C" ARM void func_02042998(struct Struct_020421c4_3* arg0) {
    if (arg0 != 0) {
        arg0->unknown_8_ = (char*)arg0 + (int)arg0->unknown_8_;
        arg0->unknown_c_ = (char*)arg0 + (int)arg0->unknown_c_;
    }
}
