#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Obj02022d78;
void SetActiveModeSavingPrevious02022d78(struct Obj02022d78*, int);

// USA: func_020dc3b8
ARM void Notify02022d78WithCode2_020dc3b8(void) {
    int base = (int)GetGameResources();
    SetActiveModeSavingPrevious02022d78((struct Obj02022d78*)*(void**)(base + 0x3000 + 0x6d0), 2);
}
