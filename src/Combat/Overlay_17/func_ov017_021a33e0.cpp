#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02012fe4(void);
extern "C" void* func_0202ae18(void);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ccc(int arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202c508(void* arg0);
extern "C" void func_02076a8c(void* arg0);
extern "C" void func_ov017_021c9544(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021a33e0 { unsigned char unknown_0_[2]; unsigned short unknown_2_0_ : 2; unsigned short unknown_2_2_ : 14; };

// USA: func_ov017_021a33e0
extern "C" ARM void func_ov017_021a33e0(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    func_02012fe4();
    void* var1 = func_0202ae18();
    struct Struct_020fdd44* var2 = func_02027ccc(arg1);
    if (var2 == NULL) return;

    *(int*)((char*)var2 + 8) = 0;

    int var3;
    for (var3 = 0; var3 < 0xc; var3++) {
        int var4 = ((struct Struct_ov017_021a33e0*)var2)->unknown_2_0_;
        int var5 = var4 * 0xc + 0x70;
        GameObject* var6 = var0->GetMaybeFieldMonsterByIndex(var3 + var5);
        if (var6) {
            func_02076a8c(var6);
            ((Object3D*)((unsigned char*)var6))->MakeHidden();
            if (func_0202b7d8((int*)var1) && func_0202c508(var1)) {
                func_ov017_021c9544(arg1, var3, var6->obj3D_.unknown_2_, -1);
            }
        }
    }
}
