#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" void func_020120d4(unsigned char*, unsigned char);

#if defined(jpn)
enum { Enum_020a9af8_23772 = 0x5a7c };
#else
enum { Enum_020a9af8_23772 = 0x5cdc };
#endif

// USA: func_020a9af8
extern "C" ARM int func_020a9af8(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_020120d4((unsigned char*)var0, arg0[0]);
    memcpy((char*)var0 + Enum_020a9af8_23772, arg0 + 4, 0x190);
    return 1;
}
