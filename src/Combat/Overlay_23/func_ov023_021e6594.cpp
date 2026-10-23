#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0201079c(char* arg0);
struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);

struct Struct_ov023_021e6594 {
    unsigned int : 29;
    unsigned int unknown_3_5_ : 1;
    unsigned int : 2;
    signed int : 9;
    signed int unknown_5_1_ : 10;
    signed int : 13;
};

struct Struct_ov023_021e6594_2 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    unsigned char : 7;
#if defined(jpn)
    char unknown_49d_[0x8b8 - 0x49d];
#else
    char unknown1_49d_[0x950 - 0x49d];
#endif

    int unknown_950_;
};

// USA: func_ov023_021e6594
extern "C" ARM void func_ov023_021e6594(char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e6594_22172=0x543c, Enum_ov023_021e6594_4924=0x1314, Enum_ov023_021e6594_336=0x144, Enum_ov023_021e6594_5120=0x1458, Enum_ov023_021e6594_5184=0x1498};
#else
 enum {Enum_ov023_021e6594_22172=0x569c, Enum_ov023_021e6594_4924=0x133c, Enum_ov023_021e6594_336=0x150, Enum_ov023_021e6594_5120=0x1400, Enum_ov023_021e6594_5184=0x1440};
#endif
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov023_021e6594* var1 = (struct Struct_ov023_021e6594*)((char*)var0 + Enum_ov023_021e6594_22172);
    if (!var1->unknown_3_5_) {
        void* var2;
        if (func_0201079c((char*)var0) == 1) {
            var2 = func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021e6594_4924), 0x50e9);
        } else {
            func_0202ae18();
            GameObject* var3 = var0->GetProtagonist();
            struct Struct_ov023_021e6594_2* var4 = *(struct Struct_ov023_021e6594_2**)((char*)var3 + Enum_ov023_021e6594_336);
#if defined(jpn)
            int var5 = var4->unknown_950_ + 0x50dc;
#else
            int var5 = 0x50dc;
            if (var4->unknown_49c_0_ == 1) var5 += 0x32;
            var5 += var4->unknown_950_;
#endif

            var2 = func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021e6594_4924), (short)var5);
        }
        memset(arg0 + Enum_ov023_021e6594_5120, 0, 0x40);
        int var6 = strlen((char*)var2);
        memcpy(arg0 + Enum_ov023_021e6594_5120, (char*)var2, var6);
    }
    if (var1->unknown_5_1_ != 0x12c) return;
    memset(arg0 + Enum_ov023_021e6594_5184, 0, 0x40);
    void* var7 = func_02072a68((struct Struct_02072a68_2*)(arg0 + Enum_ov023_021e6594_4924), 0x283c);
    int var8 = strlen((char*)var7);
    memcpy(arg0 + Enum_ov023_021e6594_5184, (char*)var7, var8);
}
