#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
struct Struct_02052e2c;
extern "C" short* func_02052e2c(struct Struct_02052e2c* arg0);

struct Struct_ov017_021c44d8 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    signed char unknown_10_;
};

struct Struct_ov017_021c44d8_2 {
    char unknown_0_[0x14];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

// USA: func_ov017_021c44d8
extern "C" ARM void func_ov017_021c44d8(int arg0, struct Struct_ov017_021c44d8* arg1, GameState* arg2, int arg3, struct Struct_0202c1a4* arg4) {
    if (arg1->unknown_10_ >= 0) {
        signed char var0 = func_0202c1a4(arg4);
        if (arg1->unknown_10_ != var0) return;
    }
    unsigned char var1 = arg1->unknown_4_;
    signed char var2 = func_0202c1a4(arg4);
    if (var1 == var2) return;

    GameObject* var3 = func_0200ff1c(arg2, var1);
    if (!var3) return;

    struct Struct_ov017_021c44d8_2* var4 = (struct Struct_ov017_021c44d8_2*)func_02052e2c((struct Struct_02052e2c*)var3);
    if (!var4) return;

    var4->unknown_15_0_ = arg1->unknown_5_;
    var4->unknown_14_4_ = arg1->unknown_6_;
    var4->unknown_14_1_ = arg1->unknown_7_;
    var4->unknown_14_0_ = arg1->unknown_8_;
    var4->unknown_16_ = arg1->unknown_a_;
    var4->unknown_18_ = arg1->unknown_c_;
    var4->unknown_1a_ = arg1->unknown_e_;
}
