#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_02011818 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_;
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    signed char unknown_7_;
    char unknown_8_[0xb];
    signed char unknown_13_;
    char unknown_14_[0xc];
    unsigned int unknown_20_;
    unsigned char unknown_24_;
    char unknown_25_;
    unsigned short unknown_26_;
};

#if defined(jpn)
enum { Enum_02011818_0 = 0x280, Enum_02011818_0_2 = 0x240 };
#else
enum { Enum_02011818_0 = 0, Enum_02011818_0_2 = 0 };
#endif

// USA: func_02011818
extern "C" ARM void func_02011818(void* arg0, struct Struct_02011818* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    var0[0x646c - Enum_02011818_0] = 1;
    var0[0x646d - Enum_02011818_0] = arg1->unknown_6_;
    var0[0x6470 - Enum_02011818_0] = arg1->unknown_0_;
    if (arg1->unknown_0_ == 1) {
        var0[0x6471 - Enum_02011818_0] = arg1->unknown_1_;
        *(unsigned short*)(var0 + (0x6472 - Enum_02011818_0)) = arg1->unknown_4_;
    } else {
        var0[0x6471 - Enum_02011818_0] = arg1->unknown_1_;
        *(unsigned short*)(var0 + (0x6472 - Enum_02011818_0)) = arg1->unknown_2_;
        if (arg1->unknown_26_ != 0) *(unsigned short*)(var0 + (0x647e - Enum_02011818_0)) = arg1->unknown_26_;
    }
    if (arg1->unknown_7_ != 0) {
        VectorizedInvertedMemcpy(&arg1->unknown_7_, var0 + (0x64df - Enum_02011818_0_2), 0xa);
    } else {
        var0[0x64df - Enum_02011818_0_2] = 0;
    }
    if (arg1->unknown_13_ != 0) {
        VectorizedInvertedMemcpy(&arg1->unknown_13_, var0 + (0x64e9 - Enum_02011818_0_2), 0xa);
    } else {
        var0[0x64e9 - Enum_02011818_0_2] = 0;
    }
    if (arg1->unknown_24_ != 0) var0[0x647c - Enum_02011818_0] = arg1->unknown_24_;
    *(unsigned int*)(var0 + (0x6478 - Enum_02011818_0)) = arg1->unknown_20_;
    *(int*)(var0 + (0x6474 - Enum_02011818_0)) = -1;
}
