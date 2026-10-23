#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02154f80_812 = 0x328 };
enum { Enum_ov003_02154f80_503 = 0x1f3 };
enum { Enum_ov003_02154f80_640 = 0x27c };
#else
enum { Enum_ov003_02154f80_812 = 0x32c };
enum { Enum_ov003_02154f80_503 = 0x1f7 };
enum { Enum_ov003_02154f80_640 = 0x280 };
#endif

#include "GameState/GameState.h"

struct Struct_02059cfc_2;
struct Struct_02059cfc_3;
extern "C" void func_02059f38(struct Struct_02059cfc_2* arg0, struct Struct_02059cfc_3* arg1);

// USA: func_ov003_02154f80
extern "C" ARM void func_ov003_02154f80(char* arg0) {
    if (*(int*)(arg0 + Enum_ov003_02154f80_812) == 0) return;
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(*(signed char*)(arg0 + Enum_ov003_02154f80_503));
    if (var1 != 0) {
        func_02059f38((struct Struct_02059cfc_2*)(arg0 + Enum_ov003_02154f80_640), (struct Struct_02059cfc_3*)((char*)var1 + 0x44));
    }
    ((Object3D*)(arg0 + Enum_ov003_02154f80_640))->AdvanceEffects();
    ((Object3D*)(arg0 + Enum_ov003_02154f80_640))->Draw(1);
}
