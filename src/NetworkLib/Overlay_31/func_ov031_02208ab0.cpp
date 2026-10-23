#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/NetworkProtocolVersion.h"

struct Struct_ov031_02208ab0 {
    unsigned char unknown_0_[0x30];
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    unsigned short unknown_32_;
    unsigned char unknown_34_[0x20];
    unsigned char unknown_54_[0x401];
    unsigned char unknown_455_;
};

extern "C" int func_ov031_02208a40(const unsigned char*, int, int);

// USA: func_ov031_02208ab0
extern "C" ARM int func_ov031_02208ab0(Struct_ov031_02208ab0* arg0, const unsigned char* arg1) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    unsigned short var5;
    var3 = func_ov031_02208aa0(arg1[0], arg1[1]);
    if (!var3) return var3;
    var1 = (arg1[2] << 8) + arg1[3];
    var5 = func_ov031_02208a40(arg1 + 8, var1 / 3, 3);
    if (!var5) return var5;
    arg0->unknown_32_ = var5;
    var4 = (arg1[4] << 8) + arg1[5];
    var2 = (arg1[6] << 8) + arg1[7];
    arg0->unknown_30_ = 0;
    var0 = 8 + var1 + var4;
    if (var2 >= 32) {
        VectorizedInvertedMemcpy(arg1 + var0, arg0->unknown_34_, 32);
    } else {
        VectorizedMemset(arg0->unknown_34_, 0, 32 - var2);
        VectorizedInvertedMemcpy(arg1 + var0, arg0->unknown_34_ + 32 - var2, var2);
    }
    arg0->unknown_455_ = 1;
    return 1;
}
