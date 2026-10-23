#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov017_021ce3ac_722 = 0x2c6 };
#else
enum { Enum_ov017_021ce3ac_722 = 0x2d2 };
#endif

extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" void func_020546a0(void*, int);
extern "C" void func_020546b4(void*, int);
extern "C" void func_02039858(unsigned char*, int);
extern "C" void func_0203986c(unsigned char*, int);

struct Struct_ov017_021ce3ac {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
    signed char unknown_6_;
    signed char unknown_7_;
    signed char unknown_8_;
    signed char unknown_9_;
    unsigned char unknown_a_;
};

// USA: func_ov017_021ce3ac
extern "C" ARM void func_ov017_021ce3ac(int arg0, Struct_ov017_021ce3ac* arg1, GameState* arg2) {
    GameObject* var0 = func_0200ff58(arg2, arg1->unknown_4_);
    if (var0 == NULL) {
        return;
    }
    func_020546a0(var0, arg1->unknown_6_);
    func_020546b4(var0, arg1->unknown_7_);
    func_02039858((unsigned char*)var0, arg1->unknown_8_);
    func_0203986c((unsigned char*)var0, arg1->unknown_9_);
    *((unsigned char*)var0 + Enum_ov017_021ce3ac_722) = arg1->unknown_a_;
}
