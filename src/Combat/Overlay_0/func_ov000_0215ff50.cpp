#include <globaldefs.h>

// USA: func_ov000_0215ff50
extern "C" ARM void func_ov000_0215ff50(void* arg0, short arg1, unsigned char arg2) {
	unsigned char var0 = *((unsigned char*)arg0 + 0x17);
	if (var0 >= 3) {
		return;
	}
	*(short*)((char*)arg0 + 0xe + var0 * 2) = arg1;
	var0 = *((unsigned char*)arg0 + 0x17);
	*((unsigned char*)arg0 + 0x14 + var0) = arg2;
	var0 = *((unsigned char*)arg0 + 0x17);
	var0 = var0 + 1;
	*((unsigned char*)arg0 + 0x17) = var0;
}
