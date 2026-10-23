#include <globaldefs.h>

struct Struct_020708c8 {
    unsigned char unknown_0_;   // 0x0
    unsigned char unknown_1_;    // 0x1
    unsigned short unknown_2_;   // 0x2
    unsigned char unknown_4_;     // 0x4
    unsigned char unknown_5_[3]; // 0x5-0x7
    int unknown_8_;             // 0x8
};

// USA: func_020708c8
extern "C" ARM void func_020708c8(struct Struct_020708c8* arg0, unsigned int arg1) {
    arg0->unknown_8_ = (int)(16.667f * (float)arg1);
    arg0->unknown_4_ = 1;
    arg0->unknown_0_ = 1;
}
