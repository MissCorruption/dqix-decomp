#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Object3D.h"

struct Struct_02000c9c_37 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; };
struct Struct_ov001_02165880_7 { char unknown_0_[4]; Struct_02000c9c_37* unknown_4_; };
extern Struct_ov001_02165880_7 data_ov001_02165880;

struct Struct_ov001_0215ab54 { char unknown_0_[0x90]; fix32_t unknown_90_; };

struct Struct_0203dce4;
struct Struct_0203dce4_2;
extern "C" Struct_0203dce4_2* func_0203cf4c(void);
extern "C" Struct_0203dce4* func_0203dce4(Struct_0203dce4_2* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_ov001_02164214(void* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov001_02164248(void* arg0, int arg1, int arg2, int arg3, int arg4);

extern "C" void func_ov001_0215acb4(Struct_02000c9c_37* arg0);
extern "C" Struct_ov001_0215ab54* func_ov001_0215ab20(int arg0);
extern "C" void func_ov001_02159d9c(void* arg0);
extern "C" void func_ov001_02159ea8(void* arg0, int arg1);

// USA: func_ov001_0215ab54
extern "C" ARM void func_ov001_0215ab54(int arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    fix32_t var1 = 0x1000;
    func_ov001_0215acb4(&data_ov001_02165880.unknown_4_[arg2]);

    if (arg0 == 0 || arg0 == 1 || arg0 == 4 || arg0 == 5) {
        GameObject* var2 = NULL;
        if (arg0 == 0) {
            var2 = var0->GetGameObjectByIndex(func_020100a8(var0));
        } else if (arg0 == 1) {
            var2 = var0->GetGameObjectByIndex(arg1);
        } else if (arg0 == 4) {
            var2 = var0->GetGameObjectByIndex(0);
        } else if (arg0 == 5) {
            var2 = var0->GetGameObjectByIndex(arg1);
        }
        if (var2 == NULL) return;
        func_ov001_02164214(data_ov001_02165880.unknown_4_, arg2, arg0, arg1, (int)var2);
        var1 = var2->obj3D_.GetRadius();
    } else if (arg0 == 2 || arg0 == 6) {
        Struct_0203dce4* var3 = func_0203dce4(func_0203cf4c(), arg1);
        if (var3 == NULL) return;
        func_ov001_02164248(data_ov001_02165880.unknown_4_, arg2, arg0, arg1, (int)var3);
    }

    Struct_ov001_0215ab54* var4 = func_ov001_0215ab20(arg2);
    if (var4 == NULL) return;
    func_ov001_02159d9c(var4);
    func_ov001_02159ea8(var4, arg2);
    var4->unknown_90_ = var1;
}
