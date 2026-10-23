#include <globaldefs.h>
#include "Resource/GameResources.h"
#if defined(jpn)
enum { Enum_020a88e8_14092 = 0x34fc };
#else
enum { Enum_020a88e8_14092 = 0x370c };
#endif
struct Struct_020a88e8 { unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_, unknown_4_, unknown_5_, unknown_6_, unknown_7_, unknown_8_, unknown_9_; };
struct Struct_02019508 { unsigned short unknown_0_, unknown_2_; signed char unknown_4_0_:7; signed char unknown_4_7_:1; };
struct Struct_02019508_3;
struct Struct_020a88e8_2 { char unknown_0_[3]; unsigned char unknown_3_; };
struct Struct_020a88e8_3 { char unknown_0_[Enum_020a88e8_14092]; Struct_020a88e8_2* unknown_370c_; };
extern "C" Struct_02019508_3* func_02012fe4();
extern "C" Struct_02019508* func_02019508(Struct_02019508_3*, int, int);
extern "C" void func_020133b4(void*, int);
// USA: func_020a88e8
extern "C" ARM void func_020a88e8(Struct_020a88e8* arg0) {
    Struct_02019508_3* var0 = func_02012fe4();
    Struct_02019508* var1 = func_02019508(var0, arg0->unknown_1_, arg0->unknown_2_);
    Struct_02019508* var2 = func_02019508(var0, arg0->unknown_8_, arg0->unknown_9_);
    if (!var1 || !var2) return;
    func_020133b4(var1, 1);
    Struct_020a88e8_2* var3 = ((Struct_020a88e8_3*)GetGameResources())->unknown_370c_;
    if (arg0->unknown_5_) {
        unsigned char var4 = var1->unknown_4_0_;
        if (arg0->unknown_7_ || var3->unknown_3_) { arg0->unknown_7_ = 0; var4 = 31; }
        else { var4+=2; if (var4 > 31) var4 = 31; }
        var1->unknown_4_0_ = (signed char)var4;
    } else {
        if (arg0->unknown_7_ || var3->unknown_3_) { var1->unknown_4_0_ = 0; arg0->unknown_7_ = 0; }
        else if (var1->unknown_4_0_ < 2) var1->unknown_4_0_ = 0;
        else var1->unknown_4_0_ = (signed char)(var1->unknown_4_0_-2);
    }
    if (var1->unknown_4_0_ >= 10) var2->unknown_2_|=4;
    else var2->unknown_2_&=~4;
}
