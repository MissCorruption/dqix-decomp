#include <globaldefs.h>
#include "Resource/Brightness.h"
#if defined(jpn)
enum { Enum_ov003_02170d38_17556 = 0x41e4 };
#else
enum { Enum_ov003_02170d38_17556 = 0x4494 };
#endif

extern "C" void func_0202ae18();
extern "C" void func_0202b0f4();
extern "C" void func_ov017_0219bd1c(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov003_02170d38
extern "C" ARM void func_ov003_02170d38(char*) {
	func_0202ae18();
	func_0202b0f4();
	*(int*)((char*)GetGameResources() + Enum_ov003_02170d38_17556) = 0;
	GameResources* var0 = GetGameResources();
	ClearFlags04(var0, 2);
	ClearFlags00(var0, 4);
	func_ov017_0219bd1c(1, 0, 0, 0);
}
