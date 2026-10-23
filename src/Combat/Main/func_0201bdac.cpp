#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201bdac_1788 = 0x4ec, Enum_0201bdac_1860 = 0x784, Enum_0201bdac_2920 = 0x948, Enum_0201bdac_1861 = 0x785, Enum_0201bdac_1862 = 0x786, Enum_0201bdac_72 = 0x88, Enum_0201bdac_3000 = 0x998 };
#else
enum { Enum_0201bdac_1788 = 0x6fc, Enum_0201bdac_1860 = 0x744, Enum_0201bdac_2920 = 0xb68, Enum_0201bdac_1861 = 0x745, Enum_0201bdac_1862 = 0x746, Enum_0201bdac_72 = 0x48, Enum_0201bdac_3000 = 0xbb8 };
#endif

#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Resource/Brightness.h"

extern "C" void func_ov017_021a9bc4(void* arg0, int arg1);
extern "C" void func_ov017_021a9a9c(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov017_021aa4cc(void* arg0, int arg1);
extern "C" void* func_0202ae18(void);
extern "C" void func_020ae53c(int arg0);

extern "C" void* func_02010828(GameState* arg0);
extern "C" int func_02046b08(void** arg0);

struct Struct_0201bdac { char unknown_0_[2]; unsigned char unknown_2_; char unknown_3_; Struct_0201bdac* unknown_4_; };
struct Struct_0201bdac_2 { Struct_0201bdac* unknown_0_; Struct_0201bdac* unknown_4_; };
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

struct Struct_0201bdac_3 { unsigned char unknown_0_; unsigned char unknown_1_[7]; unsigned char unknown_8_; };
extern "C" void func_020d9850(Struct_0201bdac_3* arg0);

extern "C" int func_0202b7d8(int* arg0);

struct Struct_0201bdac_4;
extern "C" int func_02086b98(Struct_0201bdac_4* arg0);

// USA: func_0201bdac
extern "C" ARM void func_0201bdac(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)GetGameResources();
    Struct_0201bdac_2* var2 = *(Struct_0201bdac_2**)(var1 + 0x3000 + Enum_0201bdac_1788);
    void* var3 = func_0202ae18();
    void* var4 = func_02010828(var0);

    if (!func_02046b08((void**)var2)) return;
    if (!IsBrightnessZero((GameResources*)var1, false)) return;
    if (!IsBrightnessZero((GameResources*)var1, true)) return;

    unsigned char var5 = *(arg0 + 0x2000 + Enum_0201bdac_1860);
    if (var5 & 1) {
        struct GrottoStruct* var6 = var0->GetGrottoStruct();
        var6->unknown_9 = 2;
        Struct_0201bdac* var7 = *(Struct_0201bdac**)(var1 + 0x3000 + Enum_0201bdac_2920);
        func_ov017_021a9bc4(var7, 0);
        int var8 = 0;
        int var9 = *(arg0 + 0x2000 + Enum_0201bdac_1861);
        int var10 = *(arg0 + 0x2000 + Enum_0201bdac_1862);
        int var11 = *(unsigned short*)(arg0 + 0x2700 + Enum_0201bdac_72);
        func_ov017_021a9a9c(var7, var9, var10, var11, var8);
        func_020469b4(var2, var7);
        *(arg0 + 0x2000 + Enum_0201bdac_1860) &= ~1;
        return;
    }
    if (var5 & 2) {
        Struct_0201bdac_3* var12 = *(Struct_0201bdac_3**)(var1 + 0x3000 + Enum_0201bdac_3000);
        func_020d9850(var12);
        func_020469b4(var2, (Struct_0201bdac*)var12);
        *(arg0 + 0x2000 + Enum_0201bdac_1860) &= ~2;
        return;
    }
    if (var5 & 4) {
        func_020ae53c(0);
        *(arg0 + 0x2000 + Enum_0201bdac_1860) &= ~4;
        return;
    }

    if (func_0202b7d8((int*)var3)) {
        if (func_02086b98((Struct_0201bdac_4*)var4) != 0 || (*(arg0 + 0x2000 + Enum_0201bdac_1860) & 8)) {
            func_ov017_021aa4cc(var1, 1);
        }
    }
    *(arg0 + 0x2000 + Enum_0201bdac_1860) = 0;
}
