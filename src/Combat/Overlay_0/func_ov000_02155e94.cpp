#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

struct Struct_ov000_02155e94 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 2; unsigned char unknown_0_6_ : 2; };
struct Struct_ov000_02155e94_2 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };
#define CNT1B1(o) ((struct Struct_ov000_02155e94*)((o) + 0x81b1))
#define GCNT(g) ((struct Struct_ov000_02155e94_2*)((g) + 0xa))

// USA: func_ov000_02155e94
extern "C" ARM void func_ov000_02155e94(unsigned char* arg0) {
    int var0;
    CNT1B1(arg0)->unknown_0_0_ = 0;
    for (var0 = 0; var0 < CNT1B1(arg0)->unknown_0_4_; var0++) {
        unsigned char* var1 = arg0 + 0x81b4 + var0 * 0x18;
        int var2 = 0;
        GCNT(var1)->unknown_0_4_ = 0;
        for (; var2 < GCNT(var1)->unknown_0_0_; var2++) {
            short var3 = (short)(*(var1 + var2 + 2) + 0xc0);
            GameState* var4 = GameState::GetInstance();
            GameObject* var5 = var4->GetCombatantByIndex(var3);
            if (var5 != NULL && !func_02010088((struct Struct_02010088*)var5) && !func_ov000_02153c0c(var5)) {
                GCNT(var1)->unknown_0_4_++;
                CNT1B1(arg0)->unknown_0_0_++;
            }
        }
    }
}
