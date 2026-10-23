#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020a2be8;

struct Vector3i;

struct Struct_020d7534 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" void func_020d74a4(void* arg0, int arg1, struct Struct_020d7534 arg2);

extern "C" void func_0205a020(unsigned char* arg0, int arg1);

struct Struct_020d7534_2 {
    char unknown_0_[0x50];
    struct Struct_020d7534 unknown_50_;
    char unknown_5c_[0x74];
    int unknown_d0_;
    char unknown_d4_[4];
};

// USA: func_020d7534
extern "C" ARM void func_020d7534(struct Struct_020d7534_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int var1 = var0->GetTickCount();
    int var2;
    for (var2 = 0; var2 < 0xc; var2++) {
        unsigned short var3 = *(unsigned short*)((char*)arg0 + 0xa24);
        if (var3 & (1 << var2)) {
            int var4 = var2;
            if (var2 > 3) {
                var4 = var2 + 0xbc;
            }
            GameObject* var5 = var0->GetGameObjectByIndex(var4);
            if (var5 != 0) {
                struct Struct_020d7534 var6 = *(struct Struct_020d7534*)((char*)var5 + 0x84);
                var6.unknown_4_ = ((Object3D*)((struct Struct_020a2be8*)var5))->GetHeight();
                func_020d74a4(arg0, var2, var6);

                if (arg0[var2].unknown_d0_ == 4) {
                    struct Struct_020d7534_2* var7 = &arg0[var2];
                    int var8 = 0x6488;
                    struct Struct_020d7534 var9 = var7->unknown_50_;
                    var9.unknown_4_ = var9.unknown_4_ + 0x66 + 0x200;
                    if (var9.unknown_4_ > var8) {
                        var9.unknown_4_ = var9.unknown_4_ - var8;
                    }
                    *(Vector3i*)((int*)&var7->unknown_50_) = *(Vector3i const*)((int*)&var9);
                }
                func_0205a020((unsigned char*)&arg0[var2], var1);
            }
        }
    }
}
