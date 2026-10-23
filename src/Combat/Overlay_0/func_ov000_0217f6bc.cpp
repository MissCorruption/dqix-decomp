#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021719f8(int* arg0);
extern "C" void* func_02053c6c(unsigned char* arg0);

struct Struct_ov000_0217f6bc {
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

// USA: func_ov000_0217f6bc
extern "C" ARM int func_ov000_0217f6bc(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov000_0217f6bc* var1;
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        signed char var3 = *(signed char*)(arg0 + 0x6c + var2);
        var1 = (struct Struct_ov000_0217f6bc*)(arg0 + 0x958) + var3;
        if (var1->unknown_4c_ < 0) continue;
        if (var1->unknown_87_ == 0) continue;
        if (var1->unknown_24_ & 4) continue;
        signed char var4 = *(signed char*)((char*)var1 + var1->unknown_18_ + 0x10);
        if (var4 == 0x64) continue;
        if (func_ov000_021719f8((int*)var1)) continue;
        if (var1->unknown_445_ == 0) continue;
        GameObject* var5 = var0->GetPartyMemberByIndex(*(signed char*)(arg0 + 0x6c + var2));
#if defined(jpn)
        enum { Enum_ov000_0217f6bc_2380 = 0x8b4 };
#else
        enum { Enum_ov000_0217f6bc_2380 = 0x94c };
#endif
        if (var5 == 0 || (signed char)(*(int*)((char*)func_02053c6c((unsigned char*)var5) + Enum_ov000_0217f6bc_2380)) == 5) {
            return var1->unknown_4c_;
        }
    }
    return -1;
}
