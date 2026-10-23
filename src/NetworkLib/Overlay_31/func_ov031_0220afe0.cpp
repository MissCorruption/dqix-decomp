#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov031_0220afe0
extern "C" ARM void func_ov031_0220afe0(void* arg0) {
	VectorizedMemset(arg0, 0, 0x58);
	unsigned int* var0 = (unsigned int*)arg0;
	var0[0] = 0x67452301;
	var0[1] = 0xefcdab89;
	var0[2] = 0x98badcfe;
	var0[3] = 0x10325476;
}
