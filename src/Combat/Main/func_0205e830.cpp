#include <globaldefs.h>

struct Struct_0205e57c_6 {
    unsigned char unknown_0_[0x124];
    struct {
        unsigned char unknown_0_[0x1400];
        unsigned char unknown_1400_[0x20];
    } unknown_124_;
};

// USA: func_0205e830
extern "C" ARM int func_0205e830(struct Struct_0205e57c_6* arg0, int arg1) {
    return (1 << (arg1 % 8)) & arg0->unknown_124_.unknown_1400_[(unsigned int)arg1 >> 3];
}
