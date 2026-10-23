#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov001_02164808(int, int, void*);
extern int data_ov001_02165884;

struct Struct_ov001_02159bbc { int unknown_0_, unknown_4_, unknown_8_; };
struct Vector3i;
void Vector3fixMultiplyScalar(Vector3i const*, int, Vector3i*);

struct Struct_ov001_02159b94 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" int func_ov001_02159b94(int arg0, int arg1, struct Struct_ov001_02159b94 arg2);

struct Struct_ov001_02159bbc_2 { int unknown_0_; Struct_ov001_02159bbc unknown_4_; int unknown_10_; };
struct Struct_ov001_02159bbc_3 { char unknown_0_[0x5c]; int unknown_5c_; char unknown_60_[0x70 - 0x60]; int unknown_70_; char unknown_74_[0x108 - 0x74]; Struct_ov001_02159bbc unknown_108_; };

// USA: func_ov001_02159bbc
extern "C" ARM int func_ov001_02159bbc(struct Struct_ov001_02159bbc_2* arg0, struct Struct_ov001_02159bbc_3* arg1) {
    void* var0 = GameState::GetInstance();
    unsigned int var1 = ((GameState*)var0)->GetTickCount() << 12;
    int var2 = arg1->unknown_5c_;
    if (var2 >= arg0->unknown_10_ * 2) {
        arg1->unknown_5c_ = 0;
        return 0;
    }
    if (var2 <= 0) {
        Struct_ov001_02159bbc var3;
        Struct_ov001_02159bbc var4;
        func_ov001_02164808(data_ov001_02165884, arg1->unknown_70_, &var4);
        int var5 = arg0->unknown_10_ << 12;
        Vector3fix_Subtract((const Vector3fix*)&arg0->unknown_4_, (const Vector3fix*)&var4, (Vector3fix*)&var3);
        arg1->unknown_108_.unknown_0_ = fix32_Divide((fix32_t)var3.unknown_0_, (fix32_t)var5);
        arg1->unknown_108_.unknown_4_ = fix32_Divide((fix32_t)var3.unknown_4_, (fix32_t)var5);
        arg1->unknown_108_.unknown_8_ = fix32_Divide((fix32_t)var3.unknown_8_, (fix32_t)var5);
    } else {
        Struct_ov001_02159bbc var6 = arg1->unknown_108_;
        int var7 = fix32_Divide((fix32_t)var1, (fix32_t)(0x2000));
        Vector3fixMultiplyScalar((Vector3i const*)&var6, var7, (Vector3i*)&var6);
        Struct_ov001_02159bbc var8;
        func_ov001_02164808(data_ov001_02165884, arg1->unknown_70_, &var8);
        Vector3fix_Add((const Vector3fix*)&var8, (const Vector3fix*)&var6, (Vector3fix*)&var8);
        struct Struct_ov001_02159b94 var9 = *(struct Struct_ov001_02159b94*)&var8;
        func_ov001_02159b94(data_ov001_02165884, arg1->unknown_70_, var9);
    }
    arg1->unknown_5c_ += ((GameState*)var0)->GetTickCount();
    return 1;
}
