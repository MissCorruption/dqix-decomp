#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

struct Struct_020a9ba4 {
    unsigned char unknown_0_[0x200];
    unsigned char unknown_200_[0x200];
    int unknown_400_;
};

#if defined(jpn)
enum { Enum_020a9ba4_24960 = 0x5f20, Enum_020a9ba4_24448 = 0x5d20, Enum_020a9ba4_24444 = 0x5d1c };
#else
enum { Enum_020a9ba4_24960 = 0x6180, Enum_020a9ba4_24448 = 0x5f80, Enum_020a9ba4_24444 = 0x5f7c };
#endif

// USA: func_020a9ba4
extern "C" ARM int func_020a9ba4(void* arg0) {
    struct Struct_020a9ba4 var0;
    GameState* var1 = GameState::GetInstance();
    memcpy(&var0, arg0, sizeof(var0));
    memcpy((char*)var1 + Enum_020a9ba4_24960, var0.unknown_200_, 0x200);
    memcpy((char*)var1 + Enum_020a9ba4_24448, var0.unknown_0_, 0x200);
    *(int*)((char*)var1 + Enum_020a9ba4_24444) = var0.unknown_400_;
    return 1;
}
