#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct GameResources;

void SetBrightness(struct GameResources* resources, int brightness, int duration);
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

// USA: func_ov011_02184c7c
extern "C" ARM int func_ov011_02184c7c(struct Struct_ov011_02184c30* arg0, int arg1) {
    struct GameResources* var0 = GetGameResources();
    int var1 = func_ov011_02184c30(&arg0[0]);
    SetBrightness(var0, var1, func_ov011_02184c30(&arg0[1]) / 34);
    return 1;
}
