#include <globaldefs.h>

#if defined(jpn)
#define func_ov012_0218432c func_ov012_021853a0
#endif
#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif

#include "GameState/GameState.h"

#if defined(jpn)
#define data_ov012_0218afaa data_ov012_0218bd16
#define data_ov012_0218afac data_ov012_0218bd18
#endif
struct Struct_ov012_0218432c {
    unsigned int unknown_0_0_ : 9;
    signed int unknown_1_1_ : 10;
    unsigned int unknown_2_3_ : 13;
};

struct Struct_ov012_0218afaa { short unknown_0_; short unknown_2_; };

extern struct Struct_ov012_0218afaa data_ov012_0218afaa[];
extern struct Struct_ov012_0218afaa data_ov012_0218afac[];

// USA: func_ov012_0218432c
extern "C" ARM int func_ov012_0218432c(int arg0) {
    char* var0 = (char*)GameState::GetInstance() + R(0x543c, 0x569c);
    int var1 = ((struct Struct_ov012_0218432c*)(var0 + 4))->unknown_1_1_;
    short var2 = data_ov012_0218afaa[arg0].unknown_0_;
    if (var2 <= var1) {
        short var3 = data_ov012_0218afac[arg0].unknown_0_;
        if (var1 < var3) return var1 - var2;
    }
    return 0;
}
