#include <globaldefs.h>

#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_02083b60(unsigned char* arg0, int arg1);

struct Struct_ov017_021ccf70 {
	unsigned char unknown_0_0_ : 3;
	unsigned char unknown_0_3_ : 4;
	unsigned char unknown_0_7_ : 1;
};

struct Struct_ov017_021ccf70_2 {
    Struct_ov017_021ccf70 unknown_0_;
    unsigned char unknown_1_[15];
};

struct Struct_ov017_021ccf70_3 {
    unsigned char unknown_0_[4];
    Struct_ov017_021ccf70_2 unknown_4_;
};

// USA: func_ov017_021ccf70
extern "C" ARM void func_ov017_021ccf70(int arg0, unsigned char* arg1, GameState* arg2) {
    Struct_ov017_021ccf70_2* var0 = &((Struct_ov017_021ccf70_3*)arg1)->unknown_4_;
    Struct_ov017_021ccf70* var1 = &var0->unknown_0_;
	GameObject* var2 = func_0200ff1c(arg2, var1->unknown_0_0_);
	if (!var2) return;

	unsigned char* var3 = (unsigned char*)func_02053c6c((unsigned char*)var2);
	if (!var3) return;

	for (int var4 = 0; var4 < var1->unknown_0_3_; var4++) {
        func_02083b60(var3, var0->unknown_1_[var4]);
	}
}
