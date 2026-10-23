#include <globaldefs.h>

extern "C" int func_02001aec(unsigned char* arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov031_0221b19c(int arg0, unsigned char* arg1);

struct Struct_ov031_02236094 {
    unsigned char unknown_0_[0xf0];
};

struct Struct_ov031_02236094_2 {
    Struct_ov031_02236094 unknown_0_;
    unsigned char unknown_f0_[0x10];
};

struct Struct_ov031_02236094_3 {
    Struct_ov031_02236094_2 unknown_0_[4];
    Struct_ov031_02236094 unknown_400_;
    unsigned char unknown_4f0_[4];
    unsigned char unknown_4f4_;
    unsigned char unknown_4f5_;
    unsigned char unknown_4f6_;
};

extern Struct_ov031_02236094_3* data_ov031_02290cfc;
extern unsigned char data_ov031_02249248;

// USA: func_ov031_02236094
extern "C" ARM void func_ov031_02236094(unsigned char arg0) {
    Struct_ov031_02236094_3* var0 = data_ov031_02290cfc;
    unsigned char* var1 = var0->unknown_0_[arg0].unknown_0_.unknown_0_;

    var0->unknown_400_ = var0->unknown_0_[arg0].unknown_0_;
    var0->unknown_4f4_ = arg0;

    if (func_02001aec(var1 + 0xc0, &data_ov031_02249248, 4) != 0) {
        data_ov031_02290cfc->unknown_4f5_ = 0;
    } else {
        data_ov031_02290cfc->unknown_4f5_ = 1;
    }

    if (func_02001aec(var1 + 0xc8, &data_ov031_02249248, 4) != 0 ||
        func_02001aec(var1 + 0xcc, &data_ov031_02249248, 4) != 0) {
        data_ov031_02290cfc->unknown_4f6_ = 0;
    } else {
        data_ov031_02290cfc->unknown_4f6_ = 1;
    }

    func_ov031_0221b19c(var1[0xd0], data_ov031_02290cfc->unknown_4f0_);
}
