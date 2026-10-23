#include <globaldefs.h>
#include "Combat/ActionDisplay.h"
#include "Combat/MapDisplay.h"
#include "GameState/GameState.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

struct Struct_02020fc4_3;
struct Struct_02024518_3;
struct Struct_02024518_2;
struct Struct_0202441c;
struct Struct_02024d48;
struct Struct_02024518 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
extern "C" void* func_0203b628();
extern "C" void* func_02012fe4();
extern "C" void func_0203b718(void*, int, int, int);
extern "C" Struct_02024518_3* func_02027878(Struct_02024518_2*, int);
extern "C" void func_0203bcb8(Struct_02020fc4_3*, int, int);
extern "C" void func_0202441c(Struct_0202441c*);
extern "C" int func_020243b8(void*, int);
extern "C" int func_02024d48(Struct_020236dc*, int);
extern "C" void func_0202756c(void*, int, int, int, unsigned char, unsigned char, unsigned short, unsigned char, int, int);

// USA: func_02025b0c
extern "C" ARM void func_02025b0c(Struct_02020554* arg0) {
    GameObject* var0 = GameState::GetInstance()->GetUnknownGameObject();
    void* var1 = func_0203b628();
    func_02012fe4();
    Vector3i var2 = var0->obj3D_.position_;
    Struct_020236dc var3[17];
    unsigned char var4[32];
    memset(var4, 0, sizeof(var4));
    int var5 = func_020236dc(var3, var4, &var2);
    int var6;
    int var7;
    fix32_t var8;
    var8 = arg0->unknown_38_;
    var6 = (int)((float)FIX32_MULTIPLY(var2.x, var8) / 4096.0f);
    var7 = (int)((float)FIX32_MULTIPLY(arg0->unknown_5b0_, var8) / 4096.0f);
    int var9 = (int)((float)FIX32_MULTIPLY(var2.y, var8) / 4096.0f);
    if (var7 - var9 > 5 || var9 - var7 > 5) {
        if (var9 < var7) {
            arg0->unknown_5b0_ -= fix32_Divide((var7 - var9 - 5) << 12, var8);
        } else {
            arg0->unknown_5b0_ += fix32_Divide((var9 - var7 - 5) << 12, var8);
        }
    }
    var7 = (int)((float)FIX32_MULTIPLY(arg0->unknown_5b0_, arg0->unknown_38_) / 4096.0f);
    arg0->unknown_44_ = var6;
    arg0->unknown_48_ = var7;
    int var10 = var7 < 0 ? var7 / 8 - 1 : var7 / 8;
    arg0->unknown_55c_ = 0;
    func_0203b718(var1, 1, 0, arg0->unknown_74_);
    for (int var11 = 0; var11 < arg0->unknown_30_; ++var11) {
        Struct_02024518_3* var12 = func_02027878((Struct_02024518_2*)arg0, arg0->unknown_2c_[var11].unknown_4_);
        if (var12) {
            int var13 = arg0->unknown_1c_ + arg0->unknown_2c_[var11].unknown_c_;
            int var14 = arg0->unknown_18_ + arg0->unknown_2c_[var11].unknown_8_;
            func_0203bcb8(reinterpret_cast<Struct_02020fc4_3*>(reinterpret_cast<unsigned char*>(var12) + 8), var14 + 16, var10 + var13 + 16);
        }
    }
    func_0202441c((Struct_0202441c*)arg0);
    for (int var15 = 0; var15 < var5; ++var15) {
        Struct_020236dc* var16 = &var3[var15];
        if (!func_020243b8(arg0, var16->unknown_14_)) {
            continue;
        }
        fix32_t var17 = arg0->unknown_38_;
        int var18 = (int)((float)FIX32_MULTIPLY(var16->unknown_0_.x, var17) / 4096.0f);
        int var19 = -((int)((float)FIX32_MULTIPLY(var16->unknown_0_.y, var17) / 4096.0f) - arg0->unknown_48_);
        if (var16->unknown_f_ >= 0) {
            int var20 = var4[var16->unknown_10_] - 1;
            var18 += data_020e70f0[var20][var16->unknown_f_][0];
            var19 -= data_020e70f4[var20][var16->unknown_f_][0];
        }
        if (arg0->unknown_5a4_ & 1) {
            if (inline_02024518(var16->unknown_e_)) {
                continue;
            }
        }
        if (!func_02024d48(var16, arg0->unknown_9c0_)) {
            continue;
        }
        func_0202756c(arg0, (var18 + 0x7c) << 12, (var19 + 0x5c) << 12,
            var16->unknown_c_, var16->unknown_e_, 0, var16->unknown_d_, 0xff, 0x1000, 0x1000);
    }
    func_02023b5c(arg0, 0, arg0->unknown_48_, 0x7c, 0x5c, 1);
    func_02023d84(arg0, var3, var5, 0, arg0->unknown_48_, 0x7c, 0x5c, 1);
}
