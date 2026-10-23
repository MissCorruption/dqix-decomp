#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02086e9c;
struct Struct_02086e50;
struct Struct_02086a04;
struct Struct_02087574;
struct Struct_0201099c_16;
struct Struct_020dcd40 { unsigned char unknown_0_[0x30]; };

extern "C" unsigned short* func_02012fe4(void* arg0);
extern "C" int func_02086e9c(Struct_02086e9c* arg0);
extern "C" Struct_02086e50* func_02086e50(Struct_02086e50* arg0, int arg1);
extern "C" void* func_020108f0(void* arg0, int arg1);
extern "C" char* func_02010954(char* arg0);
extern "C" void func_02086380(unsigned char* arg0);
extern "C" void func_02082d6c(void* arg0, void* arg1);
extern "C" void func_ov017_0218f064(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" void func_020875c4(Struct_02087574* arg0, int arg1, int arg2);
extern "C" unsigned char func_020100a8(GameState* arg0);
extern "C" void func_020546a0(void* arg0, int arg1);
extern "C" int func_020546a8(void* arg0);
extern "C" void func_020546b4(void*, int);
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02042764(void* arg0, void* arg1, int arg2);
extern "C" int func_020865b0(Struct_0201099c_16* arg0);
extern "C" void func_02083ca0(unsigned char* arg0, int arg1);
extern "C" void func_ov017_02191108(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02086a04(Struct_02086a04* arg0, int arg1);

// USA: func_020dcd40
extern "C" ARM int func_020dcd40() {
    int var0 = 0;
    GameResources* var1 = GetGameResources();
    GameState* var2 = GameState::GetInstance();
    void* var3 = func_02010828(var2);
    unsigned short* var4 = func_02012fe4(var3);
    while (true) {
        int var5 = func_02086e9c((Struct_02086e9c*)var3);
        if (var5 < 0) {
            break;
        }
        Struct_02086e50* var6 = func_02086e50((Struct_02086e50*)var3, var5);
        if (var6 == NULL) {
            break;
        }
        int var7 = -1;
        for (int var8 = 3; var8 >= 0; var8--) {
            if (var2->GetGameObjectByIndex(var8) == NULL) {
                var7 = var8;
                break;
            }
        }
        if (var7 < 0) {
            break;
        }
        void* var9 = func_020108f0(var2, var7);
        if (var9 == NULL) {
            var9 = func_02010954((char*)var2);
        }
        *(short*)((char*)var9 + 0x568) = var7;
        func_02086380((unsigned char*)var9);
        func_02082d6c(var9, var6);
        func_ov017_0218f064(var1, var7, 0x1000, 1, 0);
        GameObject* var10 = func_0200ff58(var2, var7);
        if (var10 == NULL) {
            break;
        }
        void* var11 = func_02010828(var2);
        func_020875c4((Struct_02087574*)var11, var5, (signed char)var7);
        var10->obj3D_.SetField06(*var4);
        var2->GetProtagonist();
        unsigned char var12 = func_020100a8(var2);
        func_020546a0(var10, var12);
        int var13 = 0;
        for (int var14 = 0; var14 < 4; var14++) {
            GameObject* var15 = func_0200ff58(var2, var14);
            if (var15 != NULL && var14 != var7 && var12 == func_020546a8(var15)) {
                var13++;
            }
        }
        func_020546b4(var10, var13);
        func_02010828(var2);
        unsigned char* var16 = func_02053c6c((unsigned char*)var10);
#if defined(jpn)
        strcpy((char*)var10->baseStats_, (const char*)var6 + 0x140);
#else
        Struct_020dcd40 var17;
        __clear(&var17, 0x30);
        func_02042764((char*)var6 + 0x140, &var17, 1);
        strcpy((char*)var10->baseStats_, (const char*)&var17);
#endif
        int var18 = func_020865b0((Struct_0201099c_16*)var6);
        unsigned char* var19 = (unsigned char*)var6 + func_020865b0((Struct_0201099c_16*)var6);
        *(unsigned short*)(var16 + var18 * 2 + 0x16c) = var19[2];
        func_02083ca0(var16, func_020865b0((Struct_0201099c_16*)var6));
        func_ov017_02191108(var1, 1, 1, 1, 1);
        func_02086a04((Struct_02086a04*)var11, var5);
        var0++;
    }
    return var0;
}
