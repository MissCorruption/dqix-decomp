#include <globaldefs.h>

// USA: func_ov000_0215e918
extern "C" ARM void* func_ov000_0215e918(void* arg0) {
	unsigned char var0 = *((unsigned char*)arg0 + 0x8e00);
	if (var0 >= 0x48) {
		return 0;
	}
	return (char*)arg0 + 0x20 + var0 * 0x34;
}
