#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov031_0220abac
extern "C" ARM void func_ov031_0220abac(void* arg0, const void* arg1, unsigned int arg2) {
	VectorizedInvertedMemcpy(arg1, arg0, arg2);
}
