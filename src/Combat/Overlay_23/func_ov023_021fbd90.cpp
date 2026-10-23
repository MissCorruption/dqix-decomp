#include <globaldefs.h>

extern "C" void func_ov023_021dc488(void*);

// USA: func_ov023_021fbd90
extern "C" ARM void func_ov023_021fbd90(void* arg0) {
	func_ov023_021dc488((char*)arg0 + 0x20);
	*(int*)((char*)arg0 + 0x1c) = 2;
}
