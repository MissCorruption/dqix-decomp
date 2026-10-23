#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02156558_336 = 0x144, Enum_ov000_02156558_2384 = 0x8b8 };
#else
enum { Enum_ov000_02156558_336 = 0x150, Enum_ov000_02156558_2384 = 0x950 };
#endif
#include "GameState/GameState.h"
#include "Util/Random.h"

extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_ov000_02155f9c(struct Random* arg0, int arg1, int arg2);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_ov000_02156404(GameObject* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
int NextRandomMax(struct Random* random, int maximum);

extern unsigned char data_ov000_02182ab8[];

// USA: func_ov000_02156558
extern "C" ARM int func_ov000_02156558(struct Random* arg0, int arg1) {
    if (func_ov000_0215fc60((char*)arg0) != 0) {
        return 0;
    }

    GameState* var0 = GameState::GetInstance();
    int var1 = (arg1 >= 0 && arg1 <= 3) ? 1 : 0;
    if (!var1) {
        return 0;
    }

    if (func_ov000_02155f9c(arg0, arg1, 0) != 0) {
        return 0;
    }

    GameObject* var2 = func_0200ff1c(var0, arg1);
    if (var2 == 0) {
        return 0;
    }

    if (func_ov000_02156404(var2)) {
        short var3 = *(short*)((char*)arg0 + 0x8e00 + 0x6e);
        if (var3 >= 0x32) {
            if (var3 < 0x4b) return 1;
        }
        return 0;
    }

    if (func_02083b00(*(unsigned char**)((char*)var2 + Enum_ov000_02156558_336), 0x36) == 0) {
        return 0;
    }

    int var4 = *(int*)((char*)(*(void**)((char*)var2 + Enum_ov000_02156558_336)) + Enum_ov000_02156558_2384);
    int var5 = data_ov000_02182ab8[var4];
    return NextRandomMax(arg0, var5) == 1;
}
