#include <globaldefs.h>

struct Struct_02081818 {
    char unknown_0_[6];
    short unknown_6_;    // 0x6
    short unknown_8_;    // 0x8
    short unknown_a_;    // 0xa
    short unknown_c_;    // 0xc
    char unknown_e_[5];
    unsigned char unknown_13_0_ : 4;   // 0x13 bits[3:0]
    unsigned char unknown_13_4_ : 4;   // 0x13 bits[7:4]
};

extern "C" void func_0204f914(void*, int, int, int, int, int);

// USA: func_02081818
extern "C" ARM void func_02081818(int arg0, void* arg1, Struct_02081818* arg2) {
    func_0204f914(arg1, arg2->unknown_13_4_, arg2->unknown_6_, arg2->unknown_8_,
        (short)(arg2->unknown_6_ + arg2->unknown_a_), (short)(arg2->unknown_8_ + arg2->unknown_c_));
}
