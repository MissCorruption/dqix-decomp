#include <globaldefs.h>

#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083acc(unsigned char* arg0, int arg1);
extern "C" void func_02083e28(void* arg0, int arg1);

struct Struct_ov017_021cd1ac {
	unsigned char unknown_0_0_ : 3;
	unsigned char unknown_0_3_ : 3;
	unsigned char unknown_0_6_ : 2;
};

struct Struct_ov017_021cd1ac_2 {
    Struct_ov017_021cd1ac unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_[7];
};

struct Struct_ov017_021cd1ac_3 {
    unsigned char unknown_0_[4];
    Struct_ov017_021cd1ac_2 unknown_4_;
};

// USA: func_ov017_021cd1ac
extern "C" ARM void func_ov017_021cd1ac(int arg0, unsigned char* arg1, GameState* arg2) {
    Struct_ov017_021cd1ac_2* var0 = &((Struct_ov017_021cd1ac_3*)arg1)->unknown_4_;
    Struct_ov017_021cd1ac* var1 = &var0->unknown_0_;
	GameObject* var2 = func_0200ff1c(arg2, var1->unknown_0_0_);
	if (!var2) return;
	unsigned char* var3 = (unsigned char*)func_02053c6c((unsigned char*)var2);
	if (!var3) return;
	for (int var4 = 0; var4 < var1->unknown_0_3_; var4++) {
        unsigned short var5 = var0->unknown_2_[var4];
		func_02083acc(var3, var5);
	}
	func_02083e28(var3, 0);
}
