#include <globaldefs.h>
#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"
#include "Combat/MapDisplay.h"
#include "World/Object3D.h"

struct Struct_0201099c_14 {
    char unknown_0_[0x18];
};

struct Struct_0205cfd4 {
    char unknown_0_[0xbc];
};

struct Struct_ov006_02158478 {
    char unknown_0_[0xe0];
};

struct Struct_0205bef8 {
    int unknown_0_[0x10];
};

struct Struct_ov009_021847c4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

extern "C" unsigned int* func_020d6c00();
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020de848(void* arg0);
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
#if defined(jpn)
#define func_ov009_021847ec func_ov009_02185850
#endif
extern "C" void func_ov009_021847ec(void* arg0);
extern "C" void func_0204af64(Struct_02020cb8* arg0);
extern "C" void func_0205cfd4(Struct_0205cfd4* arg0);
extern "C" void func_0204c684(Struct_ov006_02158478* arg0);
extern "C" void func_0205bef8(Struct_0205bef8* arg0);
extern "C" void func_ov009_021847c4(Struct_ov009_021847c4* arg0);
extern "C" int func_020424e4(int arg0, int arg1);

extern char data_ov009_0218aca4[];

struct Struct_ov009_021842a0_2 {
#if defined(jpn)
    SafeAllocator unknown_0_[8];
#else
    SafeAllocator unknown_0_[9];
#endif
    SafeAllocator* unknown_b4_;
    SafeAllocator* unknown_b8_;
#if !defined(jpn)
    void* unknown_bc_;
    void* unknown_c0_;
    void* unknown_c4_;
#endif
    char unknown_c8_[0x18];
    Struct_0201099c_14 unknown_e0_;
    void* unknown_f8_;
#if defined(jpn)
    char unknown_fc_[0x20];
#else
    char unknown_fc_[0x3c];
#endif
    Struct_02020cb8 unknown_138_[6];
    Struct_0205cfd4 unknown_1f8_[2];
    Struct_ov006_02158478 unknown_370_[1];
    Struct_ov006_02158478 unknown_450_[4];
    void* unknown_7d0_;
    void* unknown_7d4_;
    void* unknown_7d8_;
    void* unknown_7dc_;
    void* unknown_7e0_;
    void* unknown_7e4_;
    void* unknown_7e8_;
    void* unknown_7ec_;
    void* unknown_7f0_[2];
    void* unknown_7f8_;
    void* unknown_7fc_;
    int unknown_800_;
    int unknown_804_;
    char unknown_808_[0x70];
    Object3D unknown_878_;
    char unknown_924_[0x2c8];
    Struct_0205bef8 unknown_bec_;
    Struct_ov009_021847c4 unknown_c2c_;
    short unknown_c4c_;
    short unknown_c4e_;
    short unknown_c50_;
    short unknown_c52_;
    short unknown_c54_;
    short unknown_c56_;
    signed char unknown_c58_;
    unsigned char unknown_c59_;
    char unknown_c5a_[2];
    int unknown_c5c_[3];
    char unknown_c68_[0x70];
    Object3D unknown_cd8_;
    unsigned char unknown_d84_;
    unsigned char unknown_d85_;
    char unknown_d86_[2];
    void* unknown_d88_;
    int unknown_d8c_;
    int unknown_d90_;
    unsigned char unknown_d94_;
    unsigned char unknown_d95_;
    short unknown_d96_;
    short unknown_d98_;
    char unknown_d9a_[2];
    unsigned int unknown_d9c_;
    signed char unknown_da0_[2];
    unsigned char unknown_da2_;
    unsigned char unknown_da3_;
    unsigned char unknown_da4_[2];
    unsigned char unknown_da6_[2];
    unsigned char unknown_da8_[2];
    unsigned char unknown_daa_[2];
    unsigned char unknown_dac_[2];
    unsigned char unknown_dae_[2];
#if defined(jpn)
    char unknown_d74_[2][11];
    unsigned char unknown_d8a_[2];
    unsigned char unknown1_d8c_;
    unsigned char unknown_d8d_;
    unsigned char unknown_db6_;
    char unknown_d8f_;
#else
    char** unknown_db0_;
    unsigned char unknown_db4_;
    unsigned char unknown_db5_;
    unsigned char unknown_db6_;
    char unknown_db7_;
#endif
};

// USA: func_ov009_0218454c
extern "C" ARM void func_ov009_0218454c(Struct_ov009_021842a0_2* arg0, int arg1, int arg2)
{
    arg0->unknown_d95_ = arg2;
    if (arg0->unknown_d95_ == 1)
        func_020466e4(func_020d6c00(), 0xf);
    arg0->unknown_0_[0].ResetAllocatorPointer();
    arg0->unknown_0_[1].ResetAllocatorPointer();
    arg0->unknown_0_[2].ResetAllocatorPointer();
    arg0->unknown_0_[3].ResetAllocatorPointer();
    arg0->unknown_0_[4].ResetAllocatorPointer();
    arg0->unknown_0_[5].ResetAllocatorPointer();
    arg0->unknown_0_[6].ResetAllocatorPointer();
    arg0->unknown_0_[7].ResetAllocatorPointer();
#if !defined(jpn)
    arg0->unknown_0_[8].ResetAllocatorPointer();
#endif
    arg0->unknown_b4_ = NULL;
    arg0->unknown_b8_ = NULL;
#if !defined(jpn)
    arg0->unknown_c0_ = NULL;
    arg0->unknown_c4_ = NULL;
#endif
    func_020de848(&arg0->unknown_c8_);
    func_020dfc40(&arg0->unknown_e0_);
    arg0->unknown_f8_ = NULL;
    func_ov009_021847ec(&arg0->unknown_fc_);
    func_0204af64(&arg0->unknown_138_[0]);
    func_0204af64(&arg0->unknown_138_[1]);
    func_0204af64(&arg0->unknown_138_[2]);
    func_0204af64(&arg0->unknown_138_[3]);
    func_0204af64(&arg0->unknown_138_[4]);
    func_0204af64(&arg0->unknown_138_[5]);
    func_0205cfd4(&arg0->unknown_1f8_[0]);
    func_0205cfd4(&arg0->unknown_1f8_[1]);
    for (int var0 = 0; var0 < 1; var0++)
        func_0204c684(&arg0->unknown_370_[var0]);
    for (int var1 = 0; var1 < 4; var1++)
        func_0204c684(&arg0->unknown_450_[var1]);
    arg0->unknown_7d0_ = NULL;
    arg0->unknown_7d4_ = NULL;
    arg0->unknown_7d8_ = NULL;
    arg0->unknown_7dc_ = NULL;
    arg0->unknown_7e0_ = NULL;
    arg0->unknown_7e4_ = NULL;
    arg0->unknown_7e8_ = NULL;
    arg0->unknown_7ec_ = NULL;
    arg0->unknown_7f0_[0] = NULL;
    arg0->unknown_7f0_[1] = NULL;
    arg0->unknown_7f8_ = NULL;
    arg0->unknown_7fc_ = NULL;
    arg0->unknown_800_ = 0;
    arg0->unknown_804_ = 0;
    arg0->unknown_878_.Initialize();
    arg0->unknown_cd8_.Initialize();
    func_0205bef8(&arg0->unknown_bec_);
    func_ov009_021847c4(&arg0->unknown_c2c_);
    arg0->unknown_c4c_ = -1;
    arg0->unknown_c4e_ = -1;
    arg0->unknown_c50_ = -1;
    arg0->unknown_c52_ = -1;
    arg0->unknown_c54_ = -1;
    arg0->unknown_c56_ = -1;
    arg0->unknown_c58_ = 0;
    arg0->unknown_c59_ = 0;
    arg0->unknown_d84_ = 0;
    arg0->unknown_d85_ = 0;
    arg0->unknown_d88_ = NULL;
    arg0->unknown_d8c_ = -1;
    arg0->unknown_d90_ = 0;
    arg0->unknown_d94_ = 0;
    arg0->unknown_d96_ = 0;
    arg0->unknown_d98_ = 0;
    memset(&arg0->unknown_d9c_, 0, sizeof(arg0->unknown_d9c_));
    for (int var2 = 0; var2 < 2; var2++)
        arg0->unknown_da0_[var2] = 1;
    arg0->unknown_da2_ = arg1;
    arg0->unknown_da3_ = 0;
    for (int var3 = 0; var3 < 2; var3++)
    {
        arg0->unknown_da4_[var3] = 0;
        arg0->unknown_da6_[var3] = 0;
        arg0->unknown_da8_[var3] = 0;
        arg0->unknown_daa_[var3] = 0;
        arg0->unknown_dac_[var3] = 0;
        arg0->unknown_dae_[var3] = 0;
#if defined(jpn)
        memset(arg0->unknown_d74_[var3], 0, sizeof(arg0->unknown_d74_[var3]));
        arg0->unknown_d8a_[var3] = 0;
#endif
    }
#if defined(jpn)
    arg0->unknown1_d8c_ = 0;
    arg0->unknown_d8d_ = 0;
#else
    arg0->unknown_db0_ = NULL;
    arg0->unknown_db4_ = func_020424e4((int)data_ov009_0218aca4, 0);
#endif
    arg0->unknown_db6_ = 0;
#if defined(jpn)
    arg0->unknown_d8f_ = 0;
#endif
}
