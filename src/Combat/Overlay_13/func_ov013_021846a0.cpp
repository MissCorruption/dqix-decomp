#if defined(jpn)
#define func_ov013_021846a0 func_ov013_021856dc
#endif

#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "NitroSDK/Graphics.h"

struct Struct_ov013_021846a0 {
#if defined(jpn)
    char unknown_0_[0x17ee];
#else
    char unknown1_0_[0x19be];
#endif
    unsigned char unknown_19be_;
};

struct Struct_ov013_021846a0_2 {
    SafeAllocator unknown_0_;
#if defined(jpn)
    char unknown_14_[0x1e - 0x14];
    char unknown_20_[0x12];
#else
    char unknown1_14_[0x20 - 0x14];
    char unknown_20_[0x12];
    char unknown_32_[2];
#endif
    int unknown_34_;
    char unknown_38_[0xbc];
#if defined(jpn)
    char unknown_f0_[0x598 - 0xf0];
#else
    char unknown_f4_[0x60c - 0xf4];
#endif
    SafeAllocator unknown_60c_;
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
    unsigned char unknown_63d_;
    unsigned char unknown_63e_;
    bool unknown_63f_;
    bool unknown_640_;
    unsigned int unknown_644_;
    int unknown_648_;
#if !defined(jpn)
    int unknown_64c_;
#endif
    int unknown_650_;
    void* unknown_654_;
};

extern "C" Struct_ov013_021846a0* func_020421a0(void);

struct Struct_02074bf4;
extern "C" void func_02074bf4(struct Struct_02074bf4*);
struct Struct_02074bd0;
extern "C" void func_02074bd0(struct Struct_02074bd0*);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0*, int);
struct Struct_0205d1e0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0*);
struct Struct_0205d274;
extern "C" void func_0205d274(struct Struct_0205d274*);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
extern "C" void func_0205d048(void*);

void CleanInvalidateCacheRange(const void*, unsigned int);
extern "C" int LoadToMainBG1CharacterData(const void*, int, unsigned int);

// USA: func_ov013_021846a0
extern "C" ARM void func_ov013_021846a0(Struct_ov013_021846a0_2* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_650_ >= 0) {
        var0->RemoveTask(arg0->unknown_650_);
        arg0->unknown_650_ = -1;
    }

    func_020421a0()->unknown_19be_ = 0;

    if (arg0->unknown_640_) {
        func_02074bf4((struct Struct_02074bf4*)arg0->unknown_20_);
        func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_38_, 1);
        func_0205d1e0((struct Struct_0205d1e0*)arg0->unknown_38_);
        func_0205d274((struct Struct_0205d274*)arg0->unknown_38_);
        func_0205d2bc((struct Struct_0205d2bc*)arg0->unknown_38_);
    } else {
        func_02074bd0((struct Struct_02074bd0*)arg0->unknown_20_);
        func_0205d1e0((struct Struct_0205d1e0*)arg0->unknown_38_);
        func_0205d274((struct Struct_0205d274*)arg0->unknown_38_);
        func_0205d2bc((struct Struct_0205d2bc*)arg0->unknown_38_);
        func_0205d048(arg0->unknown_38_);

        if (arg0->unknown_654_) {
            memset(arg0->unknown_654_, 0, 0x20);
            CleanInvalidateCacheRange(arg0->unknown_654_, 0x20);
            LoadToMainBG1CharacterData(arg0->unknown_654_, 0, 0x20);
        }

        DISPCNT = (DISPCNT & ~0x1f00) | (arg0->unknown_34_ << 8);
    }

    if (arg0->unknown_60c_.GetSignedAllocator()) {
        arg0->unknown_60c_.Destroy();
    }
    if (arg0->unknown_0_.GetSignedAllocator()) {
        arg0->unknown_0_.Destroy();
    }

    arg0->unknown_63c_ = 6;
}
