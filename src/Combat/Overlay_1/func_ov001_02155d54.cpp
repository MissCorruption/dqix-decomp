#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

class Struct_ov001_02155d54;
extern "C" int func_ov028_021d8d40(Struct_ov001_02155d54* arg0, unsigned short arg1);
extern "C" int func_ov001_02156858(void*);
struct GameResources;
void UnlockAndSetBrightness(GameResources*, int, int);
extern "C" int func_ov001_02153994(void);

// USA: func_ov001_02155d54
extern "C" ARM int func_ov001_02155d54(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02155d54_0 = -4 };
#else
    enum { Enum_ov001_02155d54_0 = 0 };
#endif
    GameState::GetInstance();
    GameResources* var0 = GetGameResources();
    int var1 = *(int*)((char*)arg0 + 0x160 + Enum_ov001_02155d54_0);
    if (var1 != 0) {
        int var2 = func_ov028_021d8d40((Struct_ov001_02155d54*)var1, 2);
        *((unsigned char*)arg0 + 0x164 + Enum_ov001_02155d54_0) = (var2 != 0);
    }
    if (func_ov001_02156858(arg0) != 0) {
        UnlockAndSetBrightness(var0, -16, 0x1e);
        *(int*)((char*)arg0 + 0x15c + Enum_ov001_02155d54_0) = 1;
        return 0xe;
    }
    return (func_ov001_02153994() != 1) ? *(unsigned short*)((char*)arg0 + 0xa) : 0xf;
}
