#include <globaldefs.h>

struct Struct_0203c1c8 {
#if defined(jpn)
    short unknown1_0_[10];
#endif
    int unknown_0_;
    int unknown_4_;
#if defined(jpn)
    int unknown_1c_;
    int unknown_20_;
#endif
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
#if defined(jpn)
    signed int unknown_30_0_ : 16;
    unsigned int unknown_32_0_ : 8;
    unsigned int unknown_33_0_ : 8;
    int unknown_34_;
#else
    short unknown_14_;
#endif
};

#if defined(jpn)
extern "C" void func_0203c1c8(Struct_0203c1c8* arg0, int arg1);
#define REGION_COUNT 2
#else
extern "C" void func_0203c1c8(Struct_0203c1c8* arg0);
#define REGION_COUNT 1
#endif

// USA: func_ov000_021704d8
extern "C" ARM void func_ov000_021704d8(Struct_0203c1c8* arg0, int* arg1, int* arg2, int* arg3) {
    arg0->unknown_c_ = 2;
    arg0->unknown_10_ = 1;
    int var0;
    for (var0 = 0; var0 < REGION_COUNT; var0++) {
        int var1 = arg1[var0];
        int var2 = arg2[var0];
        arg0->unknown_0_ = var1;
        arg0->unknown_4_ = var2;
        arg0->unknown_8_ = arg3[var0];
#if defined(jpn)
        func_0203c1c8(arg0, 10);
#else
        func_0203c1c8(arg0);
#endif
    }
    arg0->unknown_8_ = 0;
}
