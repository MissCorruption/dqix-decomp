#if defined(jpn)
#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"
#include "Combat/TryApplyElemFields.h"

extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02041e70(char*, int);
extern "C" int func_02042158(char*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" int func_020d2ff0(const char*);
extern "C" int func_020d3018(const char*, const char*);
extern "C" int func_02001aec(const void*, const void*, unsigned int);
extern "C" const char data_ov023_021fcd20[];

extern "C" ARM void func_ov023_021d9a6c(char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
    unsigned int var1 = var0->unknown_d9c_;
    if (!(var1 & 0x100)) return;
    if (var0->unknown_c58_ >= 11) {
        var0->unknown_d9c_ = var1 & ~0x100;
        return;
    }

    unsigned char var2 = var0->unknown_da3_;
    short var3 = (short)(var2 * 100);
    short var4[7];
    var4[0] = (short)(var3 + 0x2710);
    var4[1] = (short)(var0->unknown_da4_[var2] + 0x2af8);
    var4[2] = (short)(var3 + 0x3a98 + var0->unknown_dac_[var2]);
    var4[3] = (short)(var0->unknown_dae_[var2] + 0x3e80);
    var4[4] = (short)(var3 + 0x2ee0 + var0->unknown_da6_[var2]);
    var4[5] = (short)(var0->unknown_daa_[var2] + 0x36b0);
    var4[6] = (short)(var0->unknown_da8_[var2] + 0x32c8);
    memset(var0->unknown_f8_, 0, 0x800);

    for (int var5 = 0; var5 < var0->unknown_da0_[var0->unknown_da3_]; var5++) {
        if (var5 == var0->unknown_c58_ - 1)
            func_02041e70(var0->unknown_f8_, 14);
        else
            func_02041e70(var0->unknown_f8_, 15);
        if (var5 < 7) {
            short var6 = var4[var5];
            func_02042158(var0->unknown_f8_, (10 - func_020d2ff0((const char*)func_020e0434(&var0->unknown_e0_, var6))) * 5);
            func_02042058(var0->unknown_f8_, (const char*)func_020e0434(&var0->unknown_e0_, var6));
            func_02042058(var0->unknown_f8_, (const char*)func_020e0434(&var0->unknown_e0_, 0x4273));
        } else if (var5 == 7) {
            if (func_020d3018(var0->unknown_d74_[var0->unknown_da3_], (const char*)func_020e0434(&var0->unknown_e0_, 0x4272)) == 0) {
                func_02042058(var0->unknown_f8_, (const char*)func_020e0434(&var0->unknown_e0_, 0x4274));
            } else {
                char var7[11] = {};
                memcpy(var7, var0->unknown_d74_[var0->unknown_da3_], sizeof(var7));
                char var8[3] = {};
                for (int var9 = 1; var9 < 5; var9++) {
                    memcpy(var8, &var7[var9 * 2], 2);
                    if (func_02001aec(var8, data_ov023_021fcd20, 2) == 0) {
                        memset(&var7[var9 * 2], 0, sizeof(var7) - var9 * 2);
                        break;
                    }
                }
                func_02042158(var0->unknown_f8_, (10 - func_020d2ff0(var7)) * 5);
                func_02042058(var0->unknown_f8_, var7);
            }
        }
    }
    func_0205d5d0((Struct_0205d5d0*)&var0->unknown_1f8_[0], 0, (int)var0->unknown_f8_, 0);
    var0->unknown_d9c_ &= ~0x100;
}
#else
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0201099c_3;
extern "C" int func_020e0434(Struct_0201099c_3*, int);
extern "C" int func_02041e70(char*, int);
extern "C" int func_02041a28(char*, int);
extern "C" int func_02042058(char*, const char*);
extern "C" int func_020420e8(void*, int);

struct Struct_0205d5d0;
extern "C" int func_0205d5d0(Struct_0205d5d0*, int, int, int, unsigned char);

// USA: func_ov023_021d9a6c
extern "C" ARM void func_ov023_021d9a6c(char* arg0) {
    int var10 = *(int*)(arg0 + 0xd9c);
    if (!(var10 & 0x100)) return;

    if (*(signed char*)(arg0 + 0xc58) >= 0xb) {
        *(int*)(arg0 + 0xd9c) = var10 & ~0x100;
        return;
    }

    unsigned char var11 = *(unsigned char*)(arg0 + 0xda3);
    char* var12 = *(char**)(arg0 + 0xf8);
    char* var13 = arg0 + var11;
    short var14 = (short)(var11 * 100);

    short var15[7];
    var15[0] = (short)(var14 + 0x2710);
    var15[1] = (short)(*(unsigned char*)(var13 + 0xda4) + 0x2af8);
    var15[2] = (short)(var14 + 0x3a98 + *(unsigned char*)(var13 + 0xdac));
    var15[3] = (short)(*(unsigned char*)(var13 + 0xdae) + 0x3e80);
    var15[4] = (short)(var14 + 0x2ee0 + *(unsigned char*)(var13 + 0xda6));
    var15[5] = (short)(*(unsigned char*)(var13 + 0xdaa) + 0x36b0);
    var15[6] = (short)(*(unsigned char*)(var13 + 0xda8) + 0x32c8);

    memset(var12, 0, 0x960);

    int var16;
    for (var16 = 0; var16 < *(signed char*)(arg0 + *(unsigned char*)(arg0 + 0xda3) + 0xda0); var16++) {
        signed char var17 = *(signed char*)(arg0 + 0xc58);
        int var18 = 15;
        if (var16 == var17 - 1) var18 = 14;
        func_02041e70(var12, var18);

        if (var16 < 7) {
            short var19 = var15[var16];
            func_02041a28(var12, 0x32 - func_020420e8((void*)func_020e0434((Struct_0201099c_3*)(arg0 + 0xe0), var19), 0));
            func_02042058(var12, (const char*)func_020e0434((Struct_0201099c_3*)(arg0 + 0xe0), var19));
            func_02042058(var12, (const char*)func_020e0434((Struct_0201099c_3*)(arg0 + 0xe0), 0x4273));
        } else if (var16 == 7) {
            char* var20 = (*(char***)(arg0 + 0xdb0))[*(unsigned char*)(arg0 + 0xda3)];
            if (*(signed char*)var20 != 0) {
                func_02041a28(var12, 0x32 - func_020420e8(var20, 0));
                func_02042058(var12, var20);
            } else {
                func_02042058(var12, (const char*)func_020e0434((Struct_0201099c_3*)(arg0 + 0xe0), 0x4274));
            }
        }
    }

    func_0205d5d0((Struct_0205d5d0*)(arg0 + 0x1f8), 0, (int)var12, 0, 0);
    *(int*)(arg0 + 0xd9c) &= ~0x100;
}

#endif
