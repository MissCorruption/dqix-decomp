#include <globaldefs.h>

struct Struct_ov031_02250c0c_2 {
    unsigned char unknown_0_;
    char unknown_1_[7];
    union {
        unsigned int unknown_0_;
        struct {
            unsigned int unknown_0_0_ : 4;
            unsigned int unknown_0_4_ : 28;
        } unknown1_0_;
    } unknown_8_;
};
extern Struct_ov031_02250c0c_2 data_ov031_02250c0c;

// USA: func_ov031_022270ac
extern "C" ARM int func_ov031_022270ac(int arg0, unsigned int arg1) {
    data_ov031_02250c0c.unknown_0_ = arg0;
    data_ov031_02250c0c.unknown_8_.unknown_0_ = arg1;

    if (arg0 < 0 || arg0 > 6) return 0;
    if (data_ov031_02250c0c.unknown_8_.unknown1_0_.unknown_0_0_ > 1) return 0;
    if (data_ov031_02250c0c.unknown_8_.unknown1_0_.unknown_0_4_ & 2) return 0;
    if (arg0 != 0 && (data_ov031_02250c0c.unknown_8_.unknown1_0_.unknown_0_4_ & 1)) return 0;
    if (arg0 == 0 && !(data_ov031_02250c0c.unknown_8_.unknown1_0_.unknown_0_4_ & 1)) return 0;
    return 1;
}
