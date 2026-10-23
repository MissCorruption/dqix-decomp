#include <globaldefs.h>
struct Struct_021015a0_5 {
    char unknown_0_[0x10];
    int unknown_10_;
    char unknown_14_[0x18];
    int unknown_2c_, unknown_30_, unknown_34_, unknown_38_;
};
struct Struct_02101640_2 {
    char unknown_0_[0xc];
    unsigned short unknown_c_, unknown_e_, unknown_10_, unknown_12_;
    unsigned short unknown_14_, unknown_16_, unknown_18_;
    char unknown_1a_[0x18];
    unsigned short unknown_32_, unknown_34_, unknown_36_;
};
struct Struct_0202db64;
extern Struct_021015a0_5 data_021015a0;
extern Struct_02101640_2 data_02101640;
extern "C" int func_020d4b58();
extern "C" int func_020d507c(int, Struct_0202db64*);
extern "C" void func_0202c848(int);
extern "C" void func_0202c864(unsigned short*);
// USA: func_0202db64
extern "C" ARM int func_0202db64(int arg0, int arg1, int arg2) {
    data_021015a0.unknown_2c_ = 0x340;
    data_021015a0.unknown_38_ = 0x1e0;
    data_021015a0.unknown_34_ = arg0;
    data_021015a0.unknown_10_ = 3;
    data_02101640.unknown_c_ = arg1;
    data_02101640.unknown_32_ = arg2;
    data_02101640.unknown_18_ = func_020d4b58();
    data_02101640.unknown_34_ = 0x1d4;
    data_02101640.unknown_36_ = 0x74;
    data_02101640.unknown_10_ = 3;
    data_02101640.unknown_16_ = 0;
    data_02101640.unknown_12_ = 0;
    data_02101640.unknown_e_ = 1;
    data_02101640.unknown_14_ = arg0 == 2;
    if (arg0 == 0 || arg0 == 2 || arg0 == 4) {
        data_021015a0.unknown_10_ = 3;
        int var0 = func_020d507c((int)func_0202c864, (Struct_0202db64*)&data_02101640);
        if (var0 == 2) return 1;
        func_0202c848(var0);
        data_021015a0.unknown_10_ = 9;
        return 0;
    }
    return 0;
}
