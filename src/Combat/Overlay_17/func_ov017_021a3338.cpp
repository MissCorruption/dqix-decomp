#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_1/EventArgs.h"

extern "C" void* func_02012fe4(void);
extern "C" int func_02018fbc(int arg0, Struct_ov001_02158efc* arg1);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027cb0(void);
struct Vector3i;

struct Struct_02039df4;

struct Struct_ov017_021a3338 { unsigned short unknown_0_; };
struct Struct_ov017_021a3338_2 { unsigned char unknown_0_[2]; unsigned short unknown_2_0_ : 2; unsigned short unknown_2_2_ : 14; };

// USA: func_ov017_021a3338
extern "C" ARM void func_ov017_021a3338(void*) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov017_021a3338* var1 = (struct Struct_ov017_021a3338*)func_02012fe4();
    unsigned short var2 = var1->unknown_0_;
    struct Struct_020fdd44* var3 = func_02027cb0();
    if (var3 == NULL) return;

    int var4;
    for (var4 = 0; var4 < 0xc; var4++) {
        int var5 = ((struct Struct_ov017_021a3338_2*)var3)->unknown_2_0_;
        int var6 = var5 * 0xc + 0x70;
        GameObject* var7 = var0->GetMaybeFieldMonsterByIndex(var4 + var6);
        if (var7) {
            if (var2 == ((Object3D*)((struct Struct_02039df4*)var7))->GetField06()) {
                Struct_ov001_02158efc var8 = *(Struct_ov001_02158efc*)((char*)var7 + 0x44);
                var8.unknown_4_ = func_02018fbc((int)var1, &var8);
                *(Vector3i*)(&var7->obj3D_.position_.x) = *(Vector3i const*)((int*)&var8);
            }
        }
    }
}
