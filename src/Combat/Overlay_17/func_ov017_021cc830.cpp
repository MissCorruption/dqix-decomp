#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083ca0(unsigned char* arg0, int arg1);
extern "C" int func_020100a8(GameState* arg0);
extern "C" void func_020897b4(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" void func_020e3b8c(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, unsigned char arg7);

struct Struct_ov017_021cc830 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned short unknown_4_0_ : 3;
    unsigned short unknown_4_3_ : 8;
    unsigned short unknown_5_3_ : 4;
    unsigned short unknown_5_7_ : 1;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
};

// USA: func_ov017_021cc830
extern "C" ARM void func_ov017_021cc830(void* arg0, struct Struct_ov017_021cc830* arg1, GameState* arg2, char* arg3) {
    GameObject* var0 = func_0200ff1c(arg2, arg1->unknown_4_0_);
    if (var0 == NULL) return;
    unsigned char* var1 = (unsigned char*)func_02053c6c((unsigned char*)var0);
    if (var1 == NULL) return;

    int var2 = arg1->unknown_5_3_;
    func_02083ca0(var1, var2);
    *(unsigned short*)(var1 + var2 * 2 + 0x16c) = arg1->unknown_4_3_;
    *(var1 + var2 + 0x186) = arg1->unknown_c_;

    if (arg1->unknown_5_7_) {
        if (arg1->unknown_d_ != 0) {
            unsigned short var3 = *(unsigned short*)(var1 + 0x564);
            func_020897b4(arg1->unknown_4_0_, arg1->unknown_4_3_, var2, 0, arg1->unknown_e_, 0, 0, 0, 0);
            if (func_020100a8(arg2) == arg1->unknown_4_0_) {
                *(unsigned short*)(var1 + 0x564) = var3;
            }
        } else {
            int var4 = 0;
            var4 |= 3;
            if (arg1->unknown_e_ == 0) var4 |= 4;
            func_020e3b8c(arg3, arg1->unknown_4_0_, arg1->unknown_4_3_, var2, 0, var4, arg1->unknown_8_, arg1->unknown_e_);
            return;
        }
    }
    *(unsigned int*)(var1 + var2 * 4 + 0x138) = arg1->unknown_8_;
}
