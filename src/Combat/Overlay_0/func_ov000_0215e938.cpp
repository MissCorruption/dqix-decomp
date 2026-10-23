#include <globaldefs.h>

// USA: func_ov000_0215e938
extern "C" ARM void* func_ov000_0215e938(void* arg0) {
	unsigned char var0 = *((unsigned char*)arg0 + 0x8e01);
	if (var0 >= 0x88) {
		return 0;
	}
	return (char*)arg0 + 0xec0 + var0 * 0x24;
}
