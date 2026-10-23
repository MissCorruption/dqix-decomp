#if defined(jpn)
#define R(j,u) (j)
#define data_ov015_02193d14 data_ov015_02194844
#define data_ov015_02193d2c data_ov015_0219485c
#define data_ov015_02193d38 data_ov015_02194868
#define data_ov027_021dd8e0 data_ov027_021de1a0
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_0219050c func_ov015_021910b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Memory/SafeAllocator.h>
#include <NitroSDK/Graphics.h>

struct Struct_0201099c_14;
struct Struct_02020cb8;
struct Struct_0205cfd4;
struct Struct_020a9ea4;

struct Struct_ov003_02158bb8_2 {
    char unknown_0_[0x10];
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    char unknown_12_[2];
};

extern "C" void func_02074af4(Struct_ov003_02158bb8_2* arg0);
extern "C" void func_0204c684(void* arg0);
extern "C" void func_0205a444(char* arg0);
extern "C" void func_0205cfd4(Struct_0205cfd4* arg0);
extern "C" void func_0204af64(Struct_02020cb8* arg0);
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_020a9ea4(Struct_020a9ea4* arg0);

struct Struct_ov003_02158bb8 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    SafeAllocator unknown_50_;
    char unknown_64_[0x80 - 0x64];
    Struct_ov003_02158bb8_2 unknown_80_;
    int unknown_94_;
    char unknown_98_[0xec - 0x98];
    void* unknown_ec_;
    void* unknown_f0_;
    char unknown_f4_[0x1b0 - 0xf4];
    char unknown_1b0_[2][0x20];
    char unknown_1f0_[4][0xe0];
    void* unknown_570_;
    char unknown_574_[0x580 - 0x574];
    unsigned char unknown_580_;
    unsigned char unknown_581_;
    unsigned char unknown_582_;
    unsigned char unknown_583_;
    unsigned char unknown_584_;
    signed char unknown_585_;
    unsigned char unknown_586_;
    unsigned char unknown_587_;
    unsigned char unknown_588_;
    unsigned char unknown_589_;
    signed char unknown_58a_[6];
    unsigned char unknown_590_;
    unsigned char unknown_591_[4];
    char unknown_595_[0x598 - 0x595];
    int unknown_598_;
    unsigned char unknown_59c_;
    unsigned char unknown_59d_;
    unsigned char unknown_59e_;
    unsigned char unknown_59f_;
    unsigned char unknown_5a0_;
    signed char unknown_5a1_;
    char unknown_5a2_[2];
    int unknown_5a4_;
    int unknown_5a8_;
    int unknown_5ac_;
    unsigned char unknown_5b0_;
    unsigned char unknown_5b1_;
    unsigned char unknown_5b2_;
    unsigned char unknown_5b3_;
    unsigned char unknown_5b4_;
    char unknown_5b5_[3];
    char unknown_5b8_[4];
};

// USA: func_ov003_02158bb8
extern "C" ARM void func_ov003_02158bb8(Struct_ov003_02158bb8* arg0)
{
    arg0->unknown_80_.unknown_10_ = 0;
    arg0->unknown_80_.unknown_11_ = 0;
    func_02074af4(&arg0->unknown_80_);
    arg0->unknown_94_ = (DISPCNT & 0x1f00) >> 8;
    DISPCNT = (DISPCNT & ~0x1f00) | 0x100;
    func_0205a444(arg0->unknown_98_);
    arg0->unknown_ec_ = NULL;
    arg0->unknown_f0_ = NULL;
    arg0->unknown_3c_.ResetAllocatorPointer();
    arg0->unknown_28_.ResetAllocatorPointer();
    arg0->unknown_14_.ResetAllocatorPointer();
    arg0->unknown_0_.ResetAllocatorPointer();
    func_0205cfd4((Struct_0205cfd4*)arg0->unknown_f4_);
    for (int var0 = 0; var0 < 2; var0++) {
        func_0204af64((Struct_02020cb8*)arg0->unknown_1b0_[var0]);
    }
    for (int var1 = 0; var1 < 4; var1++) {
        func_0204c684(arg0->unknown_1f0_[var1]);
    }
    func_020dfc40((Struct_0201099c_14*)arg0->unknown_64_);
    arg0->unknown_587_ = 0;
    arg0->unknown_588_ = 0;
    arg0->unknown_580_ = 0;
    arg0->unknown_581_ = 0;
    arg0->unknown_589_ = 0;
    for (int var2 = 0; var2 < 6; var2++) {
        arg0->unknown_58a_[var2] = -1;
    }
    arg0->unknown_590_ = 0;
    for (int var3 = 0; var3 < 4; var3++) {
        arg0->unknown_591_[var3] = 0xff;
    }
    arg0->unknown_584_ = 0;
    arg0->unknown_585_ = -1;
    arg0->unknown_586_ = 0;
    arg0->unknown_5a1_ = -1;
    arg0->unknown_5a4_ = 0;
    arg0->unknown_5a8_ = 0;
    arg0->unknown_5ac_ = 0;
    arg0->unknown_59c_ = 0;
    arg0->unknown_582_ = 0;
    arg0->unknown_583_ = 0;
    arg0->unknown_59d_ = 0;
    arg0->unknown_59e_ = 0;
    arg0->unknown_570_ = NULL;
    arg0->unknown_59f_ = 0;
    arg0->unknown_5a0_ = 0;
    arg0->unknown_5b0_ = 0;
    arg0->unknown_5b1_ = 0;
    arg0->unknown_5b2_ = 1;
    arg0->unknown_5b3_ = 0;
    arg0->unknown_5b4_ = 0;
    func_020a9ea4((Struct_020a9ea4*)arg0->unknown_5b8_);
    arg0->unknown_598_ = 0;
}
