#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Matrix.h"

struct Struct_ov000_0217e870_2;
struct Struct_02010604;

struct Struct_020a212c_2 {
    char unknown_0_[0x4];
    Vector3i unknown_4_;
    Vector3i unknown_10_;
    char unknown_1c_[0x54];
    Vector3i unknown_70_;
};

struct Struct_ov000_02160da0 {
#if defined(jpn)
    char unknown_0_[0x21c];
#else
    char unknown1_0_[0x2a0];
#endif

    Struct_ov000_0217e870_2* unknown_2a0_;
#if defined(jpn)
    char unknown_220_[0x76e4];
#else
    char unknown_2a4_[0x7470];
#endif

    short unknown_7714_;
    char unknown_7716_[0x8];
    short unknown_771e_;
    short unknown_7720_;
    char unknown_7722_[0x2a];
    SafeAllocator unknown_774c_;
};

extern "C" int func_020a35e0(unsigned char*, unsigned char);
extern "C" int func_02033b88(Struct_02010604* arg0, int arg1);
extern "C" void func_020100c4(GameState* arg0, int arg1);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void func_0202e694(void* arg0, int* arg1);

extern "C" {
void* func_02057924();
void func_02057f00(void*, int);
Struct_020a212c_2* func_ov000_02160f14(Struct_ov000_02160da0*);
void func_ov000_0216d370(Struct_020a212c_2*, int, int, int);
}

// USA: func_ov026_021dbba8
extern "C" ARM void func_ov026_021dbba8(Struct_ov000_02160da0* arg0) {
    GameState* var0 = GameState::GetInstance();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();

    func_02057f00(func_02057924(), 0x12);
    func_02057f00(func_02057924(), 0x1d);
    func_02057f00(func_02057924(), 0x1e);

    for (int var2 = 0; var2 < 4; var2++) {
        if (func_020a35e0((unsigned char*)arg0->unknown_2a0_, var2)) {
            GameObject* var3 = func_0200ff1c(var0, var2);
            if (var3 != NULL) {
                var3->obj3D_.RemoveAnimationPackageByID(3);
                func_02033b88((Struct_02010604*)var3, 0);
            }
        }
    }

    Struct_020a212c_2* var4 = (Struct_020a212c_2*)func_020100bc(var0);
    Struct_020a212c_2* var5 = func_ov000_02160f14(arg0);
    Vector3i var6 = var4->unknown_70_;
    func_ov000_0216d370(var5, 1, 1, 1);
    var5->unknown_10_ = var4->unknown_10_;
    func_0202e694(var5, &var6.x);
    var5->unknown_4_ = var4->unknown_4_;
    func_020100c4(var0, (int)func_ov000_02160f14(arg0));
    func_0200fd48(var0, 0xcf);

    var1->RemoveTask(arg0->unknown_7714_);
    var1->RemoveTask(arg0->unknown_771e_);
    var1->RemoveTask(arg0->unknown_7720_);
    arg0->unknown_7714_ = arg0->unknown_771e_ = arg0->unknown_7720_ = -1;
    arg0->unknown_774c_.Reset();
}
