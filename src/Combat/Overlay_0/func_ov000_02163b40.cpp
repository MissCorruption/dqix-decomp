#include <globaldefs.h>

extern "C" int func_020a1fa8(void);
extern "C" int func_ov026_021dbe44(void* arg0);

// USA: func_ov000_02163b40
extern "C" ARM int func_ov000_02163b40(void* arg0) {
	int var0 = func_020a1fa8();
	if (var0 != 3) {
		return var0;
	}
	return func_ov026_021dbe44(arg0);
}
