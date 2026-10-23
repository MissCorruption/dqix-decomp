#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_02070b6c_3;
struct Struct_ov024_021e16a4_4 { char unknown_0_[2]; unsigned char unknown_2_; };
extern "C" struct Struct_ov024_021e16a4_4* func_02070fd0(struct Struct_02070b6c_3* arg0, int arg1);
extern "C" GameObject* func_ov000_021536f8(int arg0, int arg1);
extern "C" void* func_ov000_0215e958(void* arg0);
extern "C" void func_ov000_0215cd44(void* arg0, void* arg1, void* arg2, int arg3, int arg4, int arg5, int arg6);

struct Struct_ov024_021e16a4_5 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_ov024_021e16a4_6 { char unknown_0_[0x24]; struct Struct_ov024_021e16a4_5 unknown_24_; };

struct Struct_ov024_021e16a4_7 {
    unsigned short unknown_0_;
    char unknown_2_[0x14];
    unsigned char unknown_16_;
    char unknown_17_;
};
struct Struct_ov024_021e16a4_8 { char unknown_0_[0x24]; unsigned char unknown_24_; unsigned char unknown_25_; };
struct Struct_ov024_021e16a4_9 {
    char unknown_0_[0x81b4];
    struct Struct_ov024_021e16a4_7 unknown_81b4_[3];
    char unknown_81fc_[0x8e18 - 0x81fc];
    struct Struct_ov024_021e16a4_8* unknown_8e18_;
};
struct Struct_ov024_021e16a4 { char unknown_0_[0x1c]; unsigned short unknown_1c_; };
struct Struct_ov024_021e16a4_2 { unsigned char unknown_0_0_ : 7; unsigned char unknown_0_7_ : 1; };
struct Struct_ov024_021e16a4_3 {
    char unknown_0_[4];
    struct Struct_ov024_021e16a4* unknown_4_;
    char unknown_8_[4];
    void* unknown_c_;
    struct Struct_ov024_021e16a4_9* unknown_10_;
    char unknown_14_[0x6e - 0x14];
    unsigned char unknown_6e_;
};

// USA: func_ov024_021e16a4
extern "C" ARM void* func_ov024_021e16a4(struct Struct_ov024_021e16a4_3* arg0, int arg1, int arg2, struct Struct_ov024_021e16a4_6* arg3) {
    GameObject* var0 = func_ov000_021536f8((int)arg0->unknown_10_, arg2);
    if (!var0) return 0;
    if (arg0->unknown_6e_ == 0) {
        int var1 = *((unsigned char*)var0 + 0x17c);
        if (var1 >= 3) return 0;
        struct Struct_ov024_021e16a4_7* var2 = &arg0->unknown_10_->unknown_81b4_[var1];
        struct Struct_ov024_021e16a4_4* var3 = func_02070fd0(
            (struct Struct_02070b6c_3*)((char*)arg0->unknown_10_->unknown_8e18_ + 0x684), var2->unknown_0_);
        if (var2->unknown_16_ != 0 || (var3 != 0 && var3->unknown_2_ == 7)) {
            arg0->unknown_4_->unknown_1c_ = arg3->unknown_24_.unknown_2_4_;
            arg0->unknown_6e_ = 1;
        } else {
            int var4 = 100;
            struct Struct_ov024_021e16a4_8* var5 = arg0->unknown_10_->unknown_8e18_;
            if (var5 != 0 && (var5->unknown_24_ != 0 || var5->unknown_25_ != 0)) var4 = 50;
            if (NextRandomMax((struct Random*)arg0->unknown_10_, 100) < var4) {
                arg0->unknown_4_->unknown_1c_ = arg3->unknown_24_.unknown_0_0_;
                arg0->unknown_6e_ = 1;
                var2->unknown_16_ = 1;
            } else {
                arg0->unknown_4_->unknown_1c_ = arg3->unknown_24_.unknown_2_4_;
                arg0->unknown_6e_ = 1;
            }
        }
    }
    void* var6 = func_ov000_0215e958(arg0->unknown_10_);
    if (!var6) return 0;
    struct Struct_ov024_021e16a4_2* var7 = (struct Struct_ov024_021e16a4_2*)((char*)arg0->unknown_c_ + 0x1c);
    func_ov000_0215cd44(arg0->unknown_10_, var6, var0, 0, 0, 0, var7->unknown_0_7_ != 0);
    return var6;
}
