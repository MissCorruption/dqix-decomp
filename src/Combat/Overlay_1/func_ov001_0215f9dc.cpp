#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(int arg0);
extern "C" void func_ov017_021bbbec(void* arg0, unsigned short arg1);

// USA: func_ov001_0215f9dc
extern "C" ARM int func_ov001_0215f9dc(int arg0) {
#if defined(jpn)
    enum { Enum_ov001_0215f9dc_1844 = 0x524 };
#else
    enum { Enum_ov001_0215f9dc_1844 = 0x734 };
#endif
	void* var0 = *(void**)((char*)GetGameResources() + 0x3000 + Enum_ov001_0215f9dc_1844);
	func_ov017_021bbbec(var0, (unsigned short)func_ov017_021d60f4(arg0));
	return 1;
}
