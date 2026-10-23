#include <globaldefs.h>

extern void* data_ov031_02290d14;
extern "C" void func_ov031_0223932c(void* arg0);

// USA: func_ov031_02238694
extern "C" ARM void func_ov031_02238694(void* arg0) {
	data_ov031_02290d14 = arg0;
	func_ov031_0223932c((char*)arg0 + 0x1b160);
	*(int*)((char*)data_ov031_02290d14 + 0x1b140) = 0;
	*(int*)((char*)data_ov031_02290d14 + 0x1b144) = 0;
}
