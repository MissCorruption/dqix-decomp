#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

struct Struct_020dbd9c {
    char unknown_0_[0x10];
    int unknown_10_;
    unsigned char unknown_14_;
};

struct Struct_ov006_02154614_2 {
    char unknown_0_[R(0x6f0,0x774)];
    unsigned short unknown_774_;
    char unknown_776_[0x7];
    signed char unknown_77d_;
    char unknown_77e_[0x1d];
    unsigned char unknown_79b_0_ : 1;
    unsigned char unknown_79b_1_ : 1;
};

struct Struct_ov006_02156e54 {
    char unknown_0_[0x7c];
};

struct Struct_ov006_02154614 {
#if !defined(jpn)
    char unknown_0_[3][0x80];
#endif
    SafeAllocator* unknown_180_;
    SafeAllocator* unknown_184_;
    SafeAllocator* unknown_188_;
    SafeAllocator unknown_18c_;
    void* unknown_1a0_;
    void* unknown_1a4_;
    unsigned char* unknown_1a8_;
    void* unknown_1ac_;
    void* unknown_1b0_;
    void* unknown_1b4_;
    void* unknown_1b8_;
    int unknown_1bc_;
    void* unknown_1c0_;
    unsigned char* unknown_1c4_;
    void* unknown_1c8_;
    void* unknown_1cc_;
    void* unknown_1d0_;
    void* unknown_1d4_;
    void* unknown_1d8_;
    void* unknown_1dc_;
    void* unknown_1e0_;
    char unknown_1e4_[0x54];
    Object3D unknown_238_;
    Object3D unknown_2e4_;
    Object3D unknown_390_;
    Object3D unknown_43c_;
    Object3D unknown_4e8_;
    char unknown_594_[0x38];
    char unknown_5cc_[0x2c8];
    Struct_ov006_02156e54 unknown_894_[4];
    SafeAllocator unknown_a84_[4];
    int unknown_ad4_;
    int unknown_ad8_;
    unsigned char unknown_adc_;
    unsigned char unknown_add_;
    unsigned char unknown_ade_;
    unsigned char unknown_adf_;
    unsigned char unknown_ae0_;
    unsigned char unknown_ae1_;
    unsigned short unknown_ae2_;
    Struct_ov006_02154614_2 unknown_ae4_;
    SafeAllocator* unknown_1280_;
    SafeAllocator* unknown_1284_;
    char unknown_1288_[0x18];
    Struct_020dbd9c unknown_12a0_;
    short unknown_12b8_;
    signed char unknown_12ba_;
    unsigned char unknown_12bb_;
    unsigned char unknown_12bc_;
    unsigned char unknown_12bd_;
};

extern "C" void func_ov023_021dc134(Struct_ov006_02154614_2* arg0, short arg1, signed char arg2);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_ov006_0215479c(Struct_ov006_02156e54* arg0);
extern "C" void func_020dbd9c(Struct_020dbd9c* arg0);

// USA: func_ov006_02154614
extern "C" ARM void func_ov006_02154614(Struct_ov006_02154614* arg0) {
#if !defined(jpn)
    memset(arg0->unknown_0_, 0, sizeof(arg0->unknown_0_));
#endif
    arg0->unknown_180_ = 0;
    arg0->unknown_184_ = 0;
    arg0->unknown_188_ = 0;
    arg0->unknown_1a0_ = 0;
    arg0->unknown_1a8_ = 0;
    arg0->unknown_1ac_ = 0;
    arg0->unknown_1b0_ = 0;
    arg0->unknown_1b4_ = 0;
    arg0->unknown_1b8_ = 0;
    arg0->unknown_1bc_ = 0;
    arg0->unknown_1c0_ = 0;
    arg0->unknown_1c4_ = 0;
    arg0->unknown_1c8_ = 0;
    arg0->unknown_1cc_ = 0;
    arg0->unknown_1d0_ = 0;
    arg0->unknown_1d4_ = 0;
    arg0->unknown_1d8_ = 0;
    arg0->unknown_1dc_ = 0;
    arg0->unknown_1e0_ = 0;
    arg0->unknown_1284_ = 0;
    arg0->unknown_1280_ = 0;
    func_ov023_021dc134(&arg0->unknown_ae4_, -1, 1);
    arg0->unknown_ae4_.unknown_774_ |= 0x10 | 0x200;
    func_0205a444(arg0->unknown_1e4_);
    arg0->unknown_238_.Initialize();
    arg0->unknown_2e4_.Initialize();
    arg0->unknown_390_.Initialize();
    arg0->unknown_43c_.Initialize();
    arg0->unknown_4e8_.Initialize();
    memset(arg0->unknown_594_, 0, sizeof(arg0->unknown_594_));
    arg0->unknown_18c_.ResetAllocatorPointer();
    for (unsigned char var0 = 0; var0 < 4; var0++) {
        func_ov006_0215479c(&arg0->unknown_894_[var0]);
        arg0->unknown_a84_[var0].ResetAllocatorPointer();
    }
    arg0->unknown_ad4_ = -1;
    arg0->unknown_ad8_ = -1;
    arg0->unknown_adc_ = 0;
    arg0->unknown_add_ = 0;
    arg0->unknown_ade_ = 0;
    arg0->unknown_adf_ = 0;
    arg0->unknown_ae0_ = 0;
    arg0->unknown_ae2_ = 0;
    arg0->unknown_12bb_ = 0;
    arg0->unknown_12b8_ = 0;
    arg0->unknown_12ba_ = 0;
    arg0->unknown_12bc_ = 0;
    func_020dbd9c(&arg0->unknown_12a0_);
    arg0->unknown_12bd_ = 0;
}
