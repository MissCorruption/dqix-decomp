#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);

struct Struct_ov017_021ce494 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[0x13];
};

// USA: func_ov017_021ce494
extern "C" ARM void func_ov017_021ce494(void) {
	void* var0 = func_0202ae18();
	if (func_0202c508(var0) != 0) {
		return;
	}
	if (GameState::GetInstance()->GetPartyMemberByIndex(0xce) != NULL) {
		return;
	}
	Struct_ov017_021ce494 var1;
	void* var2 = func_0202ae24();
	var1.unknown_0_ = 0x28;
	func_0205e330(var2, &var1, 0);
}
