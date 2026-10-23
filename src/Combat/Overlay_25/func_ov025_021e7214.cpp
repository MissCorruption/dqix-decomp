#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e7214_24576 = 0x7000, Enum_ov025_021e7214_4053 = 0x1c5 };
#else
enum { Enum_ov025_021e7214_24576 = 0x6000, Enum_ov025_021e7214_4053 = 0xfd5 };
#endif

#include "GameState/GameState.h"
#include "GameState/Field3b0.h"

extern "C" void* func_ov000_02160130(void);
extern "C" void func_0202e874(unsigned char* arg0, short arg1);

struct Struct_ov025_021e7214 { char unknown_0_[8]; short unknown_8_; };

// USA: func_ov025_021e7214
extern "C" ARM int func_ov025_021e7214(struct Struct_ov025_021e7214* arg0) {
    void* var0 = func_ov000_02160130();
    if (var0 != 0) {
        *(unsigned char*)((char*)var0 + Enum_ov025_021e7214_24576 + Enum_ov025_021e7214_4053) = 1;
    }
    GameState* var1 = GameState::GetInstance();
    unsigned char* var2 = (unsigned char*)func_020100bc(var1);
    func_0202e874(var2, arg0->unknown_8_);
    return 1;
}
