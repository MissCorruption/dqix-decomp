#include <globaldefs.h>

// USA: func_ov000_0215e9b8
extern "C" ARM void* func_ov000_0215e9b8(void* arg0) {
	unsigned char var0 = *((unsigned char*)arg0 + 0x8e03);
	if (var0 >= 0xfc) {
		return 0;
	}
	return (char*)arg0 + 0x5480 + var0 * 8;
}
