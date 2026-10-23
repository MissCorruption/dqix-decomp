#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_02211aec(void);
extern "C" int func_ov031_0223f264(void*, void*, int);

// USA: func_ov031_02212c3c
extern "C" ARM int func_ov031_02212c3c(void* arg0, void* arg1, int arg2) {
	if (func_ov031_02211aec()) return 0;
	VectorizedMemset(arg0, 0, arg2 * 0xb0);
	return func_ov031_0223f264(arg0, arg1, arg2);
}
