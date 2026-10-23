#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
struct Struct_02053f7c_3;
extern "C" void func_02053f7c(struct Struct_02053f7c_3* arg0, unsigned short arg1, int arg2);
extern "C" void func_ov017_021c6034(signed char* arg0);

struct Struct_0207dcf0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[4];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    short unknown_a_;
};

struct Struct_ov017_021c60a4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[4];
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    short unknown_e_;
    unsigned char unknown_10_[2];
};

// USA: func_ov017_021c60a4
extern "C" ARM void func_ov017_021c60a4(struct Struct_0207dcf0* arg0) {
    void* var0 = func_0202ae24();

    struct Struct_ov017_021c60a4 var1;
    var1.unknown_0_ = 0x65;
    var1.unknown_4_ = arg0->unknown_0_;
    int var2 = 4;
    unsigned char* var3 = var1.unknown_8_;
    unsigned char* var4 = arg0->unknown_4_;
    var1.unknown_6_ = arg0->unknown_2_;
    do {
        *var3 = *var4;
        var3++;
        var4++;
    } while (--var2);
    var1.unknown_c_ = arg0->unknown_8_;
    var1.unknown_d_ = arg0->unknown_9_;
    var1.unknown_e_ = arg0->unknown_a_;
    func_0205e330(var0, &var1, 0);

    GameState* var5 = GameState::GetInstance();
    for (unsigned int var6 = 0; var6 < 4; var6++) {
        if ((signed char)arg0->unknown_4_[var6] == 0) continue;
        GameObject* var7 = func_0200ff1c(var5, var6);
        if (var7 == NULL) continue;
        func_02053f7c((struct Struct_02053f7c_3*)var7, arg0->unknown_0_, 1);
    }

    func_ov017_021c6034((signed char*)var1.unknown_8_);
}
