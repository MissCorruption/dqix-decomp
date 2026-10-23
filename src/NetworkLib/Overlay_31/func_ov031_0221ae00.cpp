#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0221ae00 {
    unsigned long long unknown_0_;
    unsigned long long unknown_8_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};
extern unsigned char data_ov031_0224e6ac[];
extern unsigned char data_ov031_0224e6b1[];
extern unsigned char data_ov031_0224e6b6[];
extern unsigned char data_ov031_0224e6b8[];

// USA: func_ov031_0221ae00
extern "C" ARM void func_ov031_0221ae00(Struct_ov031_0221ae00* arg0) {
    VectorizedInvertedMemcpy(data_ov031_0224e6ac, &arg0->unknown_0_, 6);
    arg0->unknown_0_ &= 0x7ffffffffffULL;
    VectorizedInvertedMemcpy(data_ov031_0224e6b1, &arg0->unknown_8_, 6);
    arg0->unknown_8_ >>= 3;
    arg0->unknown_8_ &= 0x7ffffffffffULL;
    VectorizedInvertedMemcpy(data_ov031_0224e6b6, &arg0->unknown_10_, 2);
    arg0->unknown_10_ >>= 6;
    arg0->unknown_10_ &= 0x3ff;
    VectorizedInvertedMemcpy(data_ov031_0224e6b8, &arg0->unknown_12_, 2);
}
