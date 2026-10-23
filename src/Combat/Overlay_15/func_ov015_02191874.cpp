#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/Matrix.h"
#include "Input/Input.h"

struct Struct_ov009_0218aa28
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov015_0218f44c_2;
struct Struct_ov015_0218c03c_2;

struct Struct_ov015_02190acc
{
    char unknown_0_[0x34];
    Struct_ov015_0218c03c_2* unknown_34_;
};

void Vector3fixMultiplyScalar(const Vector3i* in, int scale, Vector3i* out);
extern "C" void func_ov015_0218f44c(Struct_ov015_0218f44c_2* arg0, Struct_ov009_0218aa28 arg1);
extern "C" void func_ov015_0218f5f8(Struct_ov015_0218c03c_2* arg0, int arg1);

// USA: func_ov015_02191874
extern "C" ARM void func_ov015_02191874(Struct_ov015_02190acc* arg0)
{
    if (arg0->unknown_34_ == NULL)
        return;
    GameState::GetInstance();
    Vector3fix var0 = {0};
    Matrix3x3 var1;
    if (g_keyManager.TestKeysHeld(0x40))
        var0.z = -0x199;
    if (g_keyManager.TestKeysHeld(0x80))
        var0.z = 0x199;
    if (g_keyManager.TestKeysHeld(0x10))
        var0.x = 0x199;
    if (g_keyManager.TestKeysHeld(0x20))
        var0.x = -0x199;
    memcpy(&var1, RenderConfig::GetInverseViewMatrix(), sizeof(var1));
    Mat3x3_ApplyToVector(&var0, &var1, &var0);
    var0.y = 0;
    Vector3fix_Normalize(&var0, &var0);
    Vector3fixMultiplyScalar(&var0, 0x199, &var0);
    if (g_keyManager.TestKeysHeld(0x400))
        var0.y += 0x199;
    if (g_keyManager.TestKeysHeld(0x800))
        var0.y -= 0x199;
    func_ov015_0218f44c((Struct_ov015_0218f44c_2*)arg0->unknown_34_, *(Struct_ov009_0218aa28*)&var0);
    if (g_keyManager.TestKeysHeld(0x200))
        func_ov015_0218f5f8(arg0->unknown_34_, 0x199);
    if (g_keyManager.TestKeysHeld(0x100))
        func_ov015_0218f5f8(arg0->unknown_34_, -0x199);
}
