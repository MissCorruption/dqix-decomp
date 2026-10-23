#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_020534ac;
struct Struct_0201099c_14;
extern "C" void func_020dfc6c(struct Struct_0201099c_14* arg0);
extern "C" void func_020df83c(void* arg0);
extern "C" void func_ov023_021db2e4(volatile int* arg0);
extern "C" int func_ov023_021ddc34(void* arg0, short arg1, short arg2, short arg3, short arg4);

extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);

extern "C" {
    void func_020df850(void* arg0, void* arg1, int arg2, int arg3, int arg4);
    void* func_0205ec34(void);
    int func_02005a94(signed char* arg0);
    void func_0204c684(void* arg0);
    void func_ov023_021db314(void* arg0, short* arg1, short* arg2);
    void func_ov023_021db634(void* arg0, void* arg1);
    int func_ov023_021ddc98(void* arg0, int arg1, unsigned short arg2, int arg3);
}

extern int data_ov023_021ff9e0[];

struct Struct_ov023_021e0840 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[2];
    char* unknown_4_;
};

struct Struct_ov023_021e0840_2 {
    unsigned char unknown_0_[2];
    short unknown_2_;
    Struct_ov023_021e0840* unknown_4_;
};

// USA: func_ov023_021e0840
extern "C" ARM int func_ov023_021e0840(void* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e0840_1860=0x6c0, Enum_ov023_021e0840_1908=0x6f0, Enum_ov023_021e0840_1884=0x6d8, Enum_ov023_021e0840_1864=0x6c4};
#else
 enum {Enum_ov023_021e0840_1860=0x744, Enum_ov023_021e0840_1908=0x774, Enum_ov023_021e0840_1884=0x75c, Enum_ov023_021e0840_1864=0x748};
#endif
    char* var0 = (char*)arg0;
    char var1[0xe0];
    short var2[12];
    int var3, var4;
    short var5;

    if (*(int*)(var0 + Enum_ov023_021e0840_1860) == -1) {
        return 0xd;
    }

    int var6 = (int)BackgroundLoader::GetInstance();
    if (!((BackgroundLoader*)(var6))->GetTaskStatus((int)(*(int*)(var0 + Enum_ov023_021e0840_1860)))) {
        goto ret9;
    }

    ((BackgroundLoader*)((struct Struct_020534ac*)var6))->GetLoadedFileByID((int)(*(int*)(var0 + Enum_ov023_021e0840_1860)), (void**)(&var3), (unsigned int*)(&var4));
#if defined(jpn)

#else
    if (var3 == 0 || var4 == 0) {
        goto ret9;
    }
#endif

    func_020dfc6c((struct Struct_0201099c_14*)(var0 + 0x8c));
    func_020df83c(var0 + 0x7c);
    func_020dfc6c((struct Struct_0201099c_14*)(var0 + 0xa4));
    ((class SafeAllocator*)(var0 + 0x28))->Reset();

    int var7 = *(short*)((char*)*(void**)(var0 + 0x4c) + 0x18);
    func_020df850(var0 + 0x6c, var0 + 0x28, var3, var4, var7);

    struct Struct_ov023_021e0840_2* var8 = *(struct Struct_ov023_021e0840_2**)(var0 + 0x74);
    if (var8) {
        int var9;
        short var10;
        void* var11;
        struct Struct_ov023_021e0840* var12 = var8->unknown_4_;
        var11 = func_0205ec34();
        var10 = var8->unknown_2_;
        for (var9 = 0; var9 < var10; var9++, var12++) {
            char* var13 = var12->unknown_4_;
            if (!var13) continue;
            if ((signed char)var13[0] != 'f') continue;
            if (strlen(var13) < 5) continue;
            int var14 = func_02005a94((signed char*)(var13 + 5));
            int var15 = var14 + 0x12 + 0xc00;
            if (!func_0206dfb0((int)var11, (unsigned char*)var11 + 0x8c, var15)) {
                var12->unknown_1_ = 0;
            }
        }
    }

    ((BackgroundLoader*)(var6))->RemoveTask((int)(*(int*)(var0 + Enum_ov023_021e0840_1860)));
    *(int*)(var0 + Enum_ov023_021e0840_1860) = -1;

    var5 = 0;
    if (*(void**)(var0 + 0x74)) {
        func_ov023_021db314(var0 + 0x6c, var2, &var5);
    }
    if (var5 != 0) {
        goto retB;
    }

    func_0204c684(var1);
    if (func_ov023_021ddc34(var1, 0, 0, 0x1c, 6)) {
        if (!(*(unsigned short*)(var0 + Enum_ov023_021e0840_1908) & 0x400)) {
            func_ov023_021db634(var0 + 0xcc, var1);
        }
        int var16 = func_ov023_021ddc98(var1, *(int*)(var0 + Enum_ov023_021e0840_1884), (unsigned short)data_ov023_021ff9e0[3], 0);
        *(int*)(var0 + Enum_ov023_021e0840_1884) = *(int*)(var0 + Enum_ov023_021e0840_1884) + var16;
    }

    func_ov023_021db2e4((volatile int*)(var0 + Enum_ov023_021e0840_1864));
    return 0xd;

retB:
    return 0xb;

ret9:
    return 9;
}
