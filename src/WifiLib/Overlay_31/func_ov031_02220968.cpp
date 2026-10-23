#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_0224f9f0_2 {
    int unknown_0_;
    int unknown_4_;
};
struct Struct_ov031_0224f7f0 {
    char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
};
struct Struct_ov031_0224f884 {
    unsigned int unknown_0_[16];
};
struct Struct_ov031_02220968 {
    unsigned char unknown_0_[5];
};
struct Struct_ov031_02220968_2 {
    unsigned char unknown_0_[13];
};
struct Struct_ov031_02220968_3 {
    unsigned char unknown_0_[16];
};
union Struct_ov031_0224f804 {
    unsigned char unknown_0_[0x20];
    Struct_ov031_02220968 unknown1_0_;
    Struct_ov031_02220968_2 unknown2_0_;
    Struct_ov031_02220968_3 unknown3_0_;
};
union Struct_ov031_02220968_4 {
    char unknown_0_[0x21];
    Struct_ov031_02220968 unknown1_0_;
    Struct_ov031_02220968_2 unknown2_0_;
    Struct_ov031_02220968_3 unknown3_0_;
};

extern char data_ov031_0224f7dc[];
extern char data_ov031_0224f9c4[];
extern Struct_ov031_0224f9f0_2 data_ov031_0224f9f0;
extern Struct_ov031_0224f7f0 data_ov031_0224f7f0;
extern char data_ov031_0224fa28[4][0x28];
extern Struct_ov031_0224f804 data_ov031_0224f804[4];
extern Struct_ov031_0224f884 data_ov031_0224f884;
struct Struct_ov031_0224fac0_2 {
    char unknown_0_[0x40];
    int unknown_40_;
    int unknown_44_;
};
extern Struct_ov031_0224fac0_2 data_ov031_0224fac0;
extern "C" void func_ov031_022208b4(Struct_ov031_0224f804* arg0, const char* arg1, int arg2);

// USA: func_ov031_02220968
extern "C" THUMB int func_ov031_02220968() {
    int var0 = 1;
    strcpy(data_ov031_0224f7dc, data_ov031_0224f9c4);
    switch (data_ov031_0224f9f0.unknown_0_) {
    case 0:
        data_ov031_0224f7f0.unknown_c_ = 0;
        break;
    case 1: {
        if (data_ov031_0224f9f0.unknown_4_ == 0) {
            var0 = -7;
            break;
        }
        data_ov031_0224f7f0.unknown_10_ = data_ov031_0224f9f0.unknown_4_;
        Struct_ov031_02220968_4 var1;
        const Struct_ov031_02220968_4* var2;
        const char (*var3)[0x28] = data_ov031_0224fa28;
        Struct_ov031_0224f804* var4 = data_ov031_0224f804;
        int var5 = 0;
        var2 = &var1;
        do {
            memcpy(var1.unknown_0_, *var3, 0x20);
            var1.unknown_0_[0x20] = 0;
            switch (strlen(var1.unknown_0_)) {
            case 0:
                break;
            case 5:
                data_ov031_0224f7f0.unknown_c_ = 1;
                var4->unknown1_0_ = var2->unknown1_0_;
                break;
            case 10:
                data_ov031_0224f7f0.unknown_c_ = 1;
                func_ov031_022208b4(var4, var2->unknown_0_, 10);
                break;
            case 13:
                data_ov031_0224f7f0.unknown_c_ = 2;
                var4->unknown2_0_ = var2->unknown2_0_;
                break;
            case 26:
                data_ov031_0224f7f0.unknown_c_ = 2;
                func_ov031_022208b4(var4, var2->unknown_0_, 26);
                break;
            case 16:
                data_ov031_0224f7f0.unknown_c_ = 3;
                var4->unknown3_0_ = var2->unknown3_0_;
                break;
            case 32:
                data_ov031_0224f7f0.unknown_c_ = 3;
                func_ov031_022208b4(var4, var2->unknown_0_, 32);
                break;
            default:
                var0 = -7;
                break;
            }
            var3++;
            var4++;
            var5++;
        } while (var5 < 4);
        break;
    }
    case 2:
        data_ov031_0224f7f0.unknown_c_ = 4;
        __memcpy(&data_ov031_0224f884, data_ov031_0224fac0.unknown_0_, sizeof(data_ov031_0224f884));
        break;
    case 3:
        data_ov031_0224f7f0.unknown_c_ = 5;
        __memcpy(&data_ov031_0224f884, data_ov031_0224fac0.unknown_0_, sizeof(data_ov031_0224f884));
        break;
    default:
        var0 = -7;
        break;
    }
    return var0;
}
