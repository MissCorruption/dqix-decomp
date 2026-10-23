#include <globaldefs.h>

extern char* data_ov031_02290d9c;

// USA: func_ov031_0223e330
extern "C" ARM void func_ov031_0223e330(int arg0, unsigned char arg1) {
	*(unsigned char*)(data_ov031_02290d9c + (arg0 << 0x6) + 0x38) = arg1;
}
