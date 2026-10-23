#include <globaldefs.h>

extern "C" void func_ov031_02208c14(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_02208ef0(void* arg0);
extern "C" void func_ov031_02207b44(void* arg0, int arg1, int arg2);
extern "C" void func_ov031_02208f50(void* arg0);

// USA: func_ov031_0220911c
extern "C" ARM void func_ov031_0220911c(void* arg0, void* arg1) {
	func_ov031_02208c14(arg0, arg1, *(int*)((char*)arg0 + 0x81c));
	func_ov031_02208ef0(arg0);
	func_ov031_02207b44(arg0, 0, 0);
	func_ov031_02208f50(arg0);
	*(unsigned char*)((char*)arg0 + 0x455) = 5;
}
