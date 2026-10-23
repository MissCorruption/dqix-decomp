#include <globaldefs.h>

struct Struct_02098834_4 { char unknown_0_[11]; };
struct Struct_02098834_5 { char unknown_0_[6]; };
struct Struct_02098834 { short unknown_0_[14]; };
struct Struct_02098834_2 { int unknown_0_[6]; };
struct Struct_02098834_3 { int unknown_0_[31]; };

struct Struct_02098630 {
    struct Struct_02098834_4 unknown_0_;
    unsigned char unknown_b_;
    int unknown_c_;
    int unknown_10_;
    struct Struct_02098834_5 unknown_14_;
    struct Struct_02098834 unknown_1a_;
    struct Struct_02098834_2 unknown_38_;
    struct Struct_02098834 unknown_50_;
    struct Struct_02098834_3 unknown_6c_;
};

// USA: func_02098834
extern "C" ARM struct Struct_02098630* func_02098834(struct Struct_02098630* arg0, struct Struct_02098630* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_b_ = arg1->unknown_b_;
    arg0->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_10_ = arg1->unknown_10_;
    arg0->unknown_14_ = arg1->unknown_14_;
    arg0->unknown_1a_ = arg1->unknown_1a_;
    arg0->unknown_38_ = arg1->unknown_38_;
    arg0->unknown_50_ = arg1->unknown_50_;
    arg0->unknown_6c_ = arg1->unknown_6c_;
    return arg0;
}
