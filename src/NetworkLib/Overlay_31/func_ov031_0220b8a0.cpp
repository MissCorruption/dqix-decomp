#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov031_0220b8a0
extern "C" ARM void func_ov031_0220b8a0(unsigned int* arg0) {
	VectorizedMemset(arg0, 0, 0x5c);
	arg0[0] = 0x67452301;
	arg0[1] = 0xefcdab89;
	arg0[2] = 0x98badcfe;
	arg0[3] = 0x10325476;
	arg0[4] = 0xc3d2e1f0;
}
