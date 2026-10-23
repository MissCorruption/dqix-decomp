#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(int arg0);
extern "C" void func_ov017_0219b578(int arg0, int arg1, int arg2);

// USA: func_ov001_02160a48
extern "C" ARM int func_ov001_02160a48(int arg0) {
	int var0 = func_ov017_021d60f4(arg0);
	int var1 = func_ov017_021d60f4(arg0 + 0x8);
	func_ov017_0219b578((int)GetGameResources(), var0, var1);
	return 1;
}
