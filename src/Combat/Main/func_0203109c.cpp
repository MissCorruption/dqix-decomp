#include <globaldefs.h>

struct Struct_0203109c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0203109c_2 {
    Struct_0203109c unknown_0_;
    Struct_0203109c unknown_c_;
};

// USA: func_0203109c
extern "C" ARM bool func_0203109c(Struct_0203109c_2* arg0, Struct_0203109c_2* arg1) {
    if (arg0->unknown_0_.unknown_0_ < arg1->unknown_c_.unknown_0_) {
        return false;
    }
    if (arg0->unknown_0_.unknown_4_ < arg1->unknown_c_.unknown_4_) {
        return false;
    }
    if (arg0->unknown_0_.unknown_8_ < arg1->unknown_c_.unknown_8_) {
        return false;
    }
    if (arg1->unknown_0_.unknown_0_ < arg0->unknown_c_.unknown_0_) {
        return false;
    }
    if (arg1->unknown_0_.unknown_4_ < arg0->unknown_c_.unknown_4_) {
        return false;
    }
    return arg1->unknown_0_.unknown_8_ >= arg0->unknown_c_.unknown_8_;
}