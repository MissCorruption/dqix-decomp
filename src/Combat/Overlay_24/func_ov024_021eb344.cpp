#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021fe970 {
    float unknown_0_;
    unsigned char unknown_4_;
};

struct Struct_ov024_021fe974 {
    unsigned char unknown_0_;
    char unknown_1_[7];
};

extern Struct_ov024_021fe970 data_ov024_021fe970[9];
extern Struct_ov024_021fe974 data_ov024_021fe974[9];

static inline unsigned short inline_ov024_021dc700(GameObject* arg0) {
    return arg0->currentStats_->primaryStats.maxHP;
}

// USA: func_ov024_021eb344
extern "C" ARM int func_ov024_021eb344(void* arg0, int arg1, int arg2) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == 0) return 0;
    if (arg2 <= 0) return 0;
    unsigned short var1 = inline_ov024_021dc700(var0);
    float var2 = (float)arg2 / (float)var1;
    for (int var3 = 0; var3 < 9; var3++) {
        if (var2 >= data_ov024_021fe970[var3].unknown_0_) return data_ov024_021fe974[var3].unknown_0_;
    }
    return 0;
}
