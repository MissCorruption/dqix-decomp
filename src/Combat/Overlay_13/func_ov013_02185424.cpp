#include <globaldefs.h>

#if defined(jpn)
extern "C" int func_0204234c(char*, int);
extern "C" int func_020423d4(char*, int, int, int, int);
#endif

struct Struct_ov013_021846a0_2 {
#if defined(jpn)
    char unknown_0_[0x5ac];
#else
    char unknown1_0_[0x620];
#endif
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
    char* unknown_658_;
    int unknown_65c_;
    int unknown_660_;
    unsigned char unknown_664_[4];
    int unknown_668_;
    int unknown_66c_;
    int unknown_670_;
    int unknown_674_[5];
    int unknown_688_[5];
    unsigned char unknown_69c_[5];
    char unknown_6a1_[8];
    unsigned char unknown_6a9_[5];
};

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int func_02041a28(char* arg0, int arg1);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041fac(char* arg0, int arg1, int arg2);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" int func_02041e70(char* arg0, int arg1);
extern "C" int func_02041a5c(char* arg0, int arg1);
extern "C" int func_02041cc0(char* arg0, int arg1);
extern "C" int func_02041d48(char* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

// USA: func_ov013_02185424
extern "C" ARM void func_ov013_02185424(Struct_ov013_021846a0_2* arg0, char* arg1) {
    char var0[0x100];
    __clear(var0, 0x100);

#if defined(jpn)
    int var1 = 0x10;
    int var2 = 0x78 - (int)(((float)var1 / 4.0f) * 12.0f);
    int var3 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2718);
    sprintf(var0, (const char*)var3, var2);
    func_02042058(arg1, var0);
#else
    char* var4 = (char*)func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2718);
    int var5 = func_020420e8(var4, 0);
    func_02041a28(var0, (0xf0 - var5) >> 1);
    func_02042058(var0, var4);
    func_02041fac(arg1, (int)var0, 0x10);

#endif

    if (arg0->unknown_648_ == 2) {
        func_02041c08(arg1, arg0->unknown_65c_, 8, 3, 6, 2);
    }
    func_02041ea4(arg1, arg0->unknown_65c_);

    for (unsigned char var6 = 0; var6 < 5; var6++) {
        if (arg0->unknown_69c_[var6] == 0) {
            func_02041e70(arg1, 0xf);
        } else {
            func_02041e70(arg1, 3);
        }
        int var7 = (short)(arg0->unknown_6a9_[var6] + 0x64);
        int var8 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, var7);
        int var9 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2711);
        sprintf(var0, (const char*)var9, var6, var8);
        func_02042058(arg1, var0);
        if (var6 != 4) {
            int var10 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0);
            sprintf(var0, (const char*)var10);
        }
        func_02042058(arg1, var0);
    }

#if defined(jpn)
    func_020420e8(arg1, 0x15);
#else
    func_02041a5c(arg1, 0x15);
#endif

#if defined(jpn)
    for (int var11 = 0; var11 < 5; var11++) {
        int var12;
        if (arg0->unknown_69c_[var11] == 1) {
            var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2712);
            sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, arg0->unknown_688_[var11], arg0->unknown_674_[var11]);
        } else if (var11 == arg0->unknown_65c_) {
            if (arg0->unknown_688_[var11] == 0x64) {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2713);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, var11 + 5, arg0->unknown_688_[var11], var11 + 0xa, arg0->unknown_674_[var11], arg0->unknown_674_[var11] + arg0->unknown_688_[var11]);
            }
            else if (arg0->unknown_688_[var11] >= 0xa) {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2713);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, var11 + 5, arg0->unknown_688_[var11], var11 + 0xa, arg0->unknown_674_[var11], arg0->unknown_674_[var11] + arg0->unknown_688_[var11]);
            }
            else if (arg0->unknown_688_[var11] != 0) {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2713);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, var11 + 5, arg0->unknown_688_[var11], var11 + 0xa, arg0->unknown_674_[var11], arg0->unknown_674_[var11] + arg0->unknown_688_[var11]);
            }
            else {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2714);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, var11 + 5, arg0->unknown_688_[var11], var11 + 0xa, arg0->unknown_674_[var11]);
            }
        } else {
            if (arg0->unknown_688_[var11] == 0x64) {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2715);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, arg0->unknown_688_[var11], arg0->unknown_674_[var11], arg0->unknown_674_[var11] + arg0->unknown_688_[var11]);
            }
            else if (arg0->unknown_688_[var11] >= 0xa) {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2715);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, arg0->unknown_688_[var11], arg0->unknown_674_[var11], arg0->unknown_674_[var11] + arg0->unknown_688_[var11]);
            }
            else if (arg0->unknown_688_[var11] != 0) {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2715);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, arg0->unknown_688_[var11], arg0->unknown_674_[var11], arg0->unknown_674_[var11] + arg0->unknown_688_[var11]);
            }
            else {
                var12 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0x2716);
                sprintf(var0, (const char*)var12, var11 * 0xd + 0x16, arg0->unknown_688_[var11], arg0->unknown_674_[var11]);
            }
        }
        func_02042058(arg1, var0);
        if (var11 != 4) {
            int var13 = func_020e0434((Struct_0201099c_3*)arg0->unknown_620_, 0);
            func_02042058(arg1, (const char*)var13);
        }
    }

#else
    int var14, var15;
    for (var15 = 0; var15 < 5; var15++) {
        var14 = var15 * 0xd;
        int var16 = arg0->unknown_674_[var15];
        int var17 = arg0->unknown_688_[var15];
        int var18;
        if (arg0->unknown_69c_[var15] == 1) {
            var18 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2712);
            sprintf(var0, (const char*)var18, var14 + 0x16, var17, var16);
        } else if (var15 == arg0->unknown_65c_) {
            if (var17 == 0) {
                var18 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2714);
                sprintf(var0, (const char*)var18, var14 + 0x16, 0xa, var17, 0xb, var16);
            } else {
                var18 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2713);
                sprintf(var0, (const char*)var18, var14 + 0x16, 0xa, var17, 0xb, var16, var16 + var17);
            }
        } else {
            if (var17 == 0) {
                var18 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2716);
                sprintf(var0, (const char*)var18, var14 + 0x16, var17, var16);
            } else {
                var18 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2715);
                sprintf(var0, (const char*)var18, var14 + 0x16, var17, var16, var16 + var17);
            }
        }
        func_02042058(arg1, var0);
        if (var15 != 4) {
            int var19 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0);
            func_02042058(arg1, (const char*)var19);
        }
    }

#endif
#if defined(jpn)
    func_0204234c(arg1, 0x57);
    func_020423d4(arg1, 0x7fff, 0x4a, 0x10, 0x57);
#else
    func_02041cc0(arg1, 0x57);
    func_02041d48(arg1, 0x7fff, 0x5a, 0x10, 0x57);
#endif

    int var20 = func_020e0434((struct Struct_0201099c_3*)arg0->unknown_620_, 0x2717);
    sprintf(var0, (const char*)var20, arg0->unknown_66c_);
    func_02042058(arg1, var0);
}
