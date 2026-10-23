#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

extern "C" void func_ov000_0216d370(void* arg0, int arg1, int arg2, int arg3);

struct Struct_0202ecc8 { unsigned int unknown_0_[12]; };
struct Struct_0202ecc8_2;
extern "C" void func_0202ecc8(struct Struct_0202ecc8_2* arg0, struct Struct_0202ecc8* arg1);
extern "C" void func_0202e694(void* arg0, int* arg1);

extern "C" void func_ov000_0216d234(void* arg0, void* arg1, void* arg2);

extern Vector3i data_ov000_0218328c;

struct Struct_ov000_0216de00 {
    char unknown_0_[0x10];
    Vector3i unknown_10_;
};

// USA: func_ov000_0216de00
extern "C" ARM void func_ov000_0216de00(struct Struct_ov000_0216de00* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(arg1);
    GameObject* var2 = var0->GetGameObjectByIndex(arg2);
    if (var1 == NULL || var2 == NULL) {
        return;
    }
    func_ov000_0216d370(arg0, 1, 1, 1);
    Vector3fix var3 = var1->obj3D_.position_;
    Vector3fix var4 = var2->obj3D_.position_;
    Vector3fix var5;
    Vector3fix_Subtract(&var3, &var4, &var5);
    Vector3fix_Normalize(&var5, &var5);
    struct Struct_0202ecc8 var6;
    func_ov000_0216d234(&var5, &var4, &var6);
    func_0202ecc8((struct Struct_0202ecc8_2*)arg0, &var6);
    Vector3i var7 = data_ov000_0218328c;
    int var8[3];
    var8[0] = 0x3244;
    var8[1] = 0;
    var8[2] = 0x1000;
    arg0->unknown_10_ = var7;
    func_0202e694(arg0, var8);
}
