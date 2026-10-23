#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned char func_020100b0(GameState* arg0);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cc1f8 {
	unsigned char unknown_0_;
	char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_[4];
	unsigned char unknown_a_;
	char unknown_b_[9];
};

// USA: func_ov017_021cc1f8
extern "C" ARM void func_ov017_021cc1f8(int arg0, const char* arg1, int arg2, int arg3) {
	GameState* var0 = GameState::GetInstance();
	if (arg0 == func_020100b0(var0)) {
		void* var1 = func_0202ae24();
		struct Struct_ov017_021cc1f8 var2;
		var2.unknown_0_ = 5;
		var2.unknown_4_ = (unsigned char)arg0;
		int var3;
		for (var3 = 0; var3 < arg2; var3++) {
			var2.unknown_6_[var3] = arg1[var3];
		}
		var2.unknown_5_ = (unsigned char)arg2;
		var2.unknown_a_ = (unsigned char)arg3;
		func_0205e330(var1, &var2, 0);
	}
}
