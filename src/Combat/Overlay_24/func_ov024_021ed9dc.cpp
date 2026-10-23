#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

extern "C" void* func_ov000_02153710(void*, int);
extern "C" int func_02083be8(unsigned char* arg0);
struct Struct_ov024_021dced0_2;
extern "C" int func_ov024_021dd010(struct Struct_ov024_021dced0_2* arg0);
extern "C" int func_ov024_021eda60(GameObject* arg0);

struct Struct_ov024_021ed9dc { void* unknown_0_; };

// USA: func_ov024_021ed9dc
extern "C" ARM int func_ov024_021ed9dc(struct Struct_ov024_021ed9dc* arg0, int arg1) {
    void* var0 = func_ov000_02153710(arg0->unknown_0_, arg1);
    if (!var0) return 0;
    if (!func_02083be8((unsigned char*)var0)) return 0;
    GameObject* var1 = GetCombatantByID((int)arg0->unknown_0_, arg1);
    if (!var1) return 0;
    void* var2 = var1->currentStats_;
    if (*(unsigned short*)((char*)var2 + 2) == 0) return 0;
    if (func_ov024_021dd010((struct Struct_ov024_021dced0_2*)var1)) return 0;
    return !func_ov024_021eda60(var1);
}
