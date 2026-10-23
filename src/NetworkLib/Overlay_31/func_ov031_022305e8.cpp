#include <globaldefs.h>

extern "C" int FastIntDivide(int arg0, unsigned int arg1);

struct Struct_ov031_02290ca0_16 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
};
extern struct Struct_ov031_02290ca0_16 data_ov031_02290ca0;

// USA: func_ov031_022305e8
extern "C" ARM int func_ov031_022305e8(int arg0) {
    int var0 = FastIntDivide(data_ov031_02290ca0.unknown_4_, 0x1d);
    return var0 + arg0;
}
