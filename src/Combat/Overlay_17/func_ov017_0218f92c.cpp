#include <globaldefs.h>

extern "C" int func_ov017_02191fec(int arg0, int arg1, int arg2);
extern "C" int func_ov017_0218f968(int arg0, int arg1, int arg2);

// USA: func_ov017_0218f92c
extern "C" ARM int func_ov017_0218f92c(int arg0, int arg1, int arg2) {
	int var0 = func_ov017_02191fec(arg0, arg1, arg2) != 0;
	if (!var0) {
		return var0;
	}
	return func_ov017_0218f968(arg0, arg1, arg2);
}
