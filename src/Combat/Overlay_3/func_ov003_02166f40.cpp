#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02166f40_1024 = 0x200 };
enum { Enum_ov003_02166f40_130 = 0xaa };
#else
enum { Enum_ov003_02166f40_1024 = 0x400 };
enum { Enum_ov003_02166f40_130 = 0x82 };
#endif
#include "GameState/GameState.h"

extern "C" void func_ov017_021b6bb8(int arg0);
extern "C" int func_ov017_021b6c2c(int arg0, int arg1);
struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);

// USA: func_ov003_02166f40
extern "C" ARM void func_ov003_02166f40(char* arg0) {
    func_ov017_021b6bb8(*(short*)(arg0 + Enum_ov003_02166f40_1024 + Enum_ov003_02166f40_130));
    func_ov017_021b6c2c(*(short*)(arg0 + Enum_ov003_02166f40_1024 + Enum_ov003_02166f40_130), 0);
    GameObject* var0 = GameState::GetInstance()->GetProtagonist();
    if (var0 == NULL) return;
    func_020397cc((struct Struct_02018300_3*)var0, 1);
}
