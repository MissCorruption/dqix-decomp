#include <globaldefs.h>

// USA: func_ov000_02161bec
extern "C" ARM void func_ov000_02161bec(unsigned char* arg0) {
	int var0 = *arg0;
	var0 = var0 + 1;
	*arg0 = var0;
	if ((unsigned)(var0 & 0xff) >= 0x12) {
		*arg0 = 1;
	}
}
