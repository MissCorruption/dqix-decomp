#include <globaldefs.h>
#include "Util/Random.h"
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0208e7d0 {
    char unknown_0_[0xc];
    short* unknown_c_;
};

extern "C" void* func_0205ec34(void);
extern "C" int func_0201079c(char* arg0);

// USA: func_0208e7d0
extern "C" ARM int func_0208e7d0(struct Struct_0208e7d0* arg0) {
    if (arg0->unknown_c_ == 0) {
        return 0;
    }
    int var0 = 8;
    GameState* var1 = GameState::GetInstance();
    func_0205ec34();
    if (func_0201079c((char*)var1) >= 0x13) {
        var0 = 0x10;
    }
    struct Random* var2 = GetBTRandom();
    int var3 = NextRandomMax(var2, var0);
    return arg0->unknown_c_[var3];
}
