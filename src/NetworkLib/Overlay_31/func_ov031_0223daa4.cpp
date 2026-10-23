#include <globaldefs.h>

extern char* data_ov031_02290d60;

// USA: func_ov031_0223daa4
extern "C" ARM void* func_ov031_0223daa4(int arg0, int arg1) {
	return data_ov031_02290d60 + (arg0 << 0xa) + (arg1 << 0x3);
}
