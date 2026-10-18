#include <globaldefs.h>
#include "Resource/GameResources.h"

struct TaggedNumber02184c30;
extern int GetTaggedValueAsInt_02184c30(struct TaggedNumber02184c30* v);

extern "C" int _s32_div_f(int a, int b);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);

// USA: func_ov011_02187854
ARM int SetSingleCounterFromTaggedField_02187854(struct TaggedNumber02184c30* tagged) {
    GameResources* target = GetGameResources();
    int value = GetTaggedValueAsInt_02184c30(tagged);
    struct TaggedNumber02184c30* second = (struct TaggedNumber02184c30*)((char*)tagged + 0x8);
    int frames = _s32_div_f(GetTaggedValueAsInt_02184c30(second), 0x22);
    SetMainBrightness(target, value, frames);
    return 1;
}
