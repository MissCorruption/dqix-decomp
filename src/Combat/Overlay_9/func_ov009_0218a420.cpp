#include <globaldefs.h>

struct Struct_ov009_02189a4c_3 {
    const char* unknown_0_[5];
    signed char unknown_14_[5];
    unsigned char unknown_19_[5];
    unsigned char unknown_1e_;
    char unknown_1f_;
};

struct Struct_ov009_02189a4c_2 {
    unsigned int unknown_0_;
    Struct_ov009_02189a4c_3* unknown_4_;
    char* unknown_8_;
};

// USA: func_ov009_0218a420
extern "C" ARM int func_ov009_0218a420(Struct_ov009_02189a4c_2* arg0, Struct_ov009_02189a4c_3* arg1)
{
    for (int var0 = 0; var0 < arg1->unknown_1e_; var0++)
    {
        bool var1 = true;
        int var2 = arg1->unknown_0_[var0] - (const char*)0;
        if (var2 != -1 && arg0->unknown_8_ != 0)
            var1 = false;
        arg1->unknown_0_[var0] = var1 ? 0 : arg0->unknown_8_ + var2;
    }
    return 1;
}
