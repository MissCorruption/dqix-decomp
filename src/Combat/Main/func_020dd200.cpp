#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020dd200_336 = 0x144 };
#else
enum { Enum_020dd200_336 = 0x150 };
#endif

#include "GameState/GameState.h"

extern "C" int func_02083b00(unsigned char* arg0, int arg1);

struct Struct_020ee710 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern Struct_020ee710 data_020ee712[];
extern Struct_020ee710 data_020ee710[];

// USA: func_020dd200
extern "C" ARM int func_020dd200(int arg0, int arg1) {
    int var0 = 0;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff1c(var1, arg0);
    if (var2 == 0) {
        return var0;
    }
    unsigned char var3 = 0;
    while (data_020ee710[var3].unknown_0_ != 0xffff) {
        unsigned int var4 = data_020ee712[var3].unknown_0_ & 0xff;
        if (var4 == arg1) {
            if (func_02083b00(*(unsigned char**)((char*)var2 + Enum_020dd200_336), data_020ee710[var3].unknown_0_) != 0) {
                var0 = 1;
            }
            break;
        }
        var3++;
    }
    return var0;
}
