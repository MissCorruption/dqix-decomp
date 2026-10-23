#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"

struct Struct_ov024_021de124;
extern "C" int func_ov024_021de25c(struct Struct_ov024_021de124* arg0);
extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

struct Struct_ov024_021dd828 { char unknown_0_[0x10]; int unknown_10_; };

// USA: func_ov024_021e9320
extern "C" ARM int func_ov024_021e9320(struct Struct_ov024_021dd828* arg0, int arg1, int arg2) {
    GameObject* var0 = GetCombatantByID(arg0->unknown_10_, arg1);
    if (!var0) return 0;
    int var1 = func_ov024_021de25c((struct Struct_ov024_021de124*)var0);
    if (arg2 != 0) {
        if (var1) {
            return func_ov024_021da644(arg1, 0x83, 0x84);
        }
        return func_ov024_021da644(arg1, 0x81, 0x82);
    }
    if (var1) return 0x85;
    #if defined(jpn)
        return 0x1b;
#else
        return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif
}
