#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* obj);
extern "C" int func_020421a0(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);

struct Obj02186280 { char pad[0xb11]; unsigned char b11; };

// USA: func_ov008_02186280
extern "C" ARM void func_ov008_02186280(struct Obj02186280* obj) {
    int v = func_0200fb8c((int*)GameState::GetInstance());
    func_020421a0();
    if (obj->b11 == 0) {
        SetBrightness((GameResources*)v, 0, 0xf);
        obj->b11++;
    }
}
