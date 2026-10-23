#include <globaldefs.h>

struct Struct_02111654 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

extern Struct_02111654 data_02111654;
extern unsigned int DisableSpecificInterrupts(unsigned int mask);

// USA: func_020c9288
extern "C" ARM void func_020c9288() {
    if (data_02111654.unknown_0_ != 0) {
        return;
    }
    data_02111654.unknown_0_ = 1;
    data_02111654.unknown_c_ = 0;
    data_02111654.unknown_10_ = 0;
    DisableSpecificInterrupts(4);
    data_02111654.unknown_8_ = 0;
    data_02111654.unknown_4_ = 0;
}
