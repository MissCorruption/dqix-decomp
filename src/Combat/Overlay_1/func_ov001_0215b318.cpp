#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0200fb8c(int*);
struct GameResources;
void SetBrightness(GameResources*, int, int);

// USA: func_ov001_0215b318
extern "C" ARM int func_ov001_0215b318(void* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_ov001_0215b318_1844 = 0x524, Enum_ov001_0215b318_258 = 0xfe };
#else
    enum { Enum_ov001_0215b318_1844 = 0x734, Enum_ov001_0215b318_258 = 0x102 };
#endif
    int var0;
    int var1 = func_ov017_021d60f4(arg0);
    var0 = -16;
    if (arg1 >= 2) {
        var0 = func_ov017_021d60f4((char*)arg0 + 0x8);
    }
    void* var2 = GameState::GetInstance();
    void* var3 = func_0200fb8c((int*)var2);
    if (var3 != NULL) {
        SetBrightness((GameResources*)var3, var0, var1);
        char* var4 = *(char**)(((char*)GetGameResources()) + 0x3000 + Enum_ov001_0215b318_1844);
        if (*(unsigned short*)(var4 + 0xa) <= 3) {
            *(unsigned char*)(var4 + Enum_ov001_0215b318_258) = 1;
        }
    }
    return 1;
}
