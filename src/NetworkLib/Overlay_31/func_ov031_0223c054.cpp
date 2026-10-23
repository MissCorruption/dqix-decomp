#include <globaldefs.h>

extern void* data_ov031_02290d34;

// USA: func_ov031_0223c054
extern "C" ARM int func_ov031_0223c054(int arg0) {
	char* var0;
	if (arg0 == 1) var0 = (char*)data_ov031_02290d34;
	else var0 = (char*)data_ov031_02290d34 + 0xc;
	return *(unsigned char*)(var0 + 9);
}
