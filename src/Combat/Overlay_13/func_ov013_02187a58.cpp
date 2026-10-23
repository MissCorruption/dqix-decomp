#if defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_ov013_02187a58 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 7;
    unsigned short unknown_3_1_ : 7;
    const char* unknown_4_;
    const char* unknown_8_;
    Struct_ov013_02187a58* unknown_c_;
};
struct Struct_ov013_02187a58_2 {
    int unknown_0_;
    float unknown_4_;
};
struct Struct_0208e024;
struct Struct_0208e024_2;
extern "C" Struct_0208e024_2* func_0208e024(Struct_0208e024* arg0, int arg1, int arg2);
#define func_0208e934(list, kind, index) ((Struct_ov013_02187a58*)func_0208e024((Struct_0208e024*)(list), (kind), (index)))
struct Struct_0208e06c;
extern "C" Struct_ov013_02187a58* func_0208e06c(Struct_0208e06c* arg0, int arg1);
extern "C" int func_020dd11c(unsigned int, unsigned int);
extern "C" int func_02053c6c(unsigned char*);
struct Struct_02072a68_2;
extern "C" void* func_02072a68(Struct_02072a68_2*, int);
extern "C" int func_020d2ff0(const char*);
extern "C" void __clear(void*, int);
extern "C" void func_02050678(void*, short, short, const char*, int, unsigned char, short*, short*);
extern "C" void func_020749ac(void*, int, int, int);
extern char data_ov013_02188e2b[];
extern char data_ov013_02188e56[];
extern char data_ov013_02188e61[];
extern char data_ov013_02188e64[];

// USA: func_ov013_02187a58
extern "C" ARM void func_ov013_02187a58(void* arg0, void* arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
    if (!arg1) return;
    GameObject* var1 = func_0200ff1c(GameState::GetInstance(), *(signed char*)(var0 + 0x53));
    if (!var1) return;
    int var2;
    unsigned char* var3 = (unsigned char*)func_02053c6c((unsigned char*)var1);
    if (!var3) return;
    int var4 = func_020dd11c(*(unsigned int*)(var3 + 0x8b8) & 0xff, var0[0x54]);
    int var5 = (var3 + var4)[0x464];
    int var6 = 30;
    const char* var7 = (const char*)func_02072a68((Struct_02072a68_2*)(var0 + 4), var4);
    short var8, var9;
    Struct_ov013_02187a58_2 var10[10];
    char var11[256];
    char var12[32];
    char var13[16];

    func_02050678(arg1, (short)(128 - (func_020d2ff0(var7) >> 2) * 10), 12, var7, 10, 15, &var8, &var9);
    memset(var10, 0, sizeof(var10));
    for (unsigned char var14 = 0; var14 < 10; var14++) {
        Struct_ov013_02187a58_2* var15 = &var10[var14];
        Struct_ov013_02187a58* var16 = func_0208e934(var0 + 0xc, var4, var14);
        if (var16) {
            var15->unknown_0_ = var16->unknown_0_;
            var15->unknown_4_ = var16->unknown_2_2_;
        }
    }
    func_020749ac(var10, 0, 9, 0);
    for (unsigned char var17 = 0; var17 < 10; var17++) {
        var2 = 3;
        Struct_ov013_02187a58* var18 = func_0208e06c((Struct_0208e06c*)(var0 + 0xc), (short)var10[var17].unknown_0_);
        if (var18) {
            int var19 = var18->unknown_2_2_;
            if (var5 >= var19) var2 = 15;
            __clear(var12, sizeof(var12));
            sprintf(var12, data_ov013_02188e2b, var19);
            int var20 = 33;
            if ((unsigned int)var19 < 100) var20 += 10;
            if ((unsigned int)var19 < 10) var20 += 10;
            func_02050678(arg1, (short)var20, (short)var6, var12, 10, (unsigned char)var2, &var8, &var9);
            __clear(var11, sizeof(var11));
            sprintf(var11, data_ov013_02188e56, var18->unknown_8_, var18->unknown_4_);
            char* var21 = strstr(var11, data_ov013_02188e61);
            if (var21) {
                int var22 = strlen(var21);
                __clear(var13, sizeof(var13));
                memcpy(var13, var21, var22 + 1);
                memcpy(var21, data_ov013_02188e64, 18);
                memcpy(var21 + 18, var13, var22 + 1);
            }
            func_02050678(arg1, 84, (short)var6, var11, 10, (unsigned char)var2, &var8, &var9);
            var6 += 15;
        }
    }
}
#else
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov013_02187a58_3 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 7;
    unsigned short unknown_3_1_ : 6;
    unsigned short unknown_3_7_ : 1;
    int unknown_4_;
    struct Struct_ov013_02187a58_3* unknown_8_;
};

struct Struct_0208e024;
struct Struct_0208e06c;
struct Struct_02072a68_2;

extern "C" ARM struct Struct_ov013_02187a58_3* func_0208e024(struct Struct_0208e024* arg0, int arg1, int arg2);
extern "C" ARM struct Struct_ov013_02187a58_3* func_0208e06c(struct Struct_0208e06c* arg0, int arg1);
extern "C" ARM void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" ARM int func_020dd11c(unsigned int arg0, unsigned int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_020421a0(void);

extern "C" void __clear(void* arg0, int arg1);
extern "C" int sprintf(char* arg0, const char* arg1, ...);
extern "C" float _ffltu(unsigned int v);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" void func_0204f41c(void* arg0, short arg1, short arg2, void* arg3, int arg4,
                              unsigned char arg5, short* arg6, short* arg7, int arg8);
extern "C" void func_020749ac(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02046608(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, int arg6);
extern "C" void func_020e4864(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

extern signed char data_ov013_02187dc8[];
extern char data_ov013_02187ec3;

struct Struct_ov013_02187a58_4 {
    int unknown_0_;
    float unknown_4_;
};

// USA: func_ov013_02187a58
extern "C" ARM void func_ov013_02187a58(void* arg0, void* arg1) {
    unsigned char* var23 = (unsigned char*)arg0;
    if (arg1 == 0) {
        return;
    }

    GameObject* var24 =
        func_0200ff1c(GameState::GetInstance(), *(signed char*)(var23 + 0x67));
    if (var24 == 0) {
        return;
    }

    int var25;
    unsigned char* var26 = (unsigned char*)func_02053c6c((unsigned char*)var24);
    if (var26 == 0) {
        return;
    }

    int var27 = func_020dd11c(*(unsigned int*)(var26 + 0x950) & 0xff, var23[0x68]);
    int var28 = (var26 + var27)[0x464];
    int var29 = 0x1e;
    void* var30 = func_02072a68((struct Struct_02072a68_2*)(var23 + 4), var27);

    short var31;
    short var32;
    char var33[0x20];
    struct Struct_ov013_02187a58_4 var34[10];
    char var35[0x100];
    char var36[0x100];

    func_0204f41c(arg1, (short)((0x100 - func_020420e8(var30, 0)) >> 1), 0xc, var30,
                  0xa, 0xf, &var31, &var32, 0);

    memset((void*)var34, (int)(0), (unsigned int)(0x50));
    for (unsigned char var37 = 0; var37 < 10; var37++) {
        struct Struct_ov013_02187a58_4* var38 = &var34[var37];
        struct Struct_ov013_02187a58_3* var39 = func_0208e024((struct Struct_0208e024*)(var23 + 0xc), var27, var37);
        if (var39 != 0) {
            var38->unknown_0_ = var39->unknown_0_;
            var38->unknown_4_ = _ffltu(var39->unknown_2_2_);
        }
    }
    func_020749ac(var34, 0, 9, 0);

    struct Struct_ov013_02187a58_3* var40 =
        func_0208e06c((struct Struct_0208e06c*)(var23 + 0xc), (short)var34[0].unknown_0_);
    int var41 = 0;
    while (data_ov013_02187dc8[var41] >= 0) {
        if (data_ov013_02187dc8[var41] == var40->unknown_3_1_) {
            var23[0x6a] = (unsigned char)var41;
            break;
        }
        var41++;
    }

    for (unsigned char var42 = 0; var42 < 10; var42++) {
        var25 = 3;
        struct Struct_ov013_02187a58_3* var43 =
            func_0208e06c((struct Struct_0208e06c*)(var23 + 0xc), (short)var34[var42].unknown_0_);
        if (var43 != 0) {
            int var44 = var43->unknown_2_2_;
            if (var28 >= var44) {
                var25 = 0xf;
            }
            __clear(var33, 0x20);
            sprintf(var33, &data_ov013_02187ec3, var44);
            func_0204f41c(arg1, (short)(0x22 - func_020420e8(var33, 0)), (short)var29, var33,
                          0xa, (unsigned char)var25, &var31, &var32, 0);

            __clear(var35, 0x100);
            __clear(var36, 0x100);
            func_02046608(func_020421a0(), 0xa, var43->unknown_4_, var35, 0x100, 0, 0);
            func_020e4864(var35, var36, 1, 0, 0, 0);

            if (var43->unknown_3_7_ != 0 && *(signed char*)(var23 + 0x6a) >= 0) {
                (*(short**)(var23 + 0x50))[var42] = (short)(func_020420e8(var36, 0) + 0x2e);
                (*(short**)(var23 + 0x54))[var42] = (short)(var29 - 2);
                if (var25 == 0xf) {
                    (*(unsigned char**)(var23 + 0x58))[var42] = 1;
                }
            }

            func_0204f41c(arg1, 0x2e, (short)var29, var36, 0xa, (unsigned char)var25, &var31, &var32, 0);
            var29 += 0xf;
        }
    }
}
#endif
