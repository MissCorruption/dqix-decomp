#include <globaldefs.h>

extern "C" void* func_ov031_0223c760(void*);
extern char* data_ov031_02290d38;

// USA: func_ov031_0223c7c4
extern "C" ARM void* func_ov031_0223c7c4(int arg0) {
	char* var0 = data_ov031_02290d38 + 0x610;
	return func_ov031_0223c760(var0 + arg0 * 0x30);
}
