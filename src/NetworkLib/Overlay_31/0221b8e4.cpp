#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern char data_ov031_0224e6ac[14];
union Struct_ov031_0221b8e4 {
    unsigned long long unknown_0_;
    struct { unsigned int unknown_0_; unsigned int unknown_4_; } unknown1_0_;
};

// USA: func_ov031_0221b8e4
extern "C" ARM void* func_ov031_0221b8e4(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    Struct_ov031_0221b8e4 var1;
    unsigned int var2 = *(unsigned int*)(var0 + 8);
    unsigned int var3 = *(unsigned int*)(var0 + 12);
    var1.unknown1_0_.unknown_4_ = var3;
    var1.unknown1_0_.unknown_0_ = var2;
    VectorizedInvertedMemcpy(var0, data_ov031_0224e6ac, 5);
    data_ov031_0224e6ac[5] = (char)(((*(unsigned long long*)var0 >> 40) & 7) | ((var1.unknown_0_ & 0x1f) << 3));
    var1.unknown_0_ >>= 5;
    VectorizedInvertedMemcpy(&var1, data_ov031_0224e6ac + 6, 4);
    unsigned short var4 = *(unsigned short*)(var0 + 0x10);
    data_ov031_0224e6ac[10] = (char)(((var1.unknown_0_ >> 32) & 0x3f) | ((var4 & 3) << 6));
    data_ov031_0224e6ac[11] = (char)(*(unsigned short*)(var0 + 0x10) >> 2);
    VectorizedInvertedMemcpy(var0 + 0x12, data_ov031_0224e6ac + 12, 2);
    return data_ov031_0224e6ac;
}
