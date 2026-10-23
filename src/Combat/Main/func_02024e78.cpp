#include <globaldefs.h>

#include "Combat/ActionDisplay.h"
#include "GameState/GameState.h"
#include "NitroSDK/Memory.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_02024e78_2496 = 0x914 };
#else
enum { Enum_02024e78_2496 = 0x9c0 };
#endif

struct Struct_02024e78 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_02024e78_2 {
    unsigned char unknown_0_[0x18];
    int unknown_18_;
    int unknown_1c_;
    unsigned char unknown_20_[0xc];
    Struct_02024e78 *unknown_2c_;
    int unknown_30_;
    unsigned char unknown_34_[4];
    fix32_t unknown_38_;
    unsigned char unknown_3c_[8];
    int unknown_44_;
    int unknown_48_;
    unsigned char unknown_4c_[0x510];
    unsigned char unknown_55c_;
    unsigned char unknown_55d_[0x47];
    int unknown_5a4_;
    unsigned char unknown_5a8_[Enum_02024e78_2496 - 0x5a8];
    unsigned char unknown_9c0_;
};

struct Struct_02024518_2;
struct Struct_02024518_3;
struct Struct_02020fc4_3;
struct Struct_0202441c;
struct Struct_02024d48;

extern "C" void *func_0203b628();
extern "C" void *func_02012fe4();
extern "C" void func_0203b718(void *arg0, int arg1, int arg2, int arg3);
extern "C" Struct_02024518_3 *func_02027878(Struct_02024518_2 *arg0, int arg1);
extern "C" void func_0203bcb8(Struct_02020fc4_3 *arg0, int arg1, int arg2);
extern "C" void func_0202441c(Struct_0202441c *arg0);
extern "C" int func_020243b8(void *arg0, int arg1);
extern "C" int func_02024d48(Struct_020236dc* arg0, int arg1);
extern "C" void func_0202756c(void *arg0, int arg1, int arg2, int arg3, unsigned char arg4, unsigned char arg5,
                              unsigned short arg6, unsigned char arg7, int arg8, int arg9);

// USA: func_02024e78
extern "C" ARM void func_02024e78(void *arg0) {
    Struct_02024e78_2 *var0 = static_cast<Struct_02024e78_2 *>(arg0);
    GameObject *var1             = GameState::GetInstance()->GetUnknownGameObject();
    void *var2            = func_0203b628();
    func_02012fe4();
    Vector3i var3 = var1->obj3D_.position_;
    Struct_020236dc var4[17];
    unsigned char var5[32];
    memset(var5, 0, sizeof(var5));
    int var6     = func_020236dc(var4, var5, &var3);
    fix32_t var7 = var0->unknown_38_;
    int var8   = (int) ((float) FIX32_MULTIPLY(var3.x, var7) / 4096.0f);
    int var9   = (int) ((float) FIX32_MULTIPLY(var3.z, var7) / 4096.0f);
    var0->unknown_44_  = var8;
    var0->unknown_48_  = var9;

    if (var0->unknown_55c_) {
        var0->unknown_55c_ = 0;
        func_0203b718(var2, 1, 0, 0);
        for (int var10 = 0; var10 < var0->unknown_30_; var10++) {
            Struct_02024518_3 *var11 = func_02027878(static_cast<Struct_02024518_2 *>(arg0), var0->unknown_2c_[var10].unknown_4_);
            if (var11) {
                func_0203bcb8(reinterpret_cast<Struct_02020fc4_3 *>((char *) var11 + 8), var0->unknown_2c_[var10].unknown_8_,
                                    var0->unknown_2c_[var10].unknown_c_);
            }
        }
    }
    func_0202441c(static_cast<Struct_0202441c *>(arg0));
    for (int var12 = 0; var12 < var6; var12++) {
        Struct_020236dc *var13 = &var4[var12];
        if (!func_020243b8(arg0, var13->unknown_14_)) continue;
        fix32_t var14 = var0->unknown_38_;
        int var15         = (int) ((float) FIX32_MULTIPLY(var13->unknown_0_.x, var14) / 4096.0f) - (var0->unknown_18_ << 3);
        int var16         = (int) ((float) FIX32_MULTIPLY(var13->unknown_0_.z, var14) / 4096.0f) - (var0->unknown_1c_ << 3);
        if (var13->unknown_f_ >= 0) {
            int var17 = var5[var13->unknown_10_] - 1;
            var15 += data_020e70f0[var17][var13->unknown_f_][0];
            var16 += data_020e70f4[var17][var13->unknown_f_][0];
        }
        if (var0->unknown_5a4_ & 1) {
            if (inline_02024518(var13->unknown_e_)) continue;
        }
        if (!func_02024d48(var13, var0->unknown_9c0_)) continue;
        func_0202756c(arg0, (var15 - 4) << 12, (var16 - 4) << 12, var13->unknown_c_, var13->unknown_e_, 0, var13->unknown_d_,
                                 0xff, 0x1000, 0x1000);
    }
    func_02023b5c(arg0, var0->unknown_18_ << 3, var0->unknown_1c_ << 3, -4, -4, 0);
    func_02023d84(arg0, var4, var6, var0->unknown_18_ << 3, var0->unknown_1c_ << 3, -4, -4, 0);
}

struct Struct_020251bc {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_020251bc_2 {
    unsigned char unknown_0_[0x18];
    int unknown_18_;
    int unknown_1c_;
    unsigned char unknown_20_[0xc];
    Struct_020251bc *unknown_2c_;
    int unknown_30_;
    unsigned char unknown_34_[4];
    fix32_t unknown_38_;
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    unsigned char unknown_4c_[0x74 - 0x4c];
    int unknown_74_;
    unsigned char unknown_78_[0x55c - 0x78];
    unsigned char unknown_55c_;
    unsigned char unknown_55d_[0x5a4 - 0x55d];
    int unknown_5a4_;
    unsigned char unknown_5a8_[Enum_02024e78_2496 - 0x5a8];
    unsigned char unknown_9c0_;
};

// USA: func_020251bc
extern "C" ARM void func_020251bc(void *arg0) {
    Struct_020251bc_2 *var0 = static_cast<Struct_020251bc_2 *>(arg0);
    GameObject *var1                  = GameState::GetInstance()->GetUnknownGameObject();
    void *var2                  = func_0203b628();
    func_02012fe4();
    Vector3fix var3 = var1->obj3D_.position_;
    Struct_020236dc var4[17];
    unsigned char var5[32];
    memset(var5, 0, sizeof(var5));
    int var6 = func_020236dc(var4, var5, &var3);

    fix32_t var7  = var0->unknown_38_;
    int var8    = (int) ((float) FIX32_MULTIPLY(var3.x, var7) / 4096.0f);
    int var9    = (int) ((float) FIX32_MULTIPLY(var3.z, var7) / 4096.0f);
    var0->unknown_44_ = var8;
    int var10      = var8 < 0 ? var8 / 8 - 1 : var8 / 8;
    var0->unknown_48_ = var9;
    int var11      = var9 < 0 ? var9 / 8 - 1 : var9 / 8;
    if (var0->unknown_40_ != var11) var0->unknown_55c_ = 1;
    var0->unknown_3c_ = var10;
    var0->unknown_40_ = var11;

    if (var0->unknown_55c_) {
        var0->unknown_55c_ = 0;
        func_0203b718(var2, 1, 0, var0->unknown_74_);
        for (int var12 = 0; var12 < var0->unknown_30_; var12++) {
            Struct_02024518_3 *var13 =
                func_02027878(reinterpret_cast<Struct_02024518_2 *>(arg0), var0->unknown_2c_[var12].unknown_4_);
            if (var13) {
                func_0203bcb8(reinterpret_cast<Struct_02020fc4_3 *>(reinterpret_cast<unsigned char *>(var13) + 8),
                                    var0->unknown_2c_[var12].unknown_8_, var0->unknown_1c_ + var0->unknown_2c_[var12].unknown_c_ - var11 + 16);
            }
        }
    }
    func_0202441c(reinterpret_cast<Struct_0202441c *>(arg0));
    for (int var14 = 0; var14 < var6; var14++) {
        Struct_020236dc *var15 = &var4[var14];
        if (!func_020243b8(arg0, var15->unknown_14_)) continue;
        fix32_t var16 = var0->unknown_38_;
        int var17               = (int) ((float) FIX32_MULTIPLY(var15->unknown_0_.x, var16) / 4096.0f) - var0->unknown_18_ * 8;
        int var18               = (int) ((float) FIX32_MULTIPLY(var15->unknown_0_.z, var16) / 4096.0f) - var0->unknown_48_;
        if (var15->unknown_f_ >= 0) {
            int var19 = var5[var15->unknown_10_] - 1;
            var17 += data_020e70f0[var19][var15->unknown_f_][0];
            var18 += data_020e70f4[var19][var15->unknown_f_][0];
        }
        if (var0->unknown_5a4_ & 1) {
            if (inline_02024518(var15->unknown_e_)) continue;
        }
        if (!func_02024d48(var15, var0->unknown_9c0_)) continue;
        func_0202756c(arg0, (var17 - 4) * 0x1000, (var18 + 0x5c) * 0x1000, var15->unknown_c_, var15->unknown_e_, 0,
                                 var15->unknown_d_, 0xff, 0x1000, 0x1000);
    }
    func_02023b5c(arg0, var0->unknown_18_ * 8, var0->unknown_48_, -4, 0x5c, 0);
    func_02023d84(arg0, var4, var6, var0->unknown_18_ * 8, var0->unknown_48_, -4, 0x5c, 0);
}
