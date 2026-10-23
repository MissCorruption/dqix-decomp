#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x5af0
#define REGION_OFFSET_1 0x5ac0
#else
#define REGION_OFFSET_0 0x5900
#define REGION_OFFSET_1 0x58d0
#endif


struct Struct_ov000_021633b8 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned char unknown_4_; signed char unknown_5_; };

// USA: func_ov000_021633b8
extern "C" ARM void func_ov000_021633b8(char* arg0, struct Struct_ov000_021633b8* arg1) {
    unsigned char* var0 = (unsigned char*)(arg0 + REGION_OFFSET_0);
    unsigned char var1 = (*var0)++;
    struct Struct_ov000_021633b8* var2 = (struct Struct_ov000_021633b8*)(arg0 + REGION_OFFSET_1) + var1;
    var2->unknown_0_ = arg1->unknown_0_;
    var2->unknown_2_ = arg1->unknown_2_;
    var2->unknown_4_ = arg1->unknown_4_;
    var2->unknown_5_ = arg1->unknown_5_;
}
