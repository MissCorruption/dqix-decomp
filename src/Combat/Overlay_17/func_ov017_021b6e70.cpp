#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"
#include "Grotto/Main/TreasureMapMetadata.h"

extern "C" void* func_02012fe4(void);
extern "C" int func_0201b5d8(int arg0);

struct Struct_ov017_021b6e70 {
    unsigned char unknown_0_[0xc];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
};

// USA: func_ov017_021b6e70
extern "C" ARM bool func_ov017_021b6e70(struct Struct_ov017_021b6e70* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetMaybeFieldMonsterByIndex(arg1);
    if (var1) {
        unsigned char var2 = *((unsigned char*)var1 + 0x17d);
        if (var2 & 0x2) {
            arg0->unknown_c_ = 1;
        } else if (var2 & 0x4) {
            arg0->unknown_d_ = 1;
        }
    }

    void* var3 = func_02012fe4();
    struct GrottoStruct* var4 = var0->GetGrottoStruct();
#if defined(jpn)
    int var5 = var4->activeMapData.GetMapType();
#else
    int var5 = var4->activeMapData.GetMapType();
#endif
    int var6 = *(unsigned short*)var3;

    if (func_0201b5d8(var6)) {
        if (var5 == 1) {
            arg0->unknown_c_ = 1;
        } else if (var5 == 2) {
            arg0->unknown_d_ = 1;
        }
    }

    return arg0->unknown_c_ != 0 || arg0->unknown_d_ != 0;
}
