#include <globaldefs.h>

extern "C" int func_020a1fa8(void);
extern "C" int func_ov026_021dbf04(void* arg0);

// USA: func_ov000_02163d94
extern "C" ARM int func_ov000_02163d94(void* arg0) {
	int var0 = func_020a1fa8();
	if (var0 != 3) {
		return var0;
	}
	return func_ov026_021dbf04(arg0);
}
