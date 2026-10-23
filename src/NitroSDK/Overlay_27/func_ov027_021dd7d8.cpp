#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov027_021e3424_4 {
    unsigned char unknown_0_[4];
    char* unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};

extern Struct_ov027_021e3424_4 data_ov027_021e3424;

extern "C" int func_ov027_021dd864(int arg0);

// USA: func_ov027_021dd7d8
#pragma optimize_for_size off
extern "C" ARM void* func_ov027_021dd7d8(unsigned char* arg0, int arg1) {
    if (data_ov027_021e3424.unknown_4_ == 0) return 0;
    unsigned char var0 = arg0[2];
    if (var0 > data_ov027_021e3424.unknown_c_) return 0;
    int var1 = arg1 - 1;
    unsigned int var2 = data_ov027_021e3424.unknown_8_;
    void* var3 = data_ov027_021e3424.unknown_4_ + var1 * 0x20 + var0 * var2;
    VectorizedInvertedMemcpy(arg0 + 3, var3, var2);
    int* var4 = (int*)(data_ov027_021e3424.unknown_4_ + 0x1e0);
    var4[var1] |= (1 << var0);
    if (!func_ov027_021dd864(arg1)) return 0;
    return data_ov027_021e3424.unknown_4_ + var1 * 0x20;
}
