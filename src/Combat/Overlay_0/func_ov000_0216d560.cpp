#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_0202ecfc;
extern "C" void func_0202ecfc(struct Struct_0202ecfc* arg0);

struct Struct_0202ecc8 { unsigned int unknown_0_[12]; };
struct Struct_0202ecc8_2;
extern "C" void func_0202ecc8(struct Struct_0202ecc8_2* arg0, struct Struct_0202ecc8* arg1);

extern "C" void func_ov000_0216d234(void* arg0, void* arg1, void* arg2);

struct Struct_ov000_0216d560 { unsigned int unknown_0_[3]; };
struct Struct_ov000_0216d560_2 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_ov000_0216d560_3 { int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_ov000_0216d560_4 {
    char unknown_0_[0x224];
    int unknown_224_;
};

// USA: func_ov000_0216d560
extern "C" ARM void func_ov000_0216d560(struct Struct_ov000_0216d560_4* arg0, int arg1) {
    GameObject* var0 = GameState::GetInstance()->GetGameObjectByIndex(arg1);
    if (!var0) {
        arg0->unknown_224_ = -1;
        func_0202ecfc((struct Struct_0202ecfc*)arg0);
    } else {
        struct Struct_ov000_0216d560 var1 = *(struct Struct_ov000_0216d560*)((char*)var0 + 0x44);
        struct Struct_ov000_0216d560_2 var2 = *(struct Struct_ov000_0216d560_2*)((char*)var0 + 0x50);
        struct Struct_ov000_0216d560_3 var3;
        struct Struct_0202ecc8 var4;
        var3.unknown_0_ = fix32sin(var2.unknown_4_);
        var3.unknown_4_ = 0;
        var3.unknown_8_ = fix32cos(var2.unknown_4_);
        func_ov000_0216d234(&var3, &var1, &var4);
        func_0202ecc8((struct Struct_0202ecc8_2*)arg0, &var4);
    }
}
