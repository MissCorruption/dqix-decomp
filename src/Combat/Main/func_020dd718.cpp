#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02052e14;
extern "C" short* func_02052e14(struct Struct_02052e14* arg0);

// USA: func_020dd718
extern "C" ARM int func_020dd718(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    short* var2 = func_02052e14((struct Struct_02052e14*)var1);
    unsigned char var3 = 0;
    while (var3 < 10) {
        if (arg1 == var2[var3]) return 1;
        var3 = (var3 + 1) & 0xff;
    }
    return 0;
}
