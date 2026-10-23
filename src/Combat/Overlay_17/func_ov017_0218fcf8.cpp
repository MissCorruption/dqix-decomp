#include <globaldefs.h>

extern "C" int func_ov017_02191fec(int arg0, int arg1, int arg2);
extern "C" int func_ov017_0218fd34(int arg0, int arg1, int arg2);

// USA: func_ov017_0218fcf8
extern "C" ARM int func_ov017_0218fcf8(int arg0, int arg1, int arg2) {
	int var0 = func_ov017_02191fec(arg0, arg1, arg2) != 0;
	if (!var0) {
		return var0;
	}
	return func_ov017_0218fd34(arg0, arg1, arg2);
}
