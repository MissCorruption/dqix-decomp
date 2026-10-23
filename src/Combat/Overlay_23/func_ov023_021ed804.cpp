#include <globaldefs.h>

struct Struct_ov023_021ed804_3 {
    unsigned int unknown_0_0_:6, unknown_0_6_:6, unknown_1_4_:6, unknown_2_2_:6, unknown_3_0_:2, unknown_3_2_:1, unknown_3_3_:1, unknown_3_4_:1;
};
struct Struct_ov023_021ed804 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[0x10];
    unsigned int unknown_14_;
    Struct_ov023_021ed804_3 unknown_18_;
};
struct Struct_ov023_021ed804_2 {
    unsigned int unknown_0_0_:6, unknown_0_6_:6, unknown_1_4_:6, unknown_2_2_:6, unknown_3_0_:2, unknown_3_2_:1, unknown_3_3_:1, unknown_3_4_:1, :2, unknown_3_7_:1;
};
union Struct_ov023_021ed804_4 {
    unsigned int unknown_0_[3];
    struct { unsigned int unknown_0_, unknown_4_; Struct_ov023_021ed804_2 unknown_8_; } unknown1_0_;
};

extern "C" void* func_020e46c4(void* arg0);

// USA: func_ov023_021ed804
extern "C" ARM void func_ov023_021ed804(Struct_ov023_021ed804_4* arg0, Struct_ov023_021ed804_4 arg1, Struct_ov023_021ed804* arg2) {
    func_020e46c4(&arg1);
    arg1.unknown1_0_.unknown_0_ = arg2->unknown_0_;
    arg1.unknown1_0_.unknown_4_ = arg2->unknown_14_;
    arg1.unknown1_0_.unknown_8_.unknown_0_0_ = arg2->unknown_18_.unknown_0_0_;
    arg1.unknown1_0_.unknown_8_.unknown_0_6_ = arg2->unknown_18_.unknown_0_6_;
    arg1.unknown1_0_.unknown_8_.unknown_1_4_ = arg2->unknown_18_.unknown_1_4_;
    arg1.unknown1_0_.unknown_8_.unknown_2_2_ = arg2->unknown_18_.unknown_2_2_;
    arg1.unknown1_0_.unknown_8_.unknown_3_0_ = arg2->unknown_18_.unknown_3_0_;
    arg1.unknown1_0_.unknown_8_.unknown_3_2_ = arg2->unknown_18_.unknown_3_2_;
    arg1.unknown1_0_.unknown_8_.unknown_3_3_ = arg2->unknown_18_.unknown_3_3_;
    arg1.unknown1_0_.unknown_8_.unknown_3_4_ = arg2->unknown_18_.unknown_3_4_;
    arg1.unknown1_0_.unknown_8_.unknown_3_7_ = 0;
    *arg0 = arg1;
}
