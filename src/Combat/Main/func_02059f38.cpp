#include <globaldefs.h>

struct Struct_02059cfc_3 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02059cfc_2 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
};

// USA: func_02059f38
extern "C" ARM void func_02059f38(struct Struct_02059cfc_2* arg0, struct Struct_02059cfc_3* arg1) {
    arg0->unknown_44_ = arg1->unknown_0_;
    arg0->unknown_48_ = arg1->unknown_4_;
    arg0->unknown_4c_ = arg1->unknown_8_;
}
