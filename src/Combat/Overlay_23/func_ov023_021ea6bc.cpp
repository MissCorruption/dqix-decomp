#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
struct Struct_ov023_021ea6bc { char unknown_0_[0x144]; unsigned char *unknown_150_; };
#else
struct Struct_ov023_021ea6bc { char unknown_0_[0x150]; unsigned char *unknown_150_; };
#endif

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov023_021e8f28(int);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea6bc
extern "C" ARM int func_ov023_021ea6bc(void *arg0) {
	GameState::GetInstance();
	struct Struct_ov023_021ea6bc *var0 = (struct Struct_ov023_021ea6bc*)func_ov023_021e8f28(func_ov017_021d60f4(arg0));
	if (!var0) return 0;
	int var1 = 0;
	for (int var2 = 0; var2 < 13; var2++) {
		unsigned char *var3 = var0->unknown_150_ + (var2 & 0xff);
		var1 += var3[0x186];
	}
	func_ov017_021d6134((char*)arg0 + 8, var1);
	return 1;
}
