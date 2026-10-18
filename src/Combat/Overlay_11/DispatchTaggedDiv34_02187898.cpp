#include <globaldefs.h>
#include "Resource/GameResources.h"

struct TaggedNumber02184c30;
int GetTaggedValueAsInt_02184c30(struct TaggedNumber02184c30* v);

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
extern "C" int _s32_div_f(int a, int b);

struct TwoTaggedValues_02187898 { char a[8]; char b[8]; };

// USA: func_ov011_02187898
ARM int DispatchTaggedDiv34_02187898(struct TwoTaggedValues_02187898* obj) {
    GameResources* g = GetGameResources();
    int v1 = GetTaggedValueAsInt_02184c30((struct TaggedNumber02184c30*)&obj->a);
    int v2 = GetTaggedValueAsInt_02184c30((struct TaggedNumber02184c30*)&obj->b);
    int q = _s32_div_f(v2, 0x22);
    SetSubBrightness(g, v1, q);
    return 1;
}
