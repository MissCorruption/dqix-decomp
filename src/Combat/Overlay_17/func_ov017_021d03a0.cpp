#if defined(jpn)
enum { Enum_ov017_021d03a0_17237 = 0x4135 };
#else
enum { Enum_ov017_021d03a0_17237 = 0x4355 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020dc548(int arg0, signed char* arg1, signed char* arg2);
extern "C" void func_0203979c(unsigned char* arg0, unsigned int arg1);
extern "C" int func_02039790(void* arg0, int arg1);
extern "C" void func_020397ac(unsigned char* arg0, unsigned int arg1);

struct Struct_ov017_021d03a0 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};

// USA: func_ov017_021d03a0
extern "C" ARM void func_ov017_021d03a0(int arg0, struct Struct_ov017_021d03a0* arg1, GameState* arg2, unsigned char* arg3) {
    GameObject* var0;
    GameObject* var1;
    signed char var2[7];
    signed char var3;
    int var4;

    var0 = arg2->GetPartyMemberByIndex(arg1->unknown_5_);
    if (var0 == 0) {
        return;
    }
    if (arg1->unknown_4_ != 0) {
        ((Object3D*)((unsigned char*)var0))->EnableFlag(0x400);
        if (arg1->unknown_6_ != 0) {
            func_0203979c((unsigned char*)var0, 0x20);
        }
        return;
    }

    func_020dc548((signed char)arg0, var2, &var3);
    for (var4 = 0; var4 < var3; var4++) {
        var1 = arg2->GetPartyMemberByIndex(var2[var4]);
        if (var1 != 0) {
            ((Object3D*)((unsigned char*)var1))->DisableFlag(0x400);
            if (func_02039790((void*)var1, 0x20) != 0) {
                func_020397ac((unsigned char*)var1, 0x20);
                *(arg3 + Enum_ov017_021d03a0_17237) |= 1 << (arg0 & 0xff);
            }
        }
    }
}
