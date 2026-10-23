#include <globaldefs.h>
#include "GameState/Field3b0.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_02015ef4 { unsigned int unknown_0_[3]; };
extern "C" int func_0202ec84(void* arg0, struct Struct_02015ef4* arg1, int* arg2, int* arg3);

struct Struct_02015ef4_2;
extern "C" void func_020473c8(struct Struct_02015ef4_2* arg0, int arg1);

struct Struct_ov017_021b6090 {
    char unknown_0_[0x16];
    unsigned char unknown_16_;
    char unknown_17_[0x20 - 0x17];
    void* unknown_20_;
    char unknown_24_[0x2c - 0x24];
    struct Struct_02015ef4 unknown_2c_;
    int unknown_38_;
};

// USA: func_ov017_021b6090
extern "C" ARM void func_ov017_021b6090(struct Struct_ov017_021b6090* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_020100bc(var0);
    struct Struct_02015ef4 var2 = arg0->unknown_2c_;

    if (arg0->unknown_38_ < 0x191e) {
        arg0->unknown_38_ += var0->GetTickCount() * 0x199;
    }

    var2.unknown_0_[1] += fix32sin(arg0->unknown_38_);

    int var3, var4;
    if (var1 != NULL) {
        func_0202ec84(var1, &var2, &var3, &var4);
    }

    unsigned char* var5 = (unsigned char*)arg0->unknown_20_;
    if (var5 == NULL) return;

    int var6 = (var3 - 0xc) << 0xc;
    int var7 = (var4 - 0x28) << 0xc;
    *(int*)(var5 + 0x1c) = var6;
    *(int*)(var5 + 0x20) = var7;
    *(int*)(var5 + 0x24) = 0;
    func_020473c8((struct Struct_02015ef4_2*)var5, 1);

    unsigned char var8 = arg0->unknown_16_;
    unsigned short var9 = (var8 > 0x1f) ? 0x1f : var8;
    *(unsigned short*)(var5 + 0x82) = var9;
}
