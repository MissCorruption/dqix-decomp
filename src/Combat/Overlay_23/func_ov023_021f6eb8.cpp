#include <globaldefs.h>

extern "C" void func_ov023_021f6788(void* arg0);

// USA: func_ov023_021f6eb8
extern "C" ARM void func_ov023_021f6eb8(void* arg0, int arg1) {
	if (arg1 >= 3) return;
	func_ov023_021f6788((char*)arg0 + 0x30 + arg1 * 0x16);
}
