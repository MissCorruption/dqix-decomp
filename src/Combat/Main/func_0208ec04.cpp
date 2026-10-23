#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0208ec04_23772 = 0x5a7c };
#else
enum { Enum_0208ec04_23772 = 0x5cdc };
#endif

#include "GameState/GameState.h"

struct Struct_0208ec04 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 8;
    unsigned int unknown_2_1_ : 8;
    unsigned int unknown_3_1_ : 4;
    unsigned int unknown_3_5_ : 2;
    unsigned int unknown_3_7_ : 1;
};

// USA: func_0208ec04
extern "C" ARM void func_0208ec04(void) {
    char* var0 = (char*)GameState::GetInstance();
    struct Struct_0208ec04* var1 = (struct Struct_0208ec04*)(var0 + Enum_0208ec04_23772);
    int var2;
    for (var2 = 0; var2 < 0x64; var2++, var1++) {
        if (var1->unknown_3_7_ && var1->unknown_2_1_ != 0) {
            var1->unknown_2_1_ = 0;
            var1->unknown_0_0_ = var1->unknown_3_1_ * 3;
        }
    }
}
