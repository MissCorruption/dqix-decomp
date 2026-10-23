#include <globaldefs.h>

struct Struct_ov000_0215767c_8 {
    char unknown_0_[0x20];
    short unknown_20_;
};

struct Struct_ov000_0215440c_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

struct Struct_ov000_02182c74 {
    short unknown_0_[8];
};

struct Struct_ov000_0215767c_2 {
    char unknown_0_[0x81b1];
    unsigned char unknown_81b1_0_ : 4;
    unsigned char unknown_81b1_4_ : 2;
    char unknown_81b2_[0x8e14 - 0x81b2];
    signed char unknown_8e14_;
};

extern Struct_ov000_02182c74 data_ov000_02182c74;

extern "C" void func_ov000_02155e94(Struct_ov000_0215767c_2* arg0);
extern "C" int func_ov000_0215e9fc(Struct_ov000_0215767c_2* arg0, short* arg1, int arg2, int arg3);
extern "C" void func_ov000_0215858c(Struct_ov000_0215767c_2* arg0, int arg1, Struct_ov000_0215767c_8* arg2);
extern "C" void func_ov000_021599f4(Struct_ov000_0215767c_2* arg0, int arg1);
extern "C" Struct_ov000_0215767c_8* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);

// USA: func_ov000_02157d3c
extern "C" ARM void func_ov000_02157d3c(Struct_ov000_0215767c_2* arg0, Struct_ov000_0215440c_2* arg1, int arg2) {
    func_ov000_02155e94(arg0);
    Struct_ov000_02182c74 var0 = data_ov000_02182c74;
    if (func_ov000_0215e9fc(arg0, var0.unknown_0_, 8, 9) <= 0) {
        arg0->unknown_8e14_ = 2;
    } else if (arg0->unknown_81b1_0_ == 0) {
        arg0->unknown_8e14_ = 1;
    } else {
        arg0->unknown_8e14_ = 0;
    }
    if (arg0->unknown_8e14_ == 0 && arg2 == 0) {
        int var1;
        for (var1 = 0; var1 < arg1->unknown_8_; var1++) {
            Struct_ov000_0215767c_8* var2 = func_ov000_02160094(arg1, var1);
            if (var2 != 0) {
                func_ov000_0215858c(arg0, var2->unknown_20_, var2);
                func_ov000_021599f4(arg0, var2->unknown_20_);
            }
        }
    }
}
