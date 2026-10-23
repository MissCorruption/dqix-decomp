#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021719f8(int* arg0);
extern "C" void* func_02053c6c(unsigned char* arg0);
extern "C" ARM void* func_ov000_02161318(void* arg0, int arg1);

struct Struct_ov000_0217f990 {
    char unknown_0_[0x18];
    signed char unknown_18_;
    char unknown_19_[0x24 - 0x19];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc7 - 0x50];
#else
    char unknown1_50_[0x87 - 0x50];
#endif
    unsigned char unknown_87_;
    char unknown_88_[0x445 - 0x88];
    unsigned char unknown_445_;
    char unknown_446_[0x448 - 0x446];
};

// USA: func_ov000_0217f990
extern "C" ARM int func_ov000_0217f990(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    unsigned char var2 = var1[0xf7c];
    int var3 = 0;
    unsigned char var4;
    for (var4 = 0; var4 < var2; var4++) {
        signed char var5 = *(signed char*)(arg0 + var4 + 0x70);
        struct Struct_ov000_0217f990* var6 = (struct Struct_ov000_0217f990*)func_ov000_02161318(arg0, var5);
        if (var6 == 0) continue;
        if (var6->unknown_4c_ < 0) continue;
        if (var6->unknown_87_ == 0) continue;
        signed char var7 = *(signed char*)((char*)var6 + var6->unknown_18_ + 0x10);
        if (var7 == 0x64) continue;
        if (func_ov000_021719f8((int*)var6)) continue;
        if (var6->unknown_445_ == 0) continue;
        GameObject* var8 = var0->GetPartyMemberByIndex(var5);
#if defined(jpn)
        enum { Enum_ov000_0217f990_2380 = 0x8b4 };
#else
        enum { Enum_ov000_0217f990_2380 = 0x94c };
#endif
        if (var8 != 0 && (signed char)(*(int*)((char*)func_02053c6c((unsigned char*)var8) + Enum_ov000_0217f990_2380)) != 5) continue;
        *(int*)(arg0 + 0x17c) = var5;
        var3 = 1;
        break;
    }
    return var3;
}
