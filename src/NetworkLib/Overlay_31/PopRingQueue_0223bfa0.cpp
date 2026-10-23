#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

extern "C" int FastIntModulus(int arg0, int arg1);

struct Struct_ov031_0223bfa0 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

// USA: func_ov031_0223bfa0
extern "C" ARM int func_ov031_0223bfa0(struct Struct_ov031_0223bfa0* arg0) {
    int var0 = 0;
    unsigned int var1 = DisableSpecificInterrupts(1);
    if (arg0->unknown_2_ != arg0->unknown_3_) {
        int var2 = FastIntModulus(arg0->unknown_3_ + arg0->unknown_0_ - 1, arg0->unknown_0_);
        arg0->unknown_3_ = var2;
        var0 = *(int*)((char*)arg0 + arg0->unknown_3_ * 4 + 4);
    }
    EnableSpecificInterrupts(var1);
    return var0;
}
