#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov023_021f6f10(void* arg0);
#endif

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov024_021f6f10(void* arg0);
extern "C" int func_ov023_021fa598(void*);
extern "C" int func_ov023_021f9bc8(void*);
extern "C" void func_ov023_021f809c(void* arg0, void* arg1);

extern "C" int func_020421a0(void);

struct Struct_020a15bc_2 { unsigned int unknown_0_0_ : 9; unsigned int unknown_1_1_ : 23; unsigned int unknown_4_; unsigned int unknown_8_; };
struct Struct_020a15bc { struct Struct_020a15bc_2* unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
extern "C" struct Struct_020a15bc_2* func_020a15bc(struct Struct_020a15bc* arg0, int arg1);

struct Struct_02072a68 { short unknown_0_; void* unknown_4_; };
struct Struct_02072a68_2 { struct Struct_02072a68* unknown_0_; short unknown_4_; };
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);

extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int func_02046608(void* arg0, int arg1, unsigned int arg2, void* arg3, int arg4, int arg5, int arg6);

#if defined(jpn)
struct Struct_ov004_021707c8 { char unknown_0_[4]; short* unknown1_8_; struct Struct_020a15bc* unknown_8_; };
extern "C" void func_02041f50(void* arg0, char* arg1);
extern "C" void func_02042428(char* arg0, int arg1);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_ov023_021f8960(char* arg0, short arg1, unsigned short arg2);
#else
struct Struct_ov004_021707c8 { char unknown_0_[8]; short* unknown1_8_; struct Struct_020a15bc* unknown_c_; };
#endif
extern Struct_ov004_021707c8 data_ov004_021707c8;

// USA: func_ov004_021564f0
extern "C" ARM int func_ov004_021564f0(void* arg0) {
    void* var0 = func_ov011_021849c8(arg0);

    void* var1 = func_ov023_021f6880(var0, 3);
    if (!var1) {
        return 0;
    }
    if (func_ov024_021f6f10(var1) != 7) {
        return 0;
    }

    short var2 = *(short*)((char*)var1 + 0x5c);
    short var3 = *(short*)((char*)var1 + 0x5e);

    void* var4 = func_ov023_021f6880(var0, 0xb);
    if (!var4) {
        return 0;
    }
    if (func_ov024_021f6f10(var4) != 4) {
        return 0;
    }

    struct Struct_02072a68_2* var5 = (struct Struct_02072a68_2*)func_ov023_021fa598(var4);
    if (!data_ov004_021707c8.unknown1_8_) {
        return 0;
    }

#if defined(jpn)
    int var6 = func_ov023_021f9bc8(var1) + (short)(var2 * 16);
    short var7 = data_ov004_021707c8.unknown1_8_[var6];

    struct Struct_020a15bc_2* var8 = func_020a15bc(data_ov004_021707c8.unknown_8_, var7);
    if (var8 != NULL) {

    void* var9 = (void*)func_020421a0();
    char* var10 = *(char**)((char*)var9 + 0x28);

    void* var11 = func_ov023_021f6880(var0, 0x82);
    if (!var11) {
        return 0;
    }
    if (func_ov024_021f6f10(var11) != 8) {
        return 0;
    }

    *(void**)((char*)var11 + 0x20) = 0;
    if (var7 > 0) {
        memset(var10, 0, 0x800);
        void* var12 = func_02072a68(var5, var7);
        func_02041f50(var12, var10 + 0x700);
        int var13 = func_020d2ff0(var10 + 0x700);
        int var14 = (0x80 - (var13 / 2) * 12) / 2;
        int var15 = 6;
        if (var13 != func_020d2ff0((const char*)var12)) {
            var15 = 8;
        }
        func_02042428(var10, 0xc);
        func_02041a90(var10, var14, var15);
        func_02042058(var10, (const char*)var12);
        *(void**)((char*)var11 + 0x20) = var10;
    }

    void* var16 = func_ov023_021f6880(var0, 0x35);
    if (!var16) {
        return 0;
    }
    if (func_ov024_021f6f10(var16) != 6) {
        return 0;
    }
    *(short*)((char*)var16 + 0x104) = var2;
    *(short*)((char*)var16 + 0x106) = var3;
    func_ov023_021f809c(var16, arg0);

    void* var17 = func_ov023_021f6880(var0, 0x83);
    if (!var17) {
        return 0;
    }
    if (func_ov024_021f6f10(var17) != 8) {
        return 0;
    }

    *(void**)((char*)var17 + 0x20) = 0;
    if (var7 > 0) {
        *(void**)((char*)var17 + 0x20) = (void*)var8->unknown_4_;
    }

    void* var18 = func_ov023_021f6880(var0, 0x36);
    if (!var18) {
        return 0;
    }
    if (func_ov024_021f6f10(var18) != 6) {
        return 0;
    }
    func_ov023_021f8960((char*)var18, 0, 8);
    *(short*)((char*)var18 + 0x104) = var2;
    *(short*)((char*)var18 + 0x106) = var3;
    func_ov023_021f809c(var18, arg0);

    }
#else
    int var19 = func_ov023_021f9bc8(var1) + (short)(var2 * 12);
    short var20 = data_ov004_021707c8.unknown1_8_[var19];

    struct Struct_020a15bc_2* var21 = func_020a15bc(data_ov004_021707c8.unknown_c_, var20);
    if (var21 != NULL) {

    void* var22 = (void*)func_020421a0();
    char* var23 = *(char**)((char*)var22 + 0x5c);

    void* var24 = func_ov023_021f6880(var0, 0x82);
    if (!var24) {
        return 0;
    }
    if (func_ov024_021f6f10(var24) != 8) {
        return 0;
    }

    *(void**)((char*)var24 + 0x20) = 0;
    if (var20 > 0) {
        memset(var23, 0, 0x960);
        void* var25 = func_02072a68(var5, var20);
        int var26 = 0xa0 - func_020420e8(var25, 1);
        int var27 = var26 / 2;
        if (var27 < 0) {
            var27 = 0;
        }
        func_02041a90(var23, var27, 6);
        if (var25) {
            func_02042058(var23, (const char*)var25);
        }
        *(void**)((char*)var24 + 0x20) = var23;
    }

    void* var28 = func_ov023_021f6880(var0, 0x35);
    if (!var28) {
        return 0;
    }
    if (func_ov024_021f6f10(var28) != 6) {
        return 0;
    }
    *(short*)((char*)var28 + 0x104) = var2;
    *(short*)((char*)var28 + 0x106) = var3;
    func_ov023_021f809c(var28, arg0);

    void* var29 = func_ov023_021f6880(var0, 0x83);
    if (!var29) {
        return 0;
    }
    if (func_ov024_021f6f10(var29) != 8) {
        return 0;
    }

    *(void**)((char*)var29 + 0x20) = 0;
    if (var20 > 0) {
        memset(var23, 0, 0x960);
        func_02046608(var22, 0xc, var21->unknown_4_, var23, 0xe3, 0, 1);
        *(void**)((char*)var29 + 0x20) = var23;
    }

    void* var30 = func_ov023_021f6880(var0, 0x36);
    if (!var30) {
        return 0;
    }
    if (func_ov024_021f6f10(var30) != 6) {
        return 0;
    }
    *(short*)((char*)var30 + 0x104) = var2;
    *(short*)((char*)var30 + 0x106) = var3;
    func_ov023_021f809c(var30, arg0);

    }
#endif
    return 0;
}
