#include <globaldefs.h>
#if defined(jpn)
extern char data_ov004_02170e42;
extern char data_ov004_02170598;
extern "C" void* func_02011aa0(char*, unsigned int);
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "NitroSDK/Memory.h"

extern "C" int func_020421a0();
extern "C" void func_02046380(void* arg0);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void*);

struct Struct_ov004_021549e4_2 {
    char unknown_0_[0x28];
    unsigned short unknown_28_;
};
extern "C" unsigned int func_ov023_021f9bb0(struct Struct_ov004_021549e4_2* arg0);

struct Struct_02046574 { char unknown_0_[0x40]; };
struct Struct_02046574_2 {
    char unknown_0_[0x4ac];
    struct Struct_02046574 unknown_4ac_[16];
};
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
extern "C" void func_020464e8(char* arg0, int arg1, char* arg2);

extern unsigned char* data_ov004_02171010;

// USA: func_ov004_02164e40
extern "C" ARM int func_ov004_02164e40(void* arg0) {
    void* var0 = (void*)func_020421a0();
    func_02046380(var0);

    GameState* var1 = GameState::GetInstance();
    func_020100a8(var1);
    GameObject* var2 = var1->GetUnknownGameObject();

    void* var3 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xa);
    if (!var3) return 0;
    if (func_ov023_021f6f10(var3) != 7) return 0;

    unsigned int var4 = func_ov023_021f9bb0((struct Struct_ov004_021549e4_2*)var3);

#if defined(jpn)
    char var5[32];
    char var6[32];
    char var7[32];
    char var8[32];
    VectorizedMemset(var5, 0, 32);
    VectorizedMemset(var6, 0, 32);
    VectorizedMemset(var7, 0, 32);
    VectorizedMemset(var8, 0, 32);

    unsigned int var9 = var4 * 0x1e4;
    unsigned char* var10 = data_ov004_02171010;
    unsigned char* var11 = var10 + 0xad5;
    var11 = var11 + var9;
    unsigned char var12 = *var11;
    if (var12 == 1) {
        char* var13 = (char*)var10 + 0xb20 + var9;
        strcpy(var5, var13 + 0x3b);
        char* var14 = (char*)data_ov004_02171010 + 0xb20;
        var14 = var14 + var9;
        strcpy(var6, var14 + 0x5b);
        strcpy(var7, &data_ov004_02170e42);
        char* var15 = (char*)data_ov004_02171010 + 0xb20;
        var15 = var15 + var9;
        strcpy(var8, var15 + 0x9b);
    } else if (var12 == 2) {
        char* var16 = (char*)var10 + 0xb20 + var9;
        strcpy(var5, var16 + 0x90);
        char* var17 = (char*)data_ov004_02171010 + 0xb20;
        var17 = var17 + var9;
        strcpy(var6, var17 + 0xb0);
        strcpy(var7, &data_ov004_02170598);
        char* var18 = (char*)data_ov004_02171010 + 0xb20;
        var18 = var18 + var9;
        strcpy(var8, var18 + 0xd0);
    }
    if (var2) {
        func_02046574((Struct_02046574_2*)var0, 0, (char*)var2->baseStats_);
    }
    func_02046574((Struct_02046574_2*)var0, 1, var5);
    func_02046574((Struct_02046574_2*)var0, 2, var6);
    func_02046574((Struct_02046574_2*)var0, 3, var7);
    func_02046574((Struct_02046574_2*)var0, 4, var8);
    func_02046574((Struct_02046574_2*)var0, 5, (char*)func_02011aa0((char*)var1, 0));
    func_02046574((Struct_02046574_2*)var0, 6, (char*)func_02011aa0((char*)var1, 1));
    func_02046574((Struct_02046574_2*)var0, 7, (char*)func_02011aa0((char*)var1, 2));
    func_02046574((Struct_02046574_2*)var0, 8, (char*)func_02011aa0((char*)var1, 3));
#else
    char var19[0x40];
    VectorizedMemset(var19, 0, 0x40);

    unsigned char* var20 = data_ov004_02171010;
    unsigned int var21 = var4 * 0x1c4;
    unsigned char* var22 = var20 + 0xad5;
    var22 = var22 + var21;
    unsigned char var23 = *var22;
    if (var23 == 1) {
        char* var24 = (char*)var20 + 0xb20;
        var24 = var24 + var21;
        strcpy(var19, var24 + 0x63);
    } else if (var23 == 2) {
        char* var25 = (char*)var20 + 0xb20;
        var25 = var25 + var21;
        strcpy(var19, var25 + 0xf8);
    }

    if (var2) {
        char* var26 = (char*)var2->baseStats_;
        func_02046574((struct Struct_02046574_2*)var0, 0, var26);
    }
    func_020464e8((char*)var0, 0, var19);
#endif
    return 0;
}
