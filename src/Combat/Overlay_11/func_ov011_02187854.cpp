#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" int _s32_div_f(int a, int b);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);

// USA: func_ov011_02187854
extern "C" ARM int func_ov011_02187854(struct Struct_ov011_02184c30* arg0) {
    GameResources* var0 = GetGameResources();
    int var1 = func_ov011_02184c30(arg0);
    struct Struct_ov011_02184c30* var2 = (struct Struct_ov011_02184c30*)((char*)arg0 + 0x8);
    int var3 = _s32_div_f(func_ov011_02184c30(var2), 0x22);
    SetMainBrightness(var0, var1, var3);
    return 1;
}
