#include <globaldefs.h>

extern "C" void func_020a2010(void* arg0);
extern "C" void func_0202e5c8(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020a27a0(void* arg0);
extern "C" void func_0202e5d8(void*, int, int, int);
extern "C" void func_0202e0a4(void*);

// USA: func_ov006_021542f4
extern "C" ARM void func_ov006_021542f4(void *arg0) {
	if (!arg0) return;
	func_020a2010(arg0);
	func_0202e5c8((unsigned char*)arg0, 0, 0xffffe171, 0);
	func_0202e5d8(arg0, 0, 0x2eb8, 0xa000);
	func_0202e0a4(arg0);
	func_020a27a0(arg0);
}
