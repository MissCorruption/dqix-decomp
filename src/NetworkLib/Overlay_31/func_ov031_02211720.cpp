#include <globaldefs.h>

extern "C" void func_020d1c24(unsigned int* arg0, unsigned int arg1);
extern "C" unsigned int func_020d1cf0(const unsigned int* arg0, const unsigned char* arg1, unsigned int arg2);

// USA: func_ov031_02211720
extern "C" ARM unsigned int func_ov031_02211720(const unsigned char* arg0) {
	unsigned int var0[0x100];
	func_020d1c24(var0, 0xedb88320);
	return func_020d1cf0(var0, arg0, 0x3c);
}
