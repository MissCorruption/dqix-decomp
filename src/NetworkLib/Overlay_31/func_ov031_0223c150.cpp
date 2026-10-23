#include <globaldefs.h>
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Matrix.h"

struct Struct_ov031_0223c150 {
    void* unknown_0_;
    short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_[2];
};
extern unsigned char data_ov031_022493a0[];
extern Struct_ov031_0223c150* data_ov031_02290d34;
extern "C" void func_ov031_0223e2c0(int, void*);

// USA: func_ov031_0223c150
extern "C" ARM void func_ov031_0223c150(void* arg0, Struct_ov031_0223c150* arg1) {
    unsigned char var0[4] = { data_ov031_022493a0[4], data_ov031_022493a0[5], data_ov031_022493a0[6], data_ov031_022493a0[7] };
    signed char var1[4] = { data_ov031_022493a0[0], data_ov031_022493a0[1], data_ov031_022493a0[2], data_ov031_022493a0[3] };
    arg1->unknown_4_++;
    int var2 = FastIntDivide(arg1->unknown_4_ << 4, arg1->unknown_6_);
    unsigned char var3 = var0[arg1->unknown_8_];
    if (var3 & 1) var2 = 16 - var2;
    if (var3 & 16) var2 = -var2;
    if (arg1 == data_ov031_02290d34) ColorEffect_ChangeBrightness(0x04001050, var2);
    else ColorEffect_ChangeBrightness(0x04000050, var2);
    if (arg1->unknown_4_ >= arg1->unknown_6_) {
        if (arg1 == data_ov031_02290d34) ColorEffect_ChangeBrightness(0x04001050, var1[arg1->unknown_8_]);
        else ColorEffect_ChangeBrightness(0x04000050, var1[arg1->unknown_8_]);
        arg1->unknown_9_ = 0;
        func_ov031_0223e2c0(1, arg0);
    }
}
