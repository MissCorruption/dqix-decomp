#include <globaldefs.h>

struct Struct_ov001_02157570_2 {
    unsigned char unknown_0_[0x38c];
    int unknown_38c_;
    int unknown_390_;
    int unknown_394_;
};
struct Struct_ov001_02157570 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_ov001_02157570
extern "C" ARM void func_ov001_02157570(struct Struct_ov001_02157570_2* arg0, struct Struct_ov001_02157570* arg1) {
    arg1->unknown_0_ = arg0->unknown_38c_;
    arg1->unknown_4_ = arg0->unknown_390_;
    arg1->unknown_8_ = arg0->unknown_394_;
}
