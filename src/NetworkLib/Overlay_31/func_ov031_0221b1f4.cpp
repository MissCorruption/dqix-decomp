#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0221b258(unsigned char* arg0);

// USA: func_ov031_0221b1f4
extern "C" ARM int func_ov031_0221b1f4(unsigned char* arg0, unsigned char* arg1) {
	if (!func_ov031_0221b258(arg0)) {
		return 0;
	}
	unsigned int var0;
	unsigned int var1;
	VectorizedInvertedMemcpy(arg0, &var0, 4);
	VectorizedInvertedMemcpy(arg1, &var1, 4);
	return (var0 & ~var1) != 0;
}
