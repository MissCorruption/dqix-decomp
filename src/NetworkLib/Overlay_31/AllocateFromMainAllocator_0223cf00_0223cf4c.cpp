#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" ARM void* func_ov031_0223cf00(unsigned int arg0, int arg1);

// USA: func_ov031_0223cf4c
extern "C" ARM void* func_ov031_0223cf4c(unsigned int arg0, int arg1) {
	void* var0 = func_ov031_0223cf00(arg0, arg1);
	VectorizedMemset(var0, 0, arg0);
	return var0;
}
