#include <globaldefs.h>
#include "Combat/Overlay_0/GetCombatantByID.h"
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_020877c0;
extern "C" int func_0208776c(void* arg0, int arg1);
extern "C" int func_020877c0(struct Struct_020877c0* arg0, int arg1);
void UpdateCombatantAttack(int a, int id);
struct Struct_ov024_021e2bd0;
extern "C" void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e2ebc { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e2ebc_2 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
struct Struct_ov024_021e2ebc_3 { char unknown_0_[0x32]; short unknown_32_; };

extern "C" int func_ov024_021e94c4(struct Struct_ov024_021e2ebc_2* arg0, int arg1,
    struct Struct_ov024_021e2ebc_3* arg2, unsigned char arg3, signed char arg4,
    unsigned char arg5, unsigned char arg6);

// USA: func_ov024_021e2ebc
extern "C" ARM unsigned long long func_ov024_021e2ebc(struct Struct_ov024_021e2ebc_2* arg0, int arg1, int arg2, struct Struct_ov024_021e2ebc_3* arg3, int arg4) {
    if (arg4 <= 0) return 0;
    GameObject* var0 = GetCombatantByID((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    int var1 = NextRandomMax((struct Random*)arg0->unknown_10_, 100);
    int var2 = arg3->unknown_32_;
    if (var2 < -2) var2 = -2;
    if (var2 > 2) var2 = 2;
    int var3 = 0;
    if (var2 < 0) {
        if (*((unsigned char*)var0->currentStats_ + 0x4f) == 0) return 0;
        struct Struct_ov024_021e2ebc* var4 = (struct Struct_ov024_021e2ebc*)((char*)arg0->unknown_c_ + 0x1c);
        if (!var4->unknown_0_7_) {
            float var5 = *((unsigned char*)var0->currentStats_ + 0x4f);
            if ((float)var1 >= var5) return 0;
        }
        var3 = 1;
    }
    int var6 = 0;
    int var7 = 0;
    if (func_0208776c(var0->currentStats_, (unsigned char)var3)) {
        var7 = func_020877c0((struct Struct_020877c0*)var0->currentStats_, (signed char)var2);
        UpdateCombatantAttack((int)arg0->unknown_10_, arg2);
        var6 = 1;
    }
    if (var6) {
        int var8 = func_ov024_021e94c4(arg0, arg2, arg3, var3, (signed char)var7, 1, 1);
        void* var9 = func_ov024_021e8ca0((struct Struct_ov024_021e2bd0*)arg0, var8);
        if (var9) {
            func_ov000_0215cd44(arg0->unknown_10_, var9, var0, 0, 0, 0, 0);
        }
    }
    return 0;
}
