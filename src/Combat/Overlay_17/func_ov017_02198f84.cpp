#include <globaldefs.h>
#include "World/ZoneChest.h"
#include "GameState/GameState.h"
#include "NitroSDK/Matrix.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov017_02198f84 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_[0xb - 0x3];
    signed char unknown_b_;
    unsigned char unknown_c_[0x10 - 0x0c];
    Vector3i unknown_10_;
    short unknown_1c_;
    unsigned char unknown_1e_[0x3c - 0x1e];
    Vector3i unknown_3c_;
    Vector3i unknown_48_;
    Vector3i unknown_54_;
};

struct Struct_ov017_02198f84_2 {
    unsigned char unknown_0_[0x1c];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned char unknown_20_[0x28 - 0x20];
    short unknown_28_;
    unsigned char unknown_2a_[0x34 - 0x2a];
};

struct Struct_ov017_02198f84_3 {
#if defined(jpn)
    unsigned char unknown_0_[0x34a8];
#else
    unsigned char unknown1_0_[0x36b8];
#endif
    unsigned char unknown_36b8_;
    unsigned char unknown_36b9_[3];
    Struct_020134e0::Struct_02018300* unknown_36bc_[0x10];
    struct Struct_0201bdac_2* unknown_36fc_;
#if defined(jpn)
    unsigned char unknown_34f0_[0x38f0 - 0x34f0];
#else
    unsigned char unknown_3700_[0x3b10 - 0x3700];
#endif
    struct Struct_ov017_021ab250* unknown_3b10_;
    unsigned char unknown_3b14_[0x42ec - 0x3b14];
    unsigned short unknown_42ec_;
};

extern "C" void* func_02012fe4(void);
extern "C" void* func_0205ec34(void);
extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);
extern "C" void func_ov017_021ab250(struct Struct_ov017_021ab250* arg0);
extern "C" Struct_ov017_02198f84* func_0200fd0c(GameState* arg0);
extern "C" void func_ov017_021ab698(char* arg0, int arg1);
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

// USA: func_ov017_02198f84
extern "C" ARM void func_ov017_02198f84(Struct_ov017_02198f84_3* arg0) {
    Zone3D* var0 = (Zone3D*)func_02012fe4();
    for (int var1 = 0; var1 < arg0->unknown_36b8_; var1++) {
        Struct_020134e0::Struct_02018300* var2 = arg0->unknown_36bc_[var1];
        if (var2 == NULL) {
            continue;
        }
        int var3 = 0;
        void* var4 = func_0205ec34();
        Struct_ov017_02198f84_2 var5;
        var5.unknown_28_ = var2->unknown_20_;
        var5.unknown_1e_ = var2->unknown_2c_.unknown1_0_.unknown_1_;
        var5.unknown_1c_ = var2->unknown_2c_.unknown1_0_.unknown_0_;
        if (func_020649b0(var4, 0x11, &var5)) {
            func_0206f81c(&var5);
        }
        if (!(var2->unknown_2c_.unknown1_0_.unknown_2_4_ & 4)) {
            func_02018300(var0, var2, 1, 1, 1);
            if ((var2->unknown_2c_.unknown1_0_.unknown_2_4_ & 8) && var2->unknown_2c_.unknown1_0_.unknown_4_ != 0) {
                func_ov017_021ab250(arg0->unknown_3b10_);
                Struct_ov017_02198f84* var6 = func_0200fd0c(GameState::GetInstance());
                if (var6->unknown_2_ != 0) {
                    var2->unknown_2c_.unknown1_0_.unknown_4_ = var6->unknown_0_;
                    var2->unknown_2c_.unknown1_0_.unknown_c_[0] = var6->unknown_10_;
                    var2->unknown_2c_.unknown1_0_.unknown_3c_ = var6->unknown_1c_;
                    var2->unknown_2c_.unknown1_0_.unknown_3e_ = var6->unknown_b_;
                    var2->unknown_2c_.unknown1_0_.unknown_c_[1] = var6->unknown_3c_;
                    var2->unknown_2c_.unknown1_0_.unknown_c_[2] = var6->unknown_48_;
                    var2->unknown_2c_.unknown1_0_.unknown_c_[3] = var6->unknown_54_;
                    var6->unknown_2_ = 0;
                }
                func_ov017_021ab698((char*)arg0->unknown_3b10_, (int)var2);
                func_020469b4(arg0->unknown_36fc_, (struct Struct_0201bdac*)arg0->unknown_3b10_);
            } else if (!(var2->unknown_2c_.unknown1_0_.unknown_2_4_ & 8)) {
                var3 = 1;
            }
        } else {
            arg0->unknown_42ec_ = 0;
            var2->unknown_2c_.unknown1_0_.unknown_2_4_ &= ~4;
        }
        if (var3) {
            arg0->unknown_42ec_ = 0;
        }
    }
}
