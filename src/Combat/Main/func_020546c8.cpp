#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020546c8;

extern "C" void* func_02055090(struct Struct_020546c8* arg0);
extern "C" void* func_020550a8(struct Struct_020546c8* arg0);
extern "C" void* func_020550c0(struct Struct_020546c8* arg0);
extern "C" void* func_020550d8(struct Struct_020546c8* arg0);
extern "C" void* func_02055120(struct Struct_020546c8* arg0);
extern "C" void* func_02055138(struct Struct_020546c8* arg0);
extern "C" void* func_02055150(struct Struct_020546c8* arg0);
extern "C" int func_02055168(struct Struct_020546c8* arg0);

struct Struct_020546c8_9;
extern "C" bool func_02054f3c(struct Struct_020546c8_9** arg0, SafeAllocator* arg1);
struct Struct_020546c8_10;
extern "C" bool func_02054ef8(struct Struct_020546c8_10** arg0, SafeAllocator* arg1);
struct Struct_020546c8_11;
extern "C" bool func_02054eb4(struct Struct_020546c8_11** arg0, SafeAllocator* arg1);
struct Struct_020546c8_12;
extern "C" int func_02054e70(struct Struct_020546c8_12** arg0, SafeAllocator* arg1);

struct Struct_020546c8 {
    SafeAllocator* unknown_0_;
    void* unknown_4_;
    SignedAllocatorList unknown_8_[3];
    SignedAllocatorList unknown_2c_[3];
    SignedAllocatorList unknown_50_[3];
    SignedAllocatorList unknown_74_;
    SignedAllocatorList unknown_80_[3];
    SignedAllocatorList unknown_a4_;
    SignedAllocatorList unknown_b0_[2];
    SignedAllocatorList unknown_c8_[2];
    SignedAllocatorList unknown_e0_;
    SignedAllocatorList unknown_ec_[4];
    SignedAllocatorList unknown_11c_;
};

struct Struct_020546c8_2 {
    char unknown_0_[4];
    void* unknown_4_;
    char unknown_8_[4];
    unsigned short unknown_c_;
};

struct Struct_020546c8_3 {
    void* unknown_0_[3];
    void* unknown_c_[3];
    void* unknown_18_[3];
    unsigned char unknown_24_[3];
    unsigned char unknown_27_[3];
    unsigned char unknown_2a_[3];
};

struct Struct_020546c8_4 {
    void* unknown_0_;
    unsigned char unknown_4_;
};

struct Struct_020546c8_5 {
    void* unknown_0_[3];
    void* unknown_c_;
    unsigned char unknown_10_[3];
    unsigned char unknown_13_;
};

struct Struct_020546c8_6 {
    void* unknown_0_[2];
    unsigned char unknown_8_[2];
};

struct Struct_020546c8_7 {
    char unknown_0_[4];
    void* unknown_4_;
    unsigned char unknown_8_;
};

struct Struct_020546c8_8 {
    void* unknown_0_[4];
    unsigned char unknown_10_[4];
};

// USA: func_020546c8
extern "C" ARM void func_020546c8(struct Struct_020546c8* arg0) {
    struct Struct_020546c8_2* var0 = (struct Struct_020546c8_2*)func_02055090(arg0);
    if (var0 != NULL && var0->unknown_c_ != 0) {
        struct Struct_020546c8_9* var1 = NULL;
        if (func_02054f3c(&var1, arg0->unknown_0_)) {
            arg0->unknown_11c_.InsertAtEnd((SignedAllocatorHeader*)var1);
            *(int*)var1 = (int)var0->unknown_4_;
            for (int var2 = 1; var2 < var0->unknown_c_; var2++) {
                var1 = NULL;
                if (func_02054f3c(&var1, arg0->unknown_0_)) {
                    arg0->unknown_11c_.InsertAtEnd((SignedAllocatorHeader*)var1);
                    *(int*)var1 = (int)((char*)var0->unknown_4_ + var2 * 0x1c);
                }
            }
        }
    }

    struct Struct_020546c8_3* var3 = (struct Struct_020546c8_3*)func_020550a8(arg0);
    if (var3 != NULL) {
        for (int var4 = 0; var4 < 3; var4++) {
            if (var3->unknown_24_[var4] != 0) {
                struct Struct_020546c8_10* var5 = NULL;
                if (func_02054ef8(&var5, arg0->unknown_0_)) {
                    arg0->unknown_8_[var4].InsertAtEnd((SignedAllocatorHeader*)var5);
                    *(int*)var5 = (int)var3->unknown_0_[var4];
                    for (int var6 = 1; var6 < var3->unknown_24_[var4]; var6++) {
                        var5 = NULL;
                        if (func_02054ef8(&var5, arg0->unknown_0_)) {
                            arg0->unknown_8_[var4].InsertAtEnd((SignedAllocatorHeader*)var5);
                            *(int*)var5 = (int)((char*)var3->unknown_0_[var4] + var6 * 8);
                        }
                    }
                }
            }
            if (var3->unknown_27_[var4] != 0) {
                struct Struct_020546c8_10* var7 = NULL;
                if (func_02054ef8(&var7, arg0->unknown_0_)) {
                    arg0->unknown_2c_[var4].InsertAtEnd((SignedAllocatorHeader*)var7);
                    *(int*)var7 = (int)var3->unknown_c_[var4];
                    for (int var8 = 1; var8 < var3->unknown_27_[var4]; var8++) {
                        var7 = NULL;
                        if (func_02054ef8(&var7, arg0->unknown_0_)) {
                            arg0->unknown_2c_[var4].InsertAtEnd((SignedAllocatorHeader*)var7);
                            *(int*)var7 = (int)((char*)var3->unknown_c_[var4] + var8 * 8);
                        }
                    }
                }
            }
            if (var3->unknown_2a_[var4] != 0) {
                struct Struct_020546c8_10* var9 = NULL;
                if (func_02054ef8(&var9, arg0->unknown_0_)) {
                    arg0->unknown_50_[var4].InsertAtEnd((SignedAllocatorHeader*)var9);
                    *(int*)var9 = (int)var3->unknown_18_[var4];
                    for (int var10 = 1; var10 < var3->unknown_2a_[var4]; var10++) {
                        var9 = NULL;
                        if (func_02054ef8(&var9, arg0->unknown_0_)) {
                            arg0->unknown_50_[var4].InsertAtEnd((SignedAllocatorHeader*)var9);
                            *(int*)var9 = (int)((char*)var3->unknown_18_[var4] + var10 * 8);
                        }
                    }
                }
            }
        }
    }

    struct Struct_020546c8_4* var11 = (struct Struct_020546c8_4*)func_020550c0(arg0);
    if (var11 != NULL && var11->unknown_4_ != 0) {
        struct Struct_020546c8_10* var12 = NULL;
        if (func_02054ef8(&var12, arg0->unknown_0_)) {
            arg0->unknown_74_.InsertAtEnd((SignedAllocatorHeader*)var12);
            *(int*)var12 = (int)var11->unknown_0_;
            for (int var13 = 1; var13 < var11->unknown_4_; var13++) {
                var12 = NULL;
                if (func_02054ef8(&var12, arg0->unknown_0_)) {
                    arg0->unknown_74_.InsertAtEnd((SignedAllocatorHeader*)var12);
                    *(int*)var12 = (int)((char*)var11->unknown_0_ + var13 * 8);
                }
            }
        }
    }

    struct Struct_020546c8_5* var14 = (struct Struct_020546c8_5*)func_020550d8(arg0);
    if (var14 != NULL) {
        for (int var15 = 0; var15 < 3; var15++) {
            if (var14->unknown_10_[var15] != 0) {
                struct Struct_020546c8_10* var16 = NULL;
                if (func_02054ef8(&var16, arg0->unknown_0_)) {
                    arg0->unknown_80_[var15].InsertAtEnd((SignedAllocatorHeader*)var16);
                    *(int*)var16 = (int)var14->unknown_0_[var15];
                    for (int var17 = 1; var17 < var14->unknown_10_[var15]; var17++) {
                        var16 = NULL;
                        if (func_02054ef8(&var16, arg0->unknown_0_)) {
                            arg0->unknown_80_[var15].InsertAtEnd((SignedAllocatorHeader*)var16);
                            *(int*)var16 = (int)((char*)var14->unknown_0_[var15] + var17 * 8);
                        }
                    }
                }
            }
        }
        if (var14->unknown_13_ != 0) {
            struct Struct_020546c8_11* var18 = NULL;
            if (func_02054eb4(&var18, arg0->unknown_0_)) {
                arg0->unknown_a4_.InsertAtEnd((SignedAllocatorHeader*)var18);
                *(int*)var18 = (int)var14->unknown_c_;
                for (int var19 = 1; var19 < var14->unknown_13_; var19++) {
                    var18 = NULL;
                    if (func_02054eb4(&var18, arg0->unknown_0_)) {
                        arg0->unknown_a4_.InsertAtEnd((SignedAllocatorHeader*)var18);
                        *(int*)var18 = (int)((char*)var14->unknown_c_ + var19 * 0x10);
                    }
                }
            }
        }
    }

    struct Struct_020546c8_6* var20 = (struct Struct_020546c8_6*)func_02055120(arg0);
    if (var20 != NULL) {
        for (int var21 = 0; var21 < 2; var21++) {
            if (var20->unknown_8_[var21] != 0) {
                struct Struct_020546c8_10* var22 = NULL;
                if (func_02054ef8(&var22, arg0->unknown_0_)) {
                    arg0->unknown_b0_[var21].InsertAtEnd((SignedAllocatorHeader*)var22);
                    *(int*)var22 = (int)var20->unknown_0_[var21];
                    for (int var23 = 1; var23 < var20->unknown_8_[var21]; var23++) {
                        var22 = NULL;
                        if (func_02054ef8(&var22, arg0->unknown_0_)) {
                            arg0->unknown_b0_[var21].InsertAtEnd((SignedAllocatorHeader*)var22);
                            *(int*)var22 = (int)((char*)var20->unknown_0_[var21] + var23 * 8);
                        }
                    }
                }
            }
        }
    }

    struct Struct_020546c8_6* var24 = (struct Struct_020546c8_6*)func_02055138(arg0);
    if (var24 != NULL) {
        for (int var25 = 0; var25 < 2; var25++) {
            if (var24->unknown_8_[var25] != 0) {
                struct Struct_020546c8_11* var26 = NULL;
                if (func_02054eb4(&var26, arg0->unknown_0_)) {
                    arg0->unknown_c8_[var25].InsertAtEnd((SignedAllocatorHeader*)var26);
                    *(int*)var26 = (int)var24->unknown_0_[var25];
                    for (int var27 = 1; var27 < var24->unknown_8_[var25]; var27++) {
                        var26 = NULL;
                        if (func_02054eb4(&var26, arg0->unknown_0_)) {
                            arg0->unknown_c8_[var25].InsertAtEnd((SignedAllocatorHeader*)var26);
                            *(int*)var26 = (int)((char*)var24->unknown_0_[var25] + var27 * 0x10);
                        }
                    }
                }
            }
        }
    }

    struct Struct_020546c8_7* var28 = (struct Struct_020546c8_7*)func_02055150(arg0);
    if (var28 != NULL && var28->unknown_8_ != 0) {
        struct Struct_020546c8_12* var29 = NULL;
        if (func_02054e70(&var29, arg0->unknown_0_)) {
            arg0->unknown_e0_.InsertAtEnd((SignedAllocatorHeader*)var29);
            *(int*)var29 = (int)var28->unknown_4_;
            for (int var30 = 1; var30 < var28->unknown_8_; var30++) {
                var29 = NULL;
                if (func_02054e70(&var29, arg0->unknown_0_)) {
                    arg0->unknown_e0_.InsertAtEnd((SignedAllocatorHeader*)var29);
                    *(int*)var29 = (int)((char*)var28->unknown_4_ + var30 * 0xc);
                }
            }
        }
    }

    struct Struct_020546c8_8* var31 = (struct Struct_020546c8_8*)func_02055168(arg0);
    if (var31 != NULL) {
        for (int var32 = 0; var32 < 4; var32++) {
            if (var31->unknown_10_[var32] != 0) {
                struct Struct_020546c8_10* var33 = NULL;
                if (func_02054ef8(&var33, arg0->unknown_0_)) {
                    arg0->unknown_ec_[var32].InsertAtEnd((SignedAllocatorHeader*)var33);
                    *(int*)var33 = (int)var31->unknown_0_[var32];
                    for (int var34 = 1; var34 < var31->unknown_10_[var32]; var34++) {
                        var33 = NULL;
                        if (func_02054ef8(&var33, arg0->unknown_0_)) {
                            arg0->unknown_ec_[var32].InsertAtEnd((SignedAllocatorHeader*)var33);
                            *(int*)var33 = (int)((char*)var31->unknown_0_[var32] + var34 * 8);
                        }
                    }
                }
            }
        }
    }
}
