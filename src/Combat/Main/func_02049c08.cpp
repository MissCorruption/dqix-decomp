#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

extern "C" void __clear(void* arg0, int arg1);

struct Struct_02049c08 {
    int unknown_0_;
    Vector3i unknown_4_;
    Vector3i unknown_10_;
};

struct Struct_02049c08_2 {
    GameObject unknown_0_;
    Struct_02049c08* unknown_13c_;
};

extern "C" ARM Vector3i func_02049c08(Struct_02049c08_2* arg0) {
    Vector3i var0;
    __clear(&var0, sizeof(var0));
    if (arg0->unknown_13c_ == NULL) return var0;
    fix32_t var1 = arg0->unknown_13c_->unknown_10_.x;
    fix32_t var2 = arg0->unknown_13c_->unknown_10_.z;
    var0.x = var1;
    var0.y = 0xcc;
    var0.z = var2;
    return var0;
}
