#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

struct Struct_0204b12c;
struct Struct_02020cb8_5;
struct Struct_02020cb8_2;
struct Struct_02020cb8;
struct Struct_0204c7a8;
struct Struct_0205cf78;
struct Struct_0205cf78_2;
struct Struct_02043368_2;
struct Struct_02043368;
struct Struct_02020aec;
struct Struct_02020cb8_4;
struct Struct_0201099c_3;
struct Struct_0206f7f4;

extern "C" Struct_0206f7f4 *func_0206f504();
extern "C" short func_0206f7f4(Struct_0206f7f4 *, int);
extern "C" char *strcpy(char *arg0, const char *arg1);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" int func_02005a94();
extern "C" void func_ov003_0215e1ec(char *arg0);
extern "C" void func_ov003_0215ca90(void *arg0, int arg1);
extern "C" void func_0204af64(struct Struct_02020cb8 *arg0);
extern "C" void func_0204b11c(unsigned char *arg0, int arg1);
extern "C" void func_0204b5b4(void *arg0, int arg1);
extern "C" void func_0204b12c(struct Struct_0204b12c *arg0,
                                                                                         SafeAllocator *arg1);
extern "C" int func_0204b5e8(struct Struct_02020cb8_5 *arg0, int arg1, int arg2);
extern "C" void ColorEffect_ConfigureAlphaBlend(int reg, int a, int b, int c, int d);
extern "C" int func_02046900(struct Struct_02020cb8_4 *arg0);
extern "C" void *func_020467f0(struct Struct_02020aec *arg0, int arg1, void **arg2, int *arg3);
extern "C" void func_0204b174(void *arg0, void *arg1, SafeAllocator *arg2, int arg3);
extern "C" void func_0204bc74(void *arg0, unsigned short arg1, int arg2, int arg3, int arg4, int arg5, unsigned short arg6);
extern "C" void func_0204b0e8(struct Struct_02020cb8_2 *arg0, void *arg1);
extern "C" void func_0204c7a8(struct Struct_0204c7a8 *arg0, SafeAllocator *arg1,
                                                                           int arg2, unsigned int arg3);
extern "C" void func_0205cf78(struct Struct_0205cf78 *arg0,
                                                                                     struct Struct_0205cf78_2 *arg1,
                                                                                     unsigned char arg2);
extern "C" void func_0205a198(struct Struct_02043368_2 *arg0);
extern "C" void func_0205a234(struct Struct_02043368 *arg0);
extern "C" void func_0205a528(void *arg0, void *arg1, int arg2, void *arg3);
extern "C" void func_020dfec0(void *arg0, void *arg1, void *arg2, unsigned int arg3);
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);

struct Struct_ov003_0215caf0 {
    unsigned char unknown_0_[2];
};

struct Struct_ov003_0217e0a8 {
    struct Struct_ov003_0215caf0 unknown_0_;
    struct Struct_ov003_0215caf0 unknown_2_;
};

struct Struct_ov003_0215caf0_2 {
    unsigned char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
};

extern char data_ov003_0217febc[];
extern char data_ov003_0217fed6[];
extern char data_ov003_0217fee7[];
extern char data_ov003_0217ff02[];
extern char data_ov003_0217ff14[];
extern char data_ov003_0217ff27[];
extern struct Struct_ov003_0217e0a8 data_ov003_0217f3a8;

#if defined(jpn)
extern char data_ov003_0217e6d4[];
extern char data_ov003_0217e6ee[];
extern char data_ov003_0217e70b[];
extern char data_ov003_0217e729[];
extern char data_ov003_0217e73c[];
#define data_ov003_0217f3a8 data_ov003_0217e0a8
extern struct Struct_ov003_0217e0a8 data_ov003_0217e0a8;
enum { Enum_ov003_0215caf0_0 = 0x18, Enum_ov003_0215caf0_0_2 = 1, Enum_ov003_0215caf0_6144 = 0x1000, Enum_ov003_0215caf0_512 = 0x100 };
#else
enum { Enum_ov003_0215caf0_0 = 0, Enum_ov003_0215caf0_0_2 = 0, Enum_ov003_0215caf0_6144 = 0x1800, Enum_ov003_0215caf0_512 = 0x200 };
#endif

#define S16(off) (*(short *) (arg0 + (off) + Enum_ov003_0215caf0_0))
#define S32(off) (*(int *) (arg0 + (off) + Enum_ov003_0215caf0_0))
#define U8(off) (*(unsigned char *) (arg0 + (off) + Enum_ov003_0215caf0_0))
#define REG16(a) (*(volatile unsigned short *) (a))
#define REG32(a) (*(volatile unsigned int *) (a))

// USA: func_ov003_0215caf0
extern "C" ARM void func_ov003_0215caf0(char *arg0) {
    BackgroundLoader *var0 = BackgroundLoader::GetInstance();
    unsigned char var1      = U8(0x3b8);

    if (var1 == 0) {
#if defined(jpn)
        S32(0x3b4) = (int) ((SafeAllocator *) (arg0 + 0x3c))->Allocate(0x10);
        int var2    = (short) (func_0206f7f4(func_0206f504(), 0) - 1);
        if (var2 < 0) {
            var2 = 0;
        }
        if (var2 == 0xe) {
            U8(0x3f3) = 1;
        }
        char var3[0x40];
        if (U8(0x3f0) != 0) {
            strcpy(var3, data_ov003_0217e6d4);
        } else {
            sprintf(var3, data_ov003_0217e6ee, var2);
        }
        ((int *) S32(0x3b4))[0] = var0->QueueLoadFile(var3, 0);
        ((int *) S32(0x3b4))[1] = var0->QueueLoadFile(data_ov003_0217e70b, 0);
        ((int *) S32(0x3b4))[2] = var0->QueueLoadFile(data_ov003_0217e729, 0);
        ((int *) S32(0x3b4))[3] = var0->QueueLoadFile(data_ov003_0217e73c, 0);
#else
        S32(0x3b4) = (int) ((SafeAllocator *) (arg0 + 0x3c))->Allocate(0xc);
        int var4    = (short) (func_0206f7f4(func_0206f504(), 0) - 1);
        if (var4 < 0) {
            var4 = 0;
        }
        if (var4 == 0xe) {
            U8(0x3f3) = 1;
        }
        char var5[0x40];
        char var6[0x18];
        __clear(var5, 0x40);
        __clear(var6, 0x18);
        if (U8(0x3f0) != 0) {
            strcpy(var5, data_ov003_0217febc);
            strcpy(var6, data_ov003_0217fed6);
        } else {
            sprintf(var5, data_ov003_0217fee7, var4);
            sprintf(var6, data_ov003_0217ff02, var4);
        }
        ((int *) S32(0x3b4))[0] = var0->QueueLoadFileInGP2(var5, var6, 0);
        ((int *) S32(0x3b4))[1] = var0->QueueLoadFile(data_ov003_0217ff14, 0);
        ((int *) S32(0x3b4))[2] = var0->QueueLoadFile(data_ov003_0217ff27, 0);
#endif
        U8(0x3b8)               = U8(0x3b8) + 1;
    }

    if (var1 == 1) {
        if (var0->GetTaskStatus(((int *) S32(0x3b4))[0]) > 0) {
            void *var7;
            unsigned int var8;
            var0->GetLoadedFileByID(((int *) S32(0x3b4))[0], &var7, &var8);
            ((SafeAllocator *) arg0)->Reset();
            func_020dfec0(arg0 + 0x64, arg0, var7, var8);
            if (func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x64), 0x32) != 0) {
                U8(0x3ee) = func_02005a94();
            }
            if (U8(0x3ee) == 3) {
                U8(0x3ee) = 0;
                U8(0x3ef) = 0;
            }
            if (U8(0x3f0) != 0) {
                U8(0x3ee) = 2;
                U8(0x3ef) = 1;
            }
            var0->RemoveTask(((int *) S32(0x3b4))[0]);
            ((int *) S32(0x3b4))[0] = -1;
        }

#if defined(jpn)
        if (var0->GetTaskStatus(((int *) S32(0x3b4))[1]) > 0) {
            void *var9;
            unsigned int var10;
            var0->GetLoadedFileByID(((int *) S32(0x3b4))[1], &var9, &var10);
            ((SafeAllocator *) (arg0 + 0x14))->Reset();
            func_020dfec0(arg0 + 0x7c, arg0 + 0x14, var9, var10);
            var0->RemoveTask(((int *) S32(0x3b4))[1]);
            ((int *) S32(0x3b4))[1] = -1;
        }

#endif
        if (var0->GetTaskStatus(((int *) S32(0x3b4))[1 + Enum_ov003_0215caf0_0_2]) > 0) {
            ((SafeAllocator *) (arg0 + 0x28))->Reset();
            struct Struct_ov003_0215caf0 var11  = data_ov003_0217f3a8.unknown_2_;
            struct Struct_ov003_0215caf0 var12 = data_ov003_0217f3a8.unknown_0_;
            struct Struct_ov003_0215caf0_2 *var13;
            for (int var14 = 0; var14 < 2; var14++) {
                var13 = (struct Struct_ov003_0215caf0_2 *) (arg0 + 0x154 + Enum_ov003_0215caf0_0 + var14 * 0x20);
                func_0204af64((struct Struct_02020cb8 *) var13);
                func_0204b11c((unsigned char *) var13, 0);
                var13->unknown_1c_0_ = 0;
                var13->unknown_1c_4_ = var11.unknown_0_[var14];
                func_0204b5b4(var13, var12.unknown_0_[var14]);
                func_0204b12c((struct Struct_0204b12c *) var13,
                                                                                         (SafeAllocator *) (arg0 + 0x28));
                func_0204b5e8((struct Struct_02020cb8_5 *) var13, 0, 0);
            }
            REG16(0x0400000a) = (REG16(0x0400000a) & 0x43) | 0xd08;
            REG16(0x0400000c) = (REG16(0x0400000c) & 0x43) | 0xe08;
            ColorEffect_ConfigureAlphaBlend(0x04000050, 2, 1, 10, 6);

            void *var15;
            void *var16;
            unsigned int var17;
            int var18;
            var0->GetLoadedFileByID(((int *) S32(0x3b4))[1 + Enum_ov003_0215caf0_0_2], &var16, &var17);
            int var19 = func_02046900((struct Struct_02020cb8_4 *) var16);
            for (int var20 = 0; var20 < var19; var20++) {
                void *var21 = func_020467f0((struct Struct_02020aec *) var16, var20, &var15, &var18);
                if (var21 != 0) {
                    func_0204b174(arg0 + 0x174 + Enum_ov003_0215caf0_0, var21, (SafeAllocator *) (arg0 + 0x28), var18);
                }
            }
            char *var22;
            for (int var23 = 0; var23 < 2; var23++) {
                var22 = arg0 + 0x154 + Enum_ov003_0215caf0_0 + var23 * 0x20;
                func_0204bc74(var22, 0, 0, 0, 0x20, 0x19, 0);
                func_0204b0e8((struct Struct_02020cb8_2 *) var22, 0);
            }
            S32(0x354) = (int) ((SafeAllocator *) (arg0 + 0x28))->Allocate(Enum_ov003_0215caf0_6144);
            char *var24;
            for (int var25 = 0; var25 < 2; var25++) {
                var24 = arg0 + 0x194 + Enum_ov003_0215caf0_0 + var25 * 0xe0;
                func_0204c7a8((struct Struct_0204c7a8 *) var24,
                                                                           (SafeAllocator *) (arg0 + 0x28), S32(0x354), Enum_ov003_0215caf0_512);
                *(char **) (var24 + 4) = arg0 + 0x174 + Enum_ov003_0215caf0_0;
            }
            *(char **) (arg0 + 0x130 + Enum_ov003_0215caf0_0) = arg0 + 0x154 + Enum_ov003_0215caf0_0;
            U8(0x14a)                 = 2;
            func_0205cf78((struct Struct_0205cf78 *) (arg0 + 0x98 + Enum_ov003_0215caf0_0),
                                                                                 (struct Struct_0205cf78_2 *) (arg0 + 0x194 + Enum_ov003_0215caf0_0), 2);
            REG16(0x04000008) = (REG16(0x04000008) & ~3) | 2;
            REG16(0x0400000a) = (REG16(0x0400000a) & ~3) | 1;
            REG16(0x0400000c) = (REG16(0x0400000c) & ~3);
            REG16(0x0400000e) = (REG16(0x0400000e) & ~3) | 3;
            REG32(0x04000000) = (REG32(0x04000000) & ~0x1f00) | 0x1700;
            var0->RemoveTask(((int *) S32(0x3b4))[1 + Enum_ov003_0215caf0_0_2]);
            ((int *) S32(0x3b4))[1 + Enum_ov003_0215caf0_0_2] = -1;
        }

        if (var0->GetTaskStatus(((int *) S32(0x3b4))[2 + Enum_ov003_0215caf0_0_2]) > 0) {
            ((SafeAllocator *) (arg0 + 0x50))->Reset();
            S32(0x3ac) = (int) ((SafeAllocator *) (arg0 + 0x50))->Allocate(0xf0);
            for (unsigned char var26 = 0; var26 < 6; var26++) {
                func_0205a198((struct Struct_02043368_2 *) (S32(0x3ac) + var26 * 0x28));
            }
            S32(0x3b0) = (int) ((SafeAllocator *) (arg0 + 0x50))->Allocate(8);
            func_0205a234((struct Struct_02043368 *) S32(0x3b0));
            U8(0x3a8)  = 0;
            S32(0x398) = S32(0x3ac);
            S16(0x3a4) = 6;
            S32(0x394) = S32(0x3b0);
            void *var27;
            void *var28;
            unsigned int var29;
            int var30;
            var0->GetLoadedFileByID(((int *) S32(0x3b4))[2 + Enum_ov003_0215caf0_0_2], &var28, &var29);
            int var31 = func_02046900((struct Struct_02020cb8_4 *) var28);
            for (int var32 = 0; var32 < var31; var32++) {
                void *var33 = func_020467f0((struct Struct_02020aec *) var28, var32, &var27, &var30);
                func_0205a528(arg0 + 0x358 + Enum_ov003_0215caf0_0, var33, var30, arg0 + 0x50);
            }
            var0->RemoveTask(((int *) S32(0x3b4))[2 + Enum_ov003_0215caf0_0_2]);
            ((int *) S32(0x3b4))[2 + Enum_ov003_0215caf0_0_2] = -1;
        }

        int var34 = 1;
        for (int var35 = 0; var35 < 3 + Enum_ov003_0215caf0_0_2; var35++) {
            if (((int *) S32(0x3b4))[var35] >= 0) {
                var34 = 0;
            }
        }
        if (var34 != 0) {
            var1++;
        }
    }

    if (var1 == 2) {
        func_ov003_0215e1ec(arg0);
        if (U8(0x3f0) != 0) {
            func_ov003_0215ca90(arg0, 3);
        } else {
            int var36 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x64), 0x2710);
            int var37 = 1;
            if (var36 != 0) {
                var37 = func_02005a94();
            }
            func_ov003_0215ca90(arg0, var37);
            if (var37 == 0) {
                U8(0x3f2) = 1;
            }
        }
        U8(0x3bc) = 1;
        U8(0x3b8) = 0;
    }
}
