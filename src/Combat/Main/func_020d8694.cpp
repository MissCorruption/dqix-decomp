#include <globaldefs.h>

unsigned int EnableSpecificInterrupts(unsigned int mask);
unsigned int DisableSpecificInterrupts(unsigned int mask);

struct Struct_0214e4a0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned int unknown_4_;
};
extern Struct_0214e4a0 data_0214e4a0;

// USA: func_020d8694
extern "C" ARM void func_020d8694(void) {
    if (data_0214e4a0.unknown_4_ & 1) {
        EnableSpecificInterrupts(4);
    } else {
        DisableSpecificInterrupts(4);
    }
    data_0214e4a0.unknown_4_ >>= 1;
}
