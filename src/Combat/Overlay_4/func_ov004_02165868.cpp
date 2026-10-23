#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_02165868_1134 = 0x1ee };
#else
enum { Enum_ov004_02165868_1134 = 0x46e };
#endif

#include "GameState/GameState.h"

extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_02165868
extern "C" ARM int func_ov004_02165868(void* arg0) {
    func_ov011_021848a0(arg0, 0x6c);
    GameState* var0 = GameState::GetInstance();
    *((unsigned char*)var0 + 0x6000 + Enum_ov004_02165868_1134) = 0;
    return 0;
}
