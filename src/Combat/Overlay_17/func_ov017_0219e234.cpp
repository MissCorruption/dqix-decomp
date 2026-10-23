#include <globaldefs.h>
#include "GameState/GameState.h"
struct Struct_ov017_0219d250_5;
struct Struct_ov017_0219d250_6;
struct Struct_ov017_0219d250_7;

extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a289c(void);
typedef void (*Type_ov017_0219e234)(void*, int);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);

struct Struct_ov017_0219e234 {
	unsigned char unknown_0_0_ : 4;
	unsigned char unknown_0_4_ : 3;
	unsigned char unknown_0_7_ : 1;
};

// USA: func_ov017_0219e234
extern "C" ARM void func_ov017_0219e234(Struct_ov017_0219d250_5* arg0, Struct_ov017_0219d250_7* arg1, Struct_ov017_0219d250_6* arg2, void* arg3) {
	GameState* var0 = GameState::GetInstance();
	int var1 = func_020100f8((char*)var0);
	if (!var1) return;
	struct Struct_ov017_0219e234* var2 = (struct Struct_ov017_0219e234*)((char*)arg3 + 0xc);
	if (var2->unknown_0_0_ == 0 || var2->unknown_0_7_ == 0) {
		func_020a28a0((unsigned char*)var1, 0x10);
		((Type_ov017_0219e234)&func_020a289c)((void*)var1, 2);
		return;
	}
	func_020a28b0((unsigned char*)var1, 0x10);
}
