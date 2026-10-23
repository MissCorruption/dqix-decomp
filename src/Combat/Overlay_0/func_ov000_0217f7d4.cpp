#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021719f8(int* arg0);
struct Struct_ov000_02170fd0;
extern "C" void func_ov000_02170fd0(struct Struct_ov000_02170fd0* arg0, int arg1);
extern "C" void* func_02053c6c(unsigned char* arg0);

struct Struct_ov000_0217f7d4 {
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

// USA: func_ov000_0217f7d4
extern "C" ARM int func_ov000_0217f7d4(char* arg0) {
    int var0 = -1;
    GameState* var1 = GameState::GetInstance();
    struct Struct_ov000_0217f7d4* var2;
    for (int var3 = 0; var3 < 4; var3++) {
        signed char var4 = *(signed char*)(arg0 + 0x6c + var3);
        var2 = (struct Struct_ov000_0217f7d4*)(arg0 + 0x958) + var4;
        if (var2->unknown_4c_ < 0) continue;
        if (var2->unknown_87_ == 0) continue;
        if (func_ov000_021719f8((int*)var2)) continue;
        if (var2->unknown_445_ == 0) continue;

        if (*(int*)(arg0 + 0x17c) == var2->unknown_4c_) {
            func_ov000_02170fd0((struct Struct_ov000_02170fd0*)var2, 0);
            var2->unknown_24_ = var2->unknown_24_ & ~4;
            break;
        }

        var4 = *(signed char*)(arg0 + 0x6c + var3);
        GameObject* var5 = var1->GetPartyMemberByIndex(var4);
#if defined(jpn)
        enum { Enum_ov000_0217f7d4_2380 = 0x8b4 };
#else
        enum { Enum_ov000_0217f7d4_2380 = 0x94c };
#endif
        if (var5 == NULL || (signed char)*(int*)((char*)func_02053c6c((unsigned char*)var5) + Enum_ov000_0217f7d4_2380) == 5) {
            signed char var6 = *(signed char*)((char*)var2 + var2->unknown_18_ + 0x10);
            if (var6 == 0x64) var0 = var2->unknown_4c_;
        }
    }
    return var0;
}
