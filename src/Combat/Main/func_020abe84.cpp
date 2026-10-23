#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020abe84_30192 = 0x73b0 };
#else
enum { Enum_020abe84_30192 = 0x75f0 };
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "GameState/BattleRecordSnapshot.h"

struct Struct_020abe84 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 22;
};

struct Struct_020abe84_2 {
    unsigned char unknown_0_[Enum_020abe84_30192];
    Struct_020abe84 unknown_75f0_[308];
};

static inline unsigned int inline_020abe84(const Struct_020abe84* arg0) { return arg0->unknown_0_0_; }

extern "C" int func_020ac4c0(void*);
extern "C" void func_020a0460(Struct_02061c04*, unsigned int);
extern "C" int func_020ac494(void*);

// USA: func_020abe84
extern "C" ARM int func_020abe84(void* arg0, short* arg1, Struct_020abe84* arg2, int arg3) {
    Struct_02061c04 var0;
    Struct_020abe84* var1 = reinterpret_cast<Struct_020abe84_2*>(GameState::GetInstance())->unknown_75f0_;
    int var2 = 0;
    int var3;
    for (var3 = 0; var3 < arg3; var3++) {
        short var4 = (short)(arg1[var3] - 1);
        Struct_020abe84* var5 = &arg2[var3];
        if (var4 < 0) continue;
        if (var4 >= 0x134) continue;
        if (inline_020abe84(&var1[var4]) == 0 && var5->unknown_0_0_ != 0) {
            var2++;
        }
        memcpy(&var1[var4], var5, sizeof(*var5));
    }
    func_020ac4c0(&var0);
    func_020a0460(&var0, var2);
    func_020ac494(&var0);
    return 1;
}
