#include <globaldefs.h>

extern "C" void func_020a2010(void* objIn);
extern "C" void func_0202e5c8(unsigned char* obj, int a, int b, int c);
extern "C" void func_020a27a0(void* obj);
extern "C" void func_0202e5d8(void*, int, int, int);
extern "C" void func_0202e0a4(void*);

// USA: func_ov006_021542f4
extern "C" ARM void func_ov006_021542f4(void *obj) {
	if (!obj) return;
	func_020a2010(obj);
	func_0202e5c8((unsigned char*)obj, 0, 0xffffe171, 0);
	func_0202e5d8(obj, 0, 0x2eb8, 0xa000);
	func_0202e0a4(obj);
	func_020a27a0(obj);
}
