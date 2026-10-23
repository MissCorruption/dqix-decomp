#include <globaldefs.h>

struct Struct_ov027_021e3424_5 {
    unsigned char unknown_0_[4];
    char* unknown_4_;
    unsigned char unknown_8_[0xc - 0x8];
    int unknown_c_;
};

extern Struct_ov027_021e3424_5 data_ov027_021e3424;

// USA: func_ov027_021dd864
extern "C" ARM int func_ov027_021dd864(int arg0) {
    unsigned short var0 = 0;
    unsigned int var1;
    int var2 = data_ov027_021e3424.unknown_c_;
    if (var2 <= 0) goto allSet;
    {
        var1 = *(unsigned int*)(data_ov027_021e3424.unknown_4_ + (arg0 - 1) * 4 + 0x1e0);
        do {
            if (!(var1 & (1 << var0))) return 0;
            var0++;
        } while (var0 < var2);
    }
allSet:
    return 1;
}
