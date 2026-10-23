#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_0204f41c func_02050678
#endif

struct Struct_ov028_021d8a74;
extern "C" void func_ov028_021d8a74(Struct_ov028_021d8a74*, float);
extern "C" void func_ov028_021d8ad4(void* arg0, char* arg1);

struct Struct_ov028_021d9208 {
    unsigned int unknown_0_0_ : 4;
#if defined(jpn)
    unsigned int unknown_0_4_ : 1;
#else
    unsigned int unknown1_0_4_ : 2;
#endif
    unsigned int unknown_0_6_ : 1;
    unsigned int unknown_0_7_ : 4;
#if defined(jpn)
    unsigned int unknown_1_2_ : 22;
#else
    unsigned int unknown_1_3_ : 21;
#endif
};

struct Struct_ov028_021d9208_2 {
    short unknown_0_;
    short unknown_2_;
    Struct_ov028_021d9208 unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_ov028_021d9208_3;
extern "C" struct Struct_ov028_021d9208_2* func_ov028_021d99f8(Struct_ov028_021d9208_3*, unsigned int);
extern "C" void func_ov028_021d8a40(void* arg0, unsigned int arg1);
extern "C" int func_020420e8(void* arg0, int arg1);
#if defined(jpn)
extern "C" void func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, unsigned char arg4, unsigned char arg5, short* arg6, short* arg7);
extern "C" void func_0204c684(char* arg0);
extern "C" int func_0204fc40(void* arg0, char** arg1, char* arg2, short* arg3, int arg4);
extern char data_ov028_021da41d[];
#else
extern "C" void func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, unsigned char arg4, unsigned char arg5, short* arg6, short* arg7, int arg8);
#endif

// USA: func_ov028_021d9208
extern "C" ARM void func_ov028_021d9208(char* arg0, int arg1) {
    float var0 = *(float*)arg0;
    float var1 = 0.5f * ((float)arg1 * var0);
    func_ov028_021d8a74((Struct_ov028_021d8a74*)(arg0 + 0x60), var1);
    func_ov028_021d8ad4(arg0 + 0x60, *(char**)(arg0 + 0x40));

    char* var2 = *(char**)(arg0 + 0x40);
    short var3 = -1;
#if defined(jpn)
    unsigned char var4;
    int var5;
#else
    int var6;
#endif
    int var7;
#if defined(jpn)
    short var8;
#else
    int var8;
#endif
#if defined(jpn)
    char var9[0xe0];
    short var10;
    short var11;
    short var12;
    unsigned int var15[0x38];
#else
    short var13;
    short var14;
    unsigned int var15[0x38];
#endif
    int var16;

    for (;;) {
        unsigned short var17 = *(unsigned short*)(arg0 + 0x6c);
        struct Struct_ov028_021d9208_2* var18 = func_ov028_021d99f8((Struct_ov028_021d9208_3*)arg0, var17);
        if (var18 == 0) {
            var16 = 1;
            goto exitLoop;
        }

#if defined(jpn)
        unsigned int var19 = (*(int*)(arg0 + 0x60) >> 12) + 0xc0;
        short var20 = var18->unknown_2_;
        unsigned int var21 = var20 + ((int)*(int*)(arg0 + 0x64) >> 12);
        if (var19 < var21) {
            goto fail;
        }
        *(int*)(arg0 + 0x64) += (var20 << 12);
#else
        short var22 = var18->unknown_0_;
        if (var3 != var22) {
            unsigned int var23 = (*(int*)(arg0 + 0x60) >> 12) + 0xc0;
            short var24 = var18->unknown_2_;
            unsigned int var25 = var24 + (*(int*)(arg0 + 0x64) >> 12);
            if (var23 < var25) {
                goto fail;
            }
            *(unsigned int*)(arg0 + 0x64) += (var24 << 12);
        }
#endif

        var8 = (*(int*)(arg0 + 0x64) >> 12) & 0xff;
#if defined(jpn)
        var5 = 0;
        if (var18->unknown_4_.unknown_0_4_ != 0) {
            var4 = (unsigned char)var18->unknown_4_.unknown_0_0_;
            char* var26 = (char*)var18->unknown_8_;
            if (var26 != NULL) {
                func_0204c684(var9);
                char* var27 = var26;
                while (*var27 != 0) {
                    var10 = 0;
                    if (func_0204fc40(var9, &var27, data_ov028_021da41d, &var10, 1)) {
                        var5 += var10;
                    } else if (*var27 >= '0' && *var27 <= '9') {
                        ++var27;
                        var5 += var4;
                    } else if (*var27 >= 'a' && *var27 <= 'z') {
                        var5 += var4;
                        ++var27;
                    } else if (*var27 >= 'A' && *var27 <= 'Z') {
                        var5 += var4;
                        ++var27;
                    } else {
                        unsigned char var28 = *(unsigned char*)var27;
                        if ((var28 >= 0x81 && var28 <= 0x9f) || (var28 >= 0xe0 && var28 <= 0xea)) {
                            ++var27;
                        }
                        var5 += var4;
                        ++var27;
                    }
                }
            }
            var5 = (0x100 - var5) << 0xf >> 0x10;
        }
#else
        var7 = 0;
        if (var18->unknown_4_.unknown_0_0_ == 0xc) {
            var7 = 1;
        }
        var6 = 0;
        if (var18->unknown_4_.unknown1_0_4_ != 0) {
            int var29 = func_020420e8((void*)var18->unknown_8_, var7);
            var6 = 0x88;
            switch (var18->unknown_4_.unknown1_0_4_) {
                case 1:
                    var6 = (0x100 - var29) << 0xf >> 0x10;
                    break;
                case 2:
                    var6 = (short)(0x78 - var29);
                    break;
            }
        }
#endif

        func_ov028_021d8a40(var15, (unsigned int)var2);

        short var30 = var18->unknown_4_.unknown_0_0_;
        *(short*)((char*)var15 + 0xb4) = var30;
        *(short*)((char*)var15 + 0xb6) = var30 + 1;

#if defined(jpn)
        func_0204f41c(var15, var5, var8, (void*)var18->unknown_8_, var18->unknown_4_.unknown_0_0_, var18->unknown_4_.unknown_0_7_, &var12, &var11);
#else
        func_0204f41c(var15, var6, var8, (void*)var18->unknown_8_, var18->unknown_4_.unknown_0_0_, var18->unknown_4_.unknown_0_7_, &var14, &var13, var7);
#endif

        if ((unsigned int)var8 + var18->unknown_4_.unknown_0_0_ > 0x100) {
#if defined(jpn)
            func_0204f41c(var15, var5, (short)(var8 - 0x100), (void*)var18->unknown_8_, var18->unknown_4_.unknown_0_0_, var18->unknown_4_.unknown_0_7_, &var12, &var11);
#else
            func_0204f41c(var15, var6, (short)(var8 - 0x100), (void*)var18->unknown_8_, var18->unknown_4_.unknown_0_0_, var18->unknown_4_.unknown_0_7_, &var14, &var13, var7);
#endif
        }

        *(unsigned short*)(arg0 + 0x6c) = *(unsigned short*)(arg0 + 0x6c) + 1;
        *(unsigned char*)(arg0 + 0x6e) = 1;
#if defined(jpn)

#else
        var3 = var18->unknown_0_;
#endif
    }
fail:
    var16 = 0;
exitLoop:
    g_keyManager.TestKeysHeld(0x2000);
    if (var16 != 0) {
        *(unsigned char*)(arg0 + 0x80) = 2;
        *(unsigned char*)(arg0 + 0x81) = 0;
    }
}
