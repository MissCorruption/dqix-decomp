#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_02184384 func_ov012_021853f8
#endif
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif

#include "GameState/GameState.h"

struct Struct_ov012_02184384 {
    unsigned int unknown_0_0_ : 19;
    signed int unknown_2_3_ : 11;
    unsigned int unknown_3_6_ : 2;
};

// USA: func_ov012_02184384
extern "C" ARM int func_ov012_02184384(unsigned short* arg0, int arg1) {
    char* var0 = (char*)GameState::GetInstance() + R(0x543c, 0x569c);
    int var1 = ((struct Struct_ov012_02184384*)(var0 + 4))->unknown_2_3_;
    int var2;
    for (var2 = 0; var2 < arg1; var2++) {
        if (var1 == arg0[var2]) return var2;
    }
    return -1;
}
