#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Mutex.h"

struct Struct_01ffd34c_3 {
    void (*unknown_0_)(void*);
    void* unknown_4_;
    Struct_01ffd34c_3* unknown_8_;
};

struct Struct_020bc8d0 {
    void* unknown_0_;
    void* unknown_4_;
    Struct_01ffd34c_3 unknown_8_;
    Struct_01ffd34c_3 unknown_14_;
    int unknown_20_;
    unsigned int unknown_24_0_ : 1;
    unsigned int unknown_24_1_ : 1;
    unsigned int unknown_28_;
    int unknown_2c_;
    void (*unknown_30_)(int, int, void**, unsigned int, int, void*);
    void* unknown_34_;
    int unknown_38_;
    int unknown_3c_;
    int unknown_40_;
    unsigned int unknown_44_;
    int unknown_48_;
    unsigned char unknown_4c_[16];
};

struct Struct_01ffd34c_5 {
    unsigned char unknown_0_[16];
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned char unknown_18_;
    unsigned char unknown_19_;
    unsigned char unknown_1a_;
    unsigned char unknown_1b_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned int unknown_20_;
    unsigned int unknown_24_;
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned int unknown_30_;
    unsigned int unknown_34_;
    unsigned int unknown_38_;
    unsigned int unknown_3c_;
};

struct Struct_02110a4c {
    Struct_020bc8d0 unknown_0_;
    NitroVM unknown_5c_;
    unsigned int unknown_a4_;
    Struct_01ffd34c_5 unknown_a8_;
    int unknown_e8_[4];
    struct Struct_01ffd34c_2 { short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; } unknown_f8_[6];
    unsigned int unknown_110_0_ : 1;
    unsigned int unknown_110_1_ : 1;
    unsigned int unknown_110_2_ : 1;
    unsigned int unknown_110_3_ : 1;
    unsigned int unknown_110_4_ : 1;
    unsigned int unknown_110_5_ : 1;
    unsigned int unknown_110_6_ : 1;
    int unknown_114_;
    int unknown_118_;
    int unknown_11c_;
    int unknown_120_;
    unsigned char unknown_124_;
    unsigned char unknown_125_;
    unsigned char unknown_126_[6];
    void* unknown_12c_;
    unsigned int unknown_130_;
    void* unknown_134_;
    void* unknown_138_;
    void* unknown_13c_;
    void* unknown_140_;
    int unknown_144_;
    int unknown_148_;
    void* unknown_14c_;
    int unknown_150_;
    int unknown_154_;
    int unknown_158_;
    int unknown_15c_;
    unsigned int unknown_160_;
    void* unknown_164_;
    void* unknown_168_;
    void* unknown_16c_;
    void* unknown_170_;
};

struct Struct_01ffd34c_4 {
    void* unknown_0_;
    void* unknown_4_;
};

struct Struct_021103e0 {
    Struct_01ffd34c_4 unknown_0_;
    Struct_02110a4c* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    void* unknown_14_[6];
    unsigned int unknown_2c_;
};

struct Struct_021103b0 {
    int unknown_0_;
    void* unknown_4_;
    unsigned char* unknown_8_;
};

extern Struct_021103b0 data_021103b0;
extern SignedAllocatorList data_021103bc;
extern Mutex data_021103c8;
extern Struct_021103e0 data_021103e0[8];
extern unsigned char data_02110560[];
extern Struct_02110a4c data_02110a4c[4];
extern unsigned char data_02111020[512] __attribute__((aligned(32)));
extern "C" void func_020bc8d0(Struct_020bc8d0*);
extern "C" int func_020beaec(void*);
extern "C" void func_020bf2f8(void*, unsigned int);

// USA: func_020be9e8
extern "C" ARM void func_020be9e8(void* arg0, void* arg1)
{
    int var0;
    Struct_02110a4c* var1;
    int var2;
    if (data_021103b0.unknown_0_) {
        func_020beaec(arg1);
        return;
    }
    data_021103b0.unknown_0_ = 1;
    data_021103bc.Initialize(0);
    for (var2 = 0; var2 < 8; var2++)
        data_021103bc.InsertAtEnd((SignedAllocatorHeader*)&data_021103e0[var2].unknown_0_);
    ZeroInitializeMutex(&data_021103c8);
    data_021103b0.unknown_8_ = data_02111020;
    for (var0 = 0; var0 < 4; ++var0) {
        var1 = &data_02110a4c[var0];
        var1->unknown_110_0_ = 0;
        NitroVM_Initialize(&var1->unknown_5c_);
        func_020bc8d0(&var1->unknown_0_);
        var1->unknown_148_ = var0;
        var1->unknown_124_ = 0;
        var1->unknown_12c_ = NULL;
        var1->unknown_130_ = 0;
        var1->unknown_120_ = 0;
    }
    func_020beaec(arg1);
    func_020bf2f8(data_02110560, (unsigned int)arg0);
}
