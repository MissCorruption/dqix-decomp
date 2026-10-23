#if defined(jpn)
enum { Enum_ov017_02195658_1052 = 0x16c, Enum_ov017_02195658_2864 = 0x910 };
#else
enum { Enum_ov017_02195658_1052 = 0x41c, Enum_ov017_02195658_2864 = 0xb30 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202b2f0;
extern "C" struct Struct_0202b2f0* func_0202ae18(void);
extern "C" int func_0202c578(struct Struct_0202b2f0* arg0, int arg1);
extern "C" GameObject* func_0200fee0(GameState* arg0, int arg1);
extern "C" void func_ov017_021905b8(void* arg0, int arg1, int arg2);

// USA: func_ov017_02195658
extern "C" ARM int func_ov017_02195658(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0202b2f0* var1 = func_0202ae18();
    for (int var2 = 1; var2 < 4; var2++) {
        int var3 = 0;
        int var4 = 1;
        GameObject* var5 = func_0200fee0(var0, var2);
        unsigned char* var6 = *(unsigned char**)(arg0 + 0x4000 + Enum_ov017_02195658_1052);
        if (var6[0] == 1 && var6[2] == var2) {
            if (var5 != NULL) {
                var3 = var4;
                var4 = 0;
            }
        }
        if (func_0202c578(var1, var2) != 0) var3 = 1;
        if (var3 != 0) {
            func_ov017_021905b8(arg0, var2, var4);
            if (var4 != 0) {
                unsigned char* var7 = *(unsigned char**)(arg0 + 0x4000 + Enum_ov017_02195658_1052);
                if (var7[0] != 0 && var7[2] == var2) {
                    var7[0] = 0;
                    var7[1] = 0;
                    unsigned char* var8 = *(unsigned char**)(arg0 + 0x3000 + Enum_ov017_02195658_2864);
                    if (var8[3] != 0) var8[8] = 1;
                }
            }
            return var2;
        }
    }
    return -1;
}
