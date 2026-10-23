#include <globaldefs.h>

struct Struct_ov031_0220d8f4 {
    char unknown_0_[0x2264];
    unsigned int unknown_2264_;
};
extern Struct_ov031_0220d8f4* data_ov031_0224e53c;

// USA: func_ov031_0220d8f4
extern "C" ARM unsigned short func_ov031_0220d8f4(int arg0) {
    int var0 = 0;
    unsigned int var1 = data_ov031_0224e53c->unknown_2264_;
    int var2 = arg0;
    do {
        if (var1 & (1 << (var2 % 13 + 1))) break;
        var0++;
        var2++;
    } while (var0 < 13);
    return (arg0 + var0) % 13 + 1;
}
