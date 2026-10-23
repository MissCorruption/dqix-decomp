#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory.h"
#include <globaldefs.h>

struct Struct_02020fc4;
struct Struct_02020fc4_2;

extern "C" void func_0203bb1c(Struct_02020fc4 *arg0);
extern "C" void func_0203bb3c(Struct_02020fc4_2 *arg0, char *arg1, SafeAllocator *arg2, int arg3,
                                          unsigned short arg4);

struct Struct_020210f8 {
    int unknown_0_;
    char *unknown_4_;
    char unknown_8_[0x1c];
};

struct Struct_020210f8_2 {
    char unknown_0_[0x20];
    Struct_020210f8 *unknown_20_;
    int unknown_24_;
    char unknown_28_[0x48];
    int unknown_70_;
    int unknown_74_;
};

struct Struct_0200fd14 {
    char *unknown_0_;
};
extern "C" void func_0200fd14(Struct_0200fd14 *arg0, void *arg1, unsigned int arg2);
extern "C" void *__clear(void *arg0, int arg1);

struct Struct_020211b0_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short *unknown_4_;
    int unknown_8_;
    int unknown_c_;
    Struct_020211b0_3 *unknown_10_;
};

struct Struct_020211b0 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_020211b0_2 {
#if defined(jpn)
    char unknown_0_[0x9d4];
#else
    char unknown1_0_[0xaa0];
#endif
    unsigned short unknown_aa0_;
    Struct_020211b0 unknown_aa2_[32];
};

// USA: func_020210f8
extern "C" ARM void func_020210f8(char *arg0, int *arg1, SafeAllocator *arg2) {
    if (arg1 == NULL) return;

    Struct_020210f8_2 *var0 = reinterpret_cast<Struct_020210f8_2 *>(arg0);
    BackgroundLoader *var1               = BackgroundLoader::GetInstance();
    void *var2                         = NULL;
    unsigned int var3                = 0;
    var0->unknown_70_                       = var0->unknown_74_ + 1;

    for (int var4 = 0; var4 < var0->unknown_24_; var4++) {
        var1->GetLoadedFileByID(arg1[var4], &var2, &var3);
        func_0203bb1c(reinterpret_cast<Struct_02020fc4 *>(var0->unknown_20_[var4].unknown_8_));
        func_0203bb3c(reinterpret_cast<Struct_02020fc4_2 *>(var0->unknown_20_[var4].unknown_8_),
                                             static_cast<char *>(var2), arg2, 1, 0);
        BackgroundLoader::GetInstance()->RemoveTask(arg1[var4]);
        arg1[var4] = -1;
    }
}

// USA: func_020211b0
#if defined(jpn)
typedef int Type_020211b0;
#else
typedef int *Type_020211b0;
#endif
extern "C" ARM void func_020211b0(char *arg0, Type_020211b0 arg1) {
    BackgroundLoader *var0 = BackgroundLoader::GetInstance();
    Struct_0200fd14 var1;
    var1.unknown_0_              = 0;
    unsigned int var2 = 0;
#if defined(jpn)
    var0->GetLoadedFileByID(arg1, (void **) &var1.unknown_0_, &var2);
#else
    var0->GetLoadedFileByID(*arg1, (void **) &var1.unknown_0_, &var2);
#endif

    unsigned short var3[16];
    unsigned char var4 = 0;
    __clear(var3, sizeof(var3));
#if defined(jpn)
    enum { Enum_020211b0_1876 = 0x6a8 };
#else
    enum { Enum_020211b0_1876 = 0x754 };
#endif
    for (Struct_020211b0_3 *var5 = *(Struct_020211b0_3 **) (arg0 + Enum_020211b0_1876); var5; var5 = var5->unknown_10_) {
        for (int var6 = 0; var6 < var5->unknown_2_; var6++) {
            unsigned short var7 = var5->unknown_4_[var6];
            if (var7 >= 20000 && var7 <= 29999) {
                var3[var4++] = var7;
            }
        }
    }

    if (var1.unknown_0_) {
        ((Struct_020211b0_2 *) arg0)->unknown_aa0_ = 0;
        VectorizedMemset(((Struct_020211b0_2 *) arg0)->unknown_aa2_, 0, 0x100);
        unsigned short var8 = 0;
        func_0200fd14(&var1, &var8, 2);
        for (int var9 = 0; var9 < var8; var9++) {
            unsigned short var10;
            unsigned char var11;
            short var12;
            short var13;
            func_0200fd14(&var1, &var10, 2);
            func_0200fd14(&var1, &var11, 1);
            func_0200fd14(&var1, &var12, 2);
            func_0200fd14(&var1, &var13, 2);
            int var14 = 0;
            for (int var15 = 0; var15 < var4 && !var14; var15++) {
                if (var10 == var3[var15]) var14 = 1;
            }
            if (var14) {
                Struct_020211b0 *var16 = &((Struct_020211b0_2 *) arg0)->unknown_aa2_[((Struct_020211b0_2 *) arg0)->unknown_aa0_++];
                var16->unknown_0_          = var10;
                var16->unknown_2_          = var11;
                var16->unknown_4_          = var12;
                var16->unknown_6_          = var13;
            }
        }
    }

#if defined(jpn)
    BackgroundLoader::GetInstance()->RemoveTask(arg1);
#else
    BackgroundLoader::GetInstance()->RemoveTask(*arg1);
    *arg1 = -1;
#endif
}
