#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"

struct Struct_ov001_0215af34;
extern "C" void func_ov017_021d6148(Struct_ov001_0215af34* arg0, unsigned int arg1);
extern "C" unsigned int _fflt(int);
extern "C" unsigned int _fdiv(unsigned int, unsigned int);

struct Struct_ov001_0215daa8 { int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov001_0215daa8
extern "C" ARM int func_ov001_0215daa8(void* arg0) {
    int* var0 = (int*)func_020100bc(GameState::GetInstance());
    if (var0 == NULL) return 0;
    Struct_ov001_0215daa8 var1 = *(Struct_ov001_0215daa8*)((char*)var0 + 0x10);
    func_ov017_021d6148((Struct_ov001_0215af34*)arg0, _fdiv(_fflt(var1.unknown_0_), 0x45800000u));
    func_ov017_021d6148((Struct_ov001_0215af34*)((char*)arg0 + 0x8), _fdiv(_fflt(var1.unknown_4_), 0x45800000u));
    func_ov017_021d6148((Struct_ov001_0215af34*)((char*)arg0 + 0x10), _fdiv(_fflt(var1.unknown_8_), 0x45800000u));
    return 1;
}
