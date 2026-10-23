#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020bb700(int* arg0);
extern "C" void func_020bb910(int* arg0);
extern "C" int func_020bb588(unsigned int arg0, int arg1, int arg2);
extern "C" void func_0207de48(void* arg0, int arg1, int arg2);
extern "C" void func_020542b4(void* arg0, void* arg1, void* arg2);

extern AllocatorUnion data_02114e20;

struct Struct_ov017_021d6984 {
    int unknown_0_;
    unsigned int unknown_4_;
};
extern Struct_ov017_021d6984 data_ov017_021d6984[];

struct Struct_ov017_021d6924 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern Struct_ov017_021d6924 data_ov017_021d6924[];

struct Struct_02000c9c_57 {
    char unknown_0_[0x70];
};

struct Struct_ov017_021a02f0 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[0x5ec - 0x4];
};

struct Struct_ov017_021a02f0_2 {
    int unknown_0_[10];
    int unknown_28_[2];
};

struct Struct_ov017_021a02f0_3 {
    char unknown_0_[0x38];
#if defined(jpn)
    SafeAllocator unknown_38_[29];
#else
    SafeAllocator unknown_38_[33];
#endif
#if defined(jpn)
    Struct_02000c9c_57 unknown_2cc_[32];
#else
    Struct_02000c9c_57 unknown_2cc_[36];
#endif
    char unknown_128c_[0x12c8 - 0x128c];
    Struct_ov017_021a02f0 unknown_12c8_[4];
    Struct_ov017_021a02f0_2 unknown_2a78_[3];
};

// USA: func_ov017_021a02f0
extern "C" ARM void func_ov017_021a02f0(Struct_ov017_021a02f0_3* arg0) {
    int var0;
    unsigned int var1;

    for (var0 = 0; (var1 = data_ov017_021d6984[var0].unknown_4_) != 0; var0++) {
        void* var2 = func_02012d88(&data_02114e20, var1);
        arg0->unknown_38_[data_ov017_021d6984[var0].unknown_0_].CreateTypeA(var2, var1);
    }

    func_020bb700(arg0->unknown_2a78_[0].unknown_0_);
    func_020bb910(arg0->unknown_2a78_[0].unknown_28_);
    func_020bb588(0x20000, 0, 0);
    func_020bb588(0x20000, 0, 0);

    for (var0 = 0; data_ov017_021d6924[var0].unknown_4_ != 0; var0++) {
        func_0207de48(&arg0->unknown_2cc_[data_ov017_021d6924[var0].unknown_0_], data_ov017_021d6924[var0].unknown_4_,
                      data_ov017_021d6924[var0].unknown_8_);
        if (var0 == 1) {
            func_020bb700(arg0->unknown_2a78_[2].unknown_0_);
            func_020bb910(arg0->unknown_2a78_[2].unknown_28_);
        }
    }

    func_020bb700(arg0->unknown_2a78_[1].unknown_0_);
    func_020bb910(arg0->unknown_2a78_[1].unknown_28_);

    for (int var3 = 0; var3 < 4; var3++) {
        func_020542b4(&arg0->unknown_12c8_[var3], &arg0->unknown_38_[var3 + 1], &arg0->unknown_2cc_[var3 + 1]);
        arg0->unknown_12c8_[var3].unknown_2_ = var3;
    }
}
