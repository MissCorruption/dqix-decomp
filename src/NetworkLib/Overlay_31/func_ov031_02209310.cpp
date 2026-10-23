#include <globaldefs.h>

extern "C" void VectorizedInvertedMemcpy(const void* src, void* dst, unsigned int length);
extern "C" void func_ov031_02209158(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_02209234(void* arg0, void* arg1, int arg2);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);

// USA: func_ov031_02209310
extern "C" ARM void func_ov031_02209310(char* arg0, char* arg1) {
	char var0[0x14];
	VectorizedInvertedMemcpy(arg0 + 0x3a4, arg0 + 0x3fc, 0x58);
	func_ov031_02209158(arg0, var0, 1);
	VectorizedInvertedMemcpy(arg0 + 0x3fc, arg0 + 0x3a4, 0x58);
	if (func_02001aec(arg1, var0, 0x10) != 0) {
		arg0[0x455] = 9;
		return;
	}
	VectorizedInvertedMemcpy(arg0 + 0x2ec, arg0 + 0x348, 0x5c);
	func_ov031_02209234(arg0, var0, 1);
	VectorizedInvertedMemcpy(arg0 + 0x348, arg0 + 0x2ec, 0x5c);
	if (func_02001aec(arg1 + 0x10, var0, 0x14) != 0) {
		arg0[0x455] = 9;
	} else {
		arg0[0x455] = 6;
	}
}
