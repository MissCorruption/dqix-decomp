#include <globaldefs.h>

struct Struct_ov024_021fd858_2 {
    char unknown_0_[0x18];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 27;
};

class Struct_ov024_021fd858 {
public:
    char unknown_0_[0x64c];
    Struct_ov024_021fd858_2* unknown_64c_;
    char unknown_650_[0x665 - 0x650];
    unsigned char unknown_665_;
};

typedef void (Struct_ov024_021fd858::*Type_ov024_021fb490)();

struct Struct_ov024_02200150 { char unknown_0_[8]; unsigned int unknown_8_; };
extern Struct_ov024_02200150 data_ov024_02200150;
extern Type_ov024_021fb490 data_ov024_021ffcec[23];
extern const Type_ov024_021fb490 data_020e6d5c;

// USA: func_ov024_021fd858
extern "C" ARM void func_ov024_021fd858(Struct_ov024_021fd858* arg0) {
    Struct_ov024_021fd858_2* var0 = arg0->unknown_64c_;
    arg0->unknown_665_ |= 0x80;
    unsigned int var1 = data_ov024_02200150.unknown_8_;
    if (!(var1 & 1)) {
        data_ov024_021ffcec[0] = data_020e6d5c;
        data_ov024_021ffcec[3] = data_020e6d5c;
        data_ov024_021ffcec[12] = data_020e6d5c;
        data_ov024_021ffcec[13] = data_020e6d5c;
        data_ov024_021ffcec[14] = data_020e6d5c;
        data_ov024_021ffcec[15] = data_020e6d5c;
        data_ov024_021ffcec[16] = data_020e6d5c;
        data_ov024_021ffcec[17] = data_020e6d5c;
        data_ov024_021ffcec[18] = data_020e6d5c;
        data_ov024_021ffcec[21] = data_020e6d5c;
        data_ov024_021ffcec[22] = data_020e6d5c;
        data_ov024_02200150.unknown_8_ = var1 | 1;
    }
    unsigned int var2 = var0->unknown_18_0_;
    if (var2 < 23 && data_ov024_021ffcec[var2] != 0) {
        (arg0->*data_ov024_021ffcec[var2])();
    }
}
