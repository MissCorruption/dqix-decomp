#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02072a68 { short unknown_0_; void* unknown_4_; };
struct Struct_02072a68_2 { struct Struct_02072a68* unknown_0_; short unknown_4_; };
extern "C" ARM void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

struct Struct_0208166c {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};
struct Struct_0208166c_2 {
    unsigned char unknown_0_0_ : 2;
    unsigned char unknown_0_2_ : 6;
};

extern "C" ARM int func_02042190(int arg0);
extern "C" ARM int func_020421a0(void);

extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
extern "C" int func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);

#define F13(e) ((struct Struct_0208166c*)((e) + 0x13))
#define F14(e) ((struct Struct_0208166c_2*)((e) + 0x14))

// USA: func_0208166c
extern "C" ARM void func_0208166c(void* arg0, void* arg1, void* arg2) {
    char* var0 = (char*)arg0;
    char* var1 = (char*)arg1;
    char* var2 = (char*)arg2;

    int var3 = F13(var2)->unknown_0_4_;
    if (*(unsigned char*)(var2 + 0x2a) & 0x4) {
        var3 = 5;
    }

    int var4 = func_02042190(F13(var2)->unknown_0_0_);

    void* var5 = func_02072a68((struct Struct_02072a68_2*)*(void**)(var0 + 0x0), *(short*)(var2 + 0xe));
    if (var5) {
        if (*(unsigned char*)(var2 + 0x2a) & 0x8) {
            int var6 = *(short*)(var1 + 0xa8) << 0x13;
            int var7 = func_020420e8(var5, var4);
            int var8 = (int)((unsigned int)((var6 >> 0x10) - var7) << 0x10) >> 0x11;
            *(short*)(var2 + 0x6) = (short)var8;
        }
    }

    int var9 = F13(var2)->unknown_0_0_;
    *(short*)(var1 + 0xb4) = (short)var9;
    *(short*)(var1 + 0xb6) = (short)(var9 + 1);

    if (*(unsigned char*)(var2 + 0x2a) & 0x10) {
        int var10 = F13(var2)->unknown_0_0_;
        if (var10 == 0xc) {
            *(short*)(var1 + 0xb4) = (short)var10;
            *(short*)(var1 + 0xb6) = 0x14;
        }
    }

    int var11 = 0;
    if (F14(var2)->unknown_0_0_) {
        var11 = func_020420e8(var5, 0);
    }

    void* var12 = var5;
    if (*(unsigned char*)(var2 + 0x2a) & 0x20) {
        int var13 = func_020421a0();
        memset(*(void**)(var0 + 0x18), 0, 0x960);
        func_02046608(var13, F13(var2)->unknown_0_0_, var5, *(void**)(var0 + 0x18), *(unsigned char*)(var2 + 0x2b), 0, 0);
        var12 = *(void**)(var0 + 0x18);
        unsigned char var14 = *(unsigned char*)(var2 + 0x2c);
        *(short*)(var1 + 0xb4) = (short)F13(var2)->unknown_0_0_;
        *(short*)(var1 + 0xb6) = var14;
    }

    short var15 = *(short*)(var2 + 0x6);
    short var16 = *(short*)(var2 + 0x28);
    short var17 = *(short*)(var2 + 0x8);
    int var18 = (short)(var15 + var16 - var11);
    func_0204f41c(var1, var18, var17, var12, F13(var2)->unknown_0_0_, var3, var2 + 0xa, var2 + 0xc, 0);
}
