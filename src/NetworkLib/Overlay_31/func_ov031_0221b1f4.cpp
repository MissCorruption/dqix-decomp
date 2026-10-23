#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0221b258(unsigned char* p);

// USA: func_ov031_0221b1f4
extern "C" ARM int func_ov031_0221b1f4(unsigned char* a, unsigned char* b) {
	if (!func_ov031_0221b258(a)) {
		return 0;
	}
	unsigned int va;
	unsigned int vb;
	VectorizedInvertedMemcpy(a, &va, 4);
	VectorizedInvertedMemcpy(b, &vb, 4);
	return (va & ~vb) != 0;
}
