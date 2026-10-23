#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

struct Struct_02079238_4 { unsigned int unknown_0_; };

struct Struct_02079238 {
    Object3D unknown_0_;
    char     unknown_ac_[0xae - 0xac];
    short    unknown_ae_;
    char     unknown_b0_[0xc0 - 0xb0];
    unsigned char unknown_c0_;
    char     unknown_c1_[0xc3 - 0xc1];
    unsigned char unknown_c3_;
    char     unknown_c4_[0x130 - 0xc4];
    Struct_02079238_4* unknown_130_;
};

struct Struct_02079238_2 { char unknown_0_[0x56c]; unsigned char unknown_56c_; };

struct Struct_02079238_3 { int unknown_0_, unknown_4_, unknown_8_; };

extern "C" int func_02039860(void*);
extern "C" int func_020342ac(GameObject*);
extern "C" Struct_02079238_2* func_02053c6c(unsigned char*);
extern "C" int func_02034340(void*);
extern "C" Struct_02079238_3 func_02034104(GameObject*);
extern "C" void __clear(void* arg0, int arg1);
int fix32sin(int x);
int fix32cos(int x);

// USA: func_02079238
extern "C" ARM short func_02079238(Object3D* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    for (int var1 = 0; var1 < 4; ++var1) {
        GameObject* var2 = var0->GetPartyMemberByIndex(var1);
        if (!var2) {
            if (var1 == 0) return -1;
            continue;
        }
        if (func_02039860(var2) != -1) continue;
        if (arg0->GetField06() != var2->obj3D_.GetField06()) continue;
        Struct_02079238* var3 = (Struct_02079238*)var2;
        if (!func_020342ac(var2)) continue;
        if (var3->unknown_c0_ == 6) continue;
        if (var2->obj3D_.GetField06() != arg0->GetField06()) continue;
        if (func_02053c6c((unsigned char*)var2)->unknown_56c_ != 0) continue;
        if (var3->unknown_130_->unknown_0_ & 1) continue;
        if ((int)var3->unknown_c3_ > 0) continue;
        if (func_02034340(var2)) continue;
        Struct_02079238_3 var4 = func_02034104(var2);
        Struct_02079238_3 var5;
        Vector3fix_Subtract((const Vector3fix*)&var4,
                            &arg0->position_,
                            (Vector3fix*)&var5);
        int var6 = Vector3fix_Length((const Vector3fix*)&var5);
        if (var6 <= arg1) {
            short var7 = ((Struct_02079238*)arg0)->unknown_ae_;
            Struct_02079238_3 var8;
            __clear(&var8, 0xc);
            var8.unknown_0_ = fix32sin(var7);
            var8.unknown_8_ = fix32cos(var7);
            if (fix32_Divide(Vector3fix_InnerProduct((const Vector3fix*)&var5,
                                                     (const Vector3fix*)&var8), var6) > 0xb50)
                return (short)var1;
        }
    }
    return -1;
}
