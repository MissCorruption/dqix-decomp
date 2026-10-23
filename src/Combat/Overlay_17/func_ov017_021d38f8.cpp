#include <globaldefs.h>
#include "Combat/LootPointEvent.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d38f8 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    Struct_0208ec78 unknown_4_;
};

struct Struct_ov017_021d38f8_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021d38f8 unknown_4_;
    unsigned char unknown_c_[8];

    Struct_ov017_021d38f8* inline_ov017_021d38f8() { return &unknown_4_; }
};

// USA: func_ov017_021d38f8
extern "C" ARM void func_ov017_021d38f8(unsigned char arg0, signed char arg1,
                                   unsigned char arg2, unsigned char arg3,
                                   const Struct_0208ec78* arg4) {
    void* var0 = func_0202ae24();
    Struct_ov017_021d38f8_2 var1;
    var1.unknown_0_ = 0xb7;
    Struct_ov017_021d38f8* var2 = var1.inline_ov017_021d38f8();
    var2->unknown_0_ = arg0;
    var2->unknown_1_ = arg1;
    var2->unknown_2_ = arg2;
    var2->unknown_3_ = arg3;
    var2->unknown_4_ = *arg4;
    func_0205e330(var0, &var1, 0);
}
