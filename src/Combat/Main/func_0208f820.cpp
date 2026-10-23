#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

extern "C" void* func_02012fe4(void* arg0);

struct Struct_0208f820 {
    unsigned char unknown_0_[8];
    unsigned char unknown_8_[0xac];
    unsigned char unknown_b4_;
    unsigned char unknown_b5_;
    unsigned char unknown_b6_;
};

// USA: func_0208f820
extern "C" ARM void func_0208f820(struct Struct_0208f820* arg0) {
    if (arg0->unknown_b4_ != 0 && arg0->unknown_b6_ != 0) {
        if (((Object3D*)((unsigned char*)arg0 + 8))->IsVisible() == 0) {
            return;
        }
        GameState* var0 = GameState::GetInstance();
        GrottoStruct* var1 = var0->GetGrottoStruct();
        unsigned short var2 = *(unsigned short*)func_02012fe4(var1);
        if (var2 != *(int*)((char*)var1 + 0xc)) {
            return;
        }
        ((Object3D*)((unsigned char*)arg0 + 8))->Draw(1);
    }
}
