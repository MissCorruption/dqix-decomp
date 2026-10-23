#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern char data_0211e33c[];

extern "C" int func_020aaf84(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020a93e0(char* arg0);
extern "C" void* func_0205ec34(void);
extern "C" int func_020a9a50(void* arg0, char* arg1, int arg2);
extern "C" void func_02042764(unsigned char* arg0, char* arg1, int arg2);
extern "C" void __clear(void* arg0, int arg1);

struct Struct_0201099c_16;
extern "C" int func_020865b0(struct Struct_0201099c_16* arg0);

extern "C" void* func_020d6c00();
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_020ac864(int arg0);

struct Struct_020ab5d4_5 {
    char unknown_0_[0x30];
    unsigned char unknown_30_;
    unsigned char unknown_31_;
    unsigned short unknown_32_;
};

struct Struct_020ab5d4 {
    struct Struct_020ab5d4_5 unknown_0_[4];
    int unknown_d0_;
    unsigned char unknown_d4_;
    unsigned char unknown_d5_;
    unsigned char unknown_d6_;
    unsigned char unknown_d7_;
};

struct Struct_020ab5d4_2 {
    char unknown_0_[0x3c00];
};

// USA: func_020ab5d4
#if defined(jpn)
struct Struct_020ab5d4_3 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned short unknown_e_;
};

struct Struct_020ab5d4_4 {
    struct Struct_020ab5d4_3 unknown_0_[4];
    int unknown_40_;
    unsigned char unknown_44_;
    unsigned char unknown_45_;
    unsigned char unknown_46_;
    unsigned char unknown_47_;
};

extern "C" ARM int func_020ab5d4(void* arg0, int arg1, int arg2, void* arg3) {
    if (func_020aaf84(arg0, 0, 0, 1) == 0) {
        return 0;
    }
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    unsigned char* var0 = (unsigned char*)&data_0211e33c[0] + 0x28000;
    GameState* var1 = GameState::GetInstance();
    unsigned char* var2 = var0 + 4;
    struct Struct_020ab5d4_4 var3;
    var3.unknown_44_ = var2[0x1d11];
    var3.unknown_40_ = *(unsigned short*)(var2 + 0x2c4c);
    int var4;
    for (var4 = 0; var4 < var3.unknown_44_; var4++) {
        unsigned char* var5 = var2 + (var2[0x1d0c] + var4) * 0x23c;
        if (var5 != 0) {
            struct Struct_020ab5d4_3* var6 = &var3.unknown_0_[var4];
            int var7 = func_020865b0((struct Struct_0201099c_16*)var5);
            var6->unknown_c_ = var7;
            unsigned char* var8 = var5 + var7;
            var6->unknown_d_ = var8[0xf];
            var6->unknown_e_ = var8[2];
            memcpy(var6->unknown_0_, var5 + 0x140, 0xc);
        }
    }
    unsigned char* var9 = var0 + 0x2cac;
    void* var10 = func_0205ec34();
    func_020a9a50(var9, (char*)var10, 0);
    var3.unknown_45_ = func_0206dfb0((int)var10, (unsigned char*)var10 + 0x8c, 0x796);
    var3.unknown_46_ = *(int*)var9;
    var3.unknown_47_ = func_0206dfb0((int)var10, (unsigned char*)var10 + 0x8c, 0x1142) != 0;
    memcpy((char*)var1 + 0x7c40, &var3, 0x48);
    memcpy(arg3, (char*)(((struct Struct_020ab5d4_2*)(var0 + 0x1d8)) + 1) + 0x3c, 4);
    if (func_020ac864(0) == 0) {
        BackgroundLoader::RemoveLockGlobal();
        return 0;
    }
    BackgroundLoader::RemoveLockGlobal();
    return 1;
}
#else
extern "C" ARM int func_020ab5d4(void* arg0, int arg1, int arg2, void* arg3) {
    if (func_020aaf84(arg0, 0, 0, 1) == 0) {
        return 0;
    }
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    unsigned int* var11 = (unsigned int*)func_020d6c00();
    func_020466e4(var11, 0x2000000);
    unsigned char* var12 = (unsigned char*)&data_0211e33c[0] + 0x28000;
    GameState* var13 = GameState::GetInstance();
    unsigned char* var14 = var12 + 4;
    func_020a93e0((char*)var14);
    char var15[0x30];
    struct Struct_020ab5d4 var16;
    var16.unknown_d4_ = var14[0x1d11];
    var16.unknown_d0_ = *(unsigned short*)(var14 + 0x2c4c);
    int var17;
    for (var17 = 0; var17 < var16.unknown_d4_; var17++) {
        unsigned char* var18 = var14 + (var14[0x1d0c] + var17) * 0x23c;
        if (var18 != 0) {
            struct Struct_020ab5d4_5* var19 = &var16.unknown_0_[var17];
            int var20 = func_020865b0((struct Struct_0201099c_16*)var18);
            var19->unknown_30_ = var20;
            unsigned char* var21 = var18 + var20;
            var19->unknown_31_ = var21[0xf];
            var19->unknown_32_ = var21[2];
            __clear(var15, 0x30);
            func_02042764(var18 + 0x140, var15, 1);
            memcpy(var19->unknown_0_, var15, 0x30);
        }
    }
    unsigned char* var22 = var12 + 0x2cac;
    void* var23 = func_0205ec34();
    func_020a9a50(var22, (char*)var23, 0);
    var16.unknown_d5_ = func_0206dfb0((int)var23, (unsigned char*)var23 + 0x8c, 0x796);
    var16.unknown_d6_ = *(int*)var22;
    var16.unknown_d7_ = func_0206dfb0((int)var23, (unsigned char*)var23 + 0x8c, 0x1142) != 0;
    memcpy((char*)var13 + 0x7e80, &var16, 0xd8);
    memcpy(arg3, (char*)(((struct Struct_020ab5d4_2*)(var12 + 0x1d8)) + 1) + 0x3c, 4);
    if (func_020ac864(0) == 0) {
        BackgroundLoader::RemoveLockGlobal();
        func_020466f4((struct Struct_02038598_4*)var11, 0x2000000);
        return 0;
    }
    BackgroundLoader::RemoveLockGlobal();
    func_020466f4((struct Struct_02038598_4*)var11, 0x2000000);
    return 1;
}
#endif
