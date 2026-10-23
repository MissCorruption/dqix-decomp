#include <globaldefs.h>

struct Struct_0205e804 {
    unsigned char unknown_0_[0x124];
    struct {
        unsigned char unknown_0_[0x1400];
        unsigned char unknown_1400_[0x20];
    } unknown_124_;
};

// USA: func_0205e804
extern "C" ARM void func_0205e804(struct Struct_0205e804* arg0, int arg1) {
    arg0->unknown_124_.unknown_1400_[(unsigned int)arg1 >> 3] &= ~(1 << (arg1 % 8));
}
