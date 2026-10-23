#include <globaldefs.h>

struct Struct_0202ed0c_3 {
    unsigned int unknown_0_[3];
};

struct Struct_0202ed0c_4 {
    unsigned int unknown_0_[12];
};

struct Struct_0202ed0c {
    struct Struct_0202ed0c_3 unknown_0_;
    struct Struct_0202ed0c_3 unknown_c_;
    struct Struct_0202ed0c_3 unknown_18_;
    struct Struct_0202ed0c_4 unknown_24_;
};

struct Struct_0202ed0c_2 {
    char unknown_0_[4];
    struct Struct_0202ed0c_3 unknown_4_;
    struct Struct_0202ed0c_3 unknown_10_;
    struct Struct_0202ed0c_3 unknown_1c_;
    struct Struct_0202ed0c_4 unknown_28_;
};

// USA: func_0202ed0c
extern "C" ARM void func_0202ed0c(struct Struct_0202ed0c_2* arg0, struct Struct_0202ed0c* arg1) {
    arg0->unknown_4_ = arg1->unknown_0_;
    arg0->unknown_10_ = arg1->unknown_c_;
    arg0->unknown_1c_ = arg1->unknown_18_;
    arg0->unknown_28_ = arg1->unknown_24_;
}
