#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov017_021a4e0c {
    unsigned char unknown_0_[0x22];
    short unknown_22_;
};

extern "C" void func_ov017_021c12fc(char* arg0, unsigned char, unsigned char);

// USA: func_ov017_021a4e0c
extern "C" ARM void func_ov017_021a4e0c(GameResources* arg0) {
    char* var0 = (char*)arg0;
    GameObject* var1 = GameState::GetInstance()->GetUnknownGameObject();
    if (var1 == NULL) return;
    short var2 = var1->obj3D_.unknown_4_;
    GameResources* var3 = arg0;
    Struct_ov017_021a4e0c* var4 = (Struct_ov017_021a4e0c*)var3->unknown_ptr_array_371c[0];
    var4->unknown_22_ = var2;
    func_ov017_021c12fc(var0, 1, 1);
}
