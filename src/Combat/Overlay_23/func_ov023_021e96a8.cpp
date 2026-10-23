#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_ov023_021e8f28(int arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);
extern "C" void* __clear(void* arg0, int arg1);

struct Struct_ov023_021e96a8 { int unknown_0_0_ : 10; int unknown_1_2_ : 10; int unknown_2_4_ : 10; };
struct Struct_ov023_021e96a8_2 { char unknown_0_[0x18]; struct Struct_ov023_021e96a8 unknown_18_; struct Struct_ov023_021e96a8 unknown_1c_; };

// USA: func_ov023_021e96a8
extern "C" ARM int func_ov023_021e96a8(unsigned char* arg0) {
#if defined(jpn)
 enum { Enum_ov023_021e96a8_336=0x144 };
#else
 enum { Enum_ov023_021e96a8_336=0x150 };
#endif
    GameState::GetInstance();
    GameObject* var0 = func_ov023_021e8f28(func_ov017_021d60f4(arg0));
    if (var0 == 0) {
        return 0;
    }

    int var1[6];
    __clear(var1, 0x18);

    for (int var2 = 0; var2 < 0xb; var2++) {
        int var3 = *(int*)((char*)var0 + Enum_ov023_021e96a8_336) + 0x194;
        int var4 = var3 + ((unsigned char)var2 << 5);
        struct Struct_ov023_021e96a8_2* var5;
        if (var4 != 0 && (var5 = *(struct Struct_ov023_021e96a8_2**)var4) != 0) {
            var1[0] += var5->unknown_18_.unknown_0_0_;
            var1[1] += var5->unknown_18_.unknown_1_2_;
            var1[2] += var5->unknown_18_.unknown_2_4_;
            var1[3] += var5->unknown_1c_.unknown_0_0_;
            var1[4] += var5->unknown_1c_.unknown_1_2_;
            var1[5] += var5->unknown_1c_.unknown_2_4_;
        }
    }

    int var6 = func_ov017_021d60f4(arg0 + 0x8);
    switch (var6) {
        case 0: func_ov017_021d6134(arg0 + 0x10, var1[4]); break;
        case 1: func_ov017_021d6134(arg0 + 0x10, var1[0]); break;
        case 2: func_ov017_021d6134(arg0 + 0x10, var1[1]); break;
        case 3: func_ov017_021d6134(arg0 + 0x10, var1[2]); break;
        case 4: func_ov017_021d6134(arg0 + 0x10, var1[3]); break;
        case 5: func_ov017_021d6134(arg0 + 0x10, var1[5]); break;
    }
    return 1;
}
