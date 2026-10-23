#include <globaldefs.h>

extern "C" unsigned int func_ov031_02206f3c();

// USA: func_ov031_02207500
extern "C" ARM unsigned int func_ov031_02207500() {
	unsigned int var0 = func_ov031_02206f3c();
	return ((var0 >> 24) & 0xff) | ((var0 >> 8) & 0xff00) | ((var0 << 8) & 0xff0000) | ((var0 << 24) & 0xff000000);
}
