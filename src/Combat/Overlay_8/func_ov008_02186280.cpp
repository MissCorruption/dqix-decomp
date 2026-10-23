#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" int func_020421a0(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);

struct Struct_ov008_02186280 { char unknown_0_[0xb11]; unsigned char unknown_b11_; };

// USA: func_ov008_02186280
extern "C" ARM void func_ov008_02186280(struct Struct_ov008_02186280* arg0) {
    int var0 = func_0200fb8c((int*)GameState::GetInstance());
    func_020421a0();
    if (arg0->unknown_b11_ == 0) {
        SetBrightness((GameResources*)var0, 0, 0xf);
        arg0->unknown_b11_++;
    }
}
