#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov004_021570a4 { char unknown_0_[0x5c]; short unknown_5c_; };
extern "C" Struct_ov004_021570a4* func_ov004_02156ed0(void* arg0, int arg1);

// USA: func_ov004_021570a4
extern "C" ARM void* func_ov004_021570a4(void* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_ov004_021570a4_620 = 0xc };
#else
    enum { Enum_ov004_021570a4_620 = 0x26c };
#endif
    if ((unsigned)arg1 >= 6) return NULL;
    char* var0 = (char*)GameState::GetInstance() + Enum_ov004_021570a4_620 + 0x5c00;
    Struct_ov004_021570a4* var1 = func_ov004_02156ed0(arg0, 0x5b);
    int var2 = var1->unknown_5c_ * 6 + arg1;
    return (var0 + 4) + var2 * 0x28;
}
