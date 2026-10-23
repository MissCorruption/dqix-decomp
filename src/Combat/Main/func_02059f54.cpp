#include <globaldefs.h>

#include "Combat/DistanceSort.h"
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/RenderConfig.h"

struct Struct_02059cfc_2;
struct Struct_02059cfc_3;
extern "C" void func_02059f38(struct Struct_02059cfc_2* arg0, struct Struct_02059cfc_3* arg1);

struct Struct_0202e5d8_2;
struct Struct_0202e5d8_3;

extern "C" void _ZN8Object3D4DrawEb(void* arg0, int arg1);

struct Struct_02059f54 { int unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_02059f54_2 {
    char unknown_0_[0xcc];
    unsigned char unknown_cc_0_:1;
    unsigned char unknown_cc_1_:1;
    unsigned char unknown_cc_2_:1;
    unsigned char unknown_cc_3_:1;
    unsigned char unknown_cc_4_:1;
    unsigned char unknown_cc_5_:1;
    unsigned char unknown_cc_6_:1;
    unsigned char unknown_cc_7_:1;
};

// USA: func_02059f54
extern "C" ARM void func_02059f54(unsigned char* arg0, int arg1) {
    short* var0 = (short*)(arg0 + 0xb0);
    if (*var0 > 0) {
        return;
    }

    GameState* var1 = GameState::GetInstance();
    if (var1->GetGameObjectByIndex(arg1) == 0) {
        return;
    }

    struct Struct_02059f54 var2 = *(struct Struct_02059f54*)(arg0 + 0x44);
    struct Struct_02059f54_2* var3 = (struct Struct_02059f54_2*)arg0;

    if (var3->unknown_cc_3_) {
        struct Struct_02059f54 var4 = *(struct Struct_02059f54*)(arg0 + 0x44);
        void* var5 = (void*)RenderConfig::GetInverseViewMatrix();
        Mat4x3_ApplyToVector((const Vector3fix*)((struct Struct_0202e5d8_2*)&var4), (const Matrix4x3*)((struct Struct_0202e5d8_3*)var5), (Vector3fix*)((struct Struct_0202e5d8_2*)&var4));
        func_02059f38((struct Struct_02059cfc_2*)arg0, (struct Struct_02059cfc_3*)&var4);
    }

    if (*(int*)(arg0 + 0xac) == 0) {
        _ZN8Object3D4DrawEb(arg0, var3->unknown_cc_2_);
    } else {
        func_0205578c((int*)arg0);
    }

    if (var3->unknown_cc_3_) {
        func_02059f38((struct Struct_02059cfc_2*)arg0, (struct Struct_02059cfc_3*)&var2);
    }
}
