#include <globaldefs.h>

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);

struct Struct_02049efc {
    unsigned char unknown_0_[0x56];
    unsigned char unknown_56_;
};
struct Struct_02049efc_2 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049efc* unknown_13c_;
};

// USA: func_02049efc
extern "C" ARM void func_02049efc(struct Struct_02049efc_2* arg0) {
    if (arg0->unknown_13c_ == NULL) return;
    if (func_02010088((struct Struct_02010088*)arg0)) {
        arg0->unknown_13c_->unknown_56_ = 0;
    }
}
