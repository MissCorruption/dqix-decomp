#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
extern "C" int _s32_div_f(int a, int b);

struct Struct_ov011_02187898 { char unknown_0_[8]; char unknown_8_[8]; };

// USA: func_ov011_02187898
extern "C" ARM int func_ov011_02187898(struct Struct_ov011_02187898* arg0) {
    GameResources* var0 = GetGameResources();
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)&arg0->unknown_0_);
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)&arg0->unknown_8_);
    int var3 = _s32_div_f(var2, 0x22);
    SetSubBrightness(var0, var1, var3);
    return 1;
}
