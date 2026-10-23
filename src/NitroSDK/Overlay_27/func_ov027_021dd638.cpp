#include <globaldefs.h>

struct Struct_ov027_021dd638 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

// USA: func_ov027_021dd638
extern "C" ARM int func_ov027_021dd638(Struct_ov027_021dd638* arg0, unsigned char* arg1) {
    unsigned char* var0 = arg1;
    *var0++ = arg0->unknown_0_;
    switch (arg0->unknown_0_) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
        break;
    case 4:
        var0[0] = (unsigned char)arg0->unknown_2_;
        var0[1] = (unsigned char)((arg0->unknown_2_ & 0xff00) >> 8);
        var0[2] = (unsigned char)arg0->unknown_4_;
        var0[3] = (unsigned char)((arg0->unknown_4_ & 0xff00) >> 8);
        var0 += 4;
        break;
    case 0:
    default:
        return 0;
    }
    return (int)var0;
}
