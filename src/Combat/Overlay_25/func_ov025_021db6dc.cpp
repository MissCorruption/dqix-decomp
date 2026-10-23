#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02033b58;
extern "C" void func_02033b58(struct Struct_02033b58* arg0, unsigned char arg1);
extern "C" void func_ov017_02195540(unsigned char* arg0);
extern "C" int func_020421a0(void);
extern "C" void func_ov025_021ed124(unsigned char* arg0);
extern "C" void func_ov025_021e8a4c(char* arg0, int arg1);
extern "C" void func_ov025_021e8d14(void* arg0);
extern "C" void func_ov025_021df9b0(void* arg0);
extern "C" void func_ov025_021eed58(char* arg0);

extern "C" ARM void func_ov025_021e88d8(void* arg0);
extern "C" ARM void func_ov025_021dfbfc(void* arg0);
extern "C" int func_ov000_0215ec1c(void* arg0, short* arg1, int arg2, int arg3);

#if defined(jpn)
enum { Enum_ov025_021db6dc_680 = 0x224, Enum_ov025_021db6dc_668 = 0x218, Enum_ov025_021db6dc_23216 = 0x5ca0, Enum_ov025_021db6dc_2864 = 0xaac, Enum_ov025_021db6dc_3760 = 0xe2c, Enum_ov025_021db6dc_6590 = 0x17ee, Enum_ov025_021db6dc_672 = 0x21c, Enum_ov025_021db6dc_2192 = 0x80c, Enum_ov025_021db6dc_3756 = 0xe28, Enum_ov025_021db6dc_28629 = 0x71c5 };
#else
enum { Enum_ov025_021db6dc_680 = 0x2a8, Enum_ov025_021db6dc_668 = 0x29c, Enum_ov025_021db6dc_23216 = 0x5ab0, Enum_ov025_021db6dc_2864 = 0xb30, Enum_ov025_021db6dc_3760 = 0xeb0, Enum_ov025_021db6dc_6590 = 0x19be, Enum_ov025_021db6dc_672 = 0x2a0, Enum_ov025_021db6dc_2192 = 0x890, Enum_ov025_021db6dc_3756 = 0xeac, Enum_ov025_021db6dc_28629 = 0x6fd5 };
#endif

// USA: func_ov025_021db6dc
extern "C" ARM void func_ov025_021db6dc(void* arg0) {
    char* var0 = (char*)arg0;
    GameState* var1 = GameState::GetInstance();
    int var2 = func_020421a0();
    int var3 = ((int)GetGameResources());

    func_ov025_021e88d8(var0 + Enum_ov025_021db6dc_680);
    func_ov025_021e8a4c(var0 + Enum_ov025_021db6dc_680, *(int*)(var0 + Enum_ov025_021db6dc_668));
    func_ov025_021e8d14(var0 + Enum_ov025_021db6dc_680);
    func_ov025_021df9b0(var0 + Enum_ov025_021db6dc_23216);
    func_ov025_021eed58(var0 + Enum_ov025_021db6dc_2864);
    *(int*)(var0 + Enum_ov025_021db6dc_3760) = 0;
    func_ov017_02195540((unsigned char*)var3);
    *(unsigned char*)((char*)var2 + Enum_ov025_021db6dc_6590) = 1;
    *(unsigned char*)(*(char**)(var0 + Enum_ov025_021db6dc_668) + 0x8e49) = 0;
    *(unsigned char*)(*(char**)(var0 + Enum_ov025_021db6dc_672) + 0x35) = 0;
    func_ov025_021dfbfc(var0);

    short var4[16];
    int var5 = 0;
    var5 = var5 + func_ov000_0215ec1c(*(void**)(var0 + Enum_ov025_021db6dc_668), var4, 0x10, var5);
    for (int var6 = 0; var6 < var5; var6++) {
        GameObject* var7 = var1->GetCombatantByIndex(var4[var6]);
        if (var7 != 0) {
            int var8 = *(int*)((char*)var7->currentStats_ + 0x14);
            if (!(var8 & 1)) {
                func_02033b58((struct Struct_02033b58*)var7, 0);
            }
        }
    }

    func_ov025_021ed124((unsigned char*)(var0 + Enum_ov025_021db6dc_2192));
    *(int*)(var0 + Enum_ov025_021db6dc_3756) = 1;
    *(unsigned char*)(var0 + Enum_ov025_021db6dc_28629) = 0;
}
