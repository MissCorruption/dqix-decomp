#if defined(jpn)
enum { Enum_ov017_021af59c_640 = 0x210, Enum_ov017_021af59c_644 = 0x214, Enum_ov017_021af59c_648 = 0x218 };
#else
enum { Enum_ov017_021af59c_640 = 0x280, Enum_ov017_021af59c_644 = 0x284, Enum_ov017_021af59c_648 = 0x288 };
#endif

#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);
extern "C" void func_0205c790(char* arg0);
extern "C" unsigned char func_02039820(void* arg0);

// USA: func_ov017_021af59c
extern "C" ARM void func_ov017_021af59c(char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0] = 0x26;
    arg0[0x9] = 0;
    arg0[0xa] = 0;
    arg0[0xb] = 0;
    memset(arg0 + 0x1b, 0, 4);
    arg0[0x1f] = 0;
    arg0[0x20] = 0;
    *(int*)(arg0 + 0x28) = 0;
    *(int*)(arg0 + 0x30) = 0;
    arg0[0x25] = 0;
    arg0[0x26] = 0;
    *(int*)(arg0 + 0x34) = 0;
    arg0[0x27] = 0;
    arg0[0x2c] = 0;
    memset(arg0 + 0x43, 0, 5);
    *(int*)(arg0 + 0x3c) = 0;
    *(int*)(arg0 + 0x38) = 0;
    *(short*)(arg0 + 0x40) = 0;
    arg0[0x42] = 0;
    func_0205c790(arg0 + 0x48);
    *(int*)(arg0 + Enum_ov017_021af59c_640) = (*(unsigned int*)0x4000000 & 0x1f00) >> 8;
    GameObject* var0 = GameState::GetInstance()->GetUnknownGameObject();
    if (var0 != 0) {
        arg0[Enum_ov017_021af59c_644] = func_02039820(var0) != 0 ? 1 : 0;
    } else {
        arg0[Enum_ov017_021af59c_644] = 1;
    }
    *(int*)(arg0 + Enum_ov017_021af59c_648) = 0;
    arg0[0x8] = 0;
}
