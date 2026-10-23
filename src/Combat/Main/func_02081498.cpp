#include <globaldefs.h>

struct Struct_020813ec_3 {
    char unknown_0_[0xa];
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_0_ : 4;
    unsigned char unknown_12_4_ : 4;
    char unknown_13_[2];
    unsigned char unknown_15_;
};

extern "C" void func_0204f174(void* arg0, short arg1, short arg2, short arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" void func_0204fae8(void* arg0);

struct Struct_02081498 {
    char unknown_0_[4];
    short* unknown_4_;
    char unknown_8_[0x14 - 8];
    unsigned char unknown_14_;
};
extern "C" void func_02081530(void* arg0, void* arg1, struct Struct_02081498* arg2);

// USA: func_02081498
extern "C" ARM void func_02081498(void* arg0, void* arg1, struct Struct_020813ec_3* arg2) {
    int var0 = (arg2->unknown_15_ & 2) != 0;
    func_0204f174(arg1, arg2->unknown_a_, arg2->unknown_c_, arg2->unknown_e_, arg2->unknown_10_, arg2->unknown_12_0_, arg2->unknown_12_4_, var0, 0);
    if (arg2->unknown_15_ & 1) {
        func_0204fae8(arg1);
    }
    func_02081530(arg0, arg1, (struct Struct_02081498*)arg2);
}
