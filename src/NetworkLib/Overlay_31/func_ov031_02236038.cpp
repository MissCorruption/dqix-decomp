#include <globaldefs.h>

struct Struct_ov031_02235fb0 {
    unsigned char unknown_0_[4];
};

struct Struct_ov031_02235fb0_2 {
    unsigned char unknown_0_[0x4cc];
    Struct_ov031_02235fb0 unknown_4cc_;
};

extern Struct_ov031_02235fb0_2* data_ov031_02290cfc;
extern const char data_ov031_0224be50[];
extern "C" int func_020c7130(char*, const char*, ...);

// USA: func_ov031_02236038
extern "C" ARM void func_ov031_02236038(char* arg0) {
    Struct_ov031_02235fb0* var0 = &data_ov031_02290cfc->unknown_4cc_;
    unsigned char var1 = data_ov031_02290cfc->unknown_4cc_.unknown_0_[0];
    unsigned char var2 = var0->unknown_0_[1];
    unsigned char var3 = var0->unknown_0_[2];
    unsigned char var4 = var0->unknown_0_[3];
    func_020c7130(arg0, data_ov031_0224be50, var1, var2, var3, var4);
}
