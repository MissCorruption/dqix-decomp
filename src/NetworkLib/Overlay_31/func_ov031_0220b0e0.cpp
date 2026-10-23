#include <globaldefs.h>

extern "C" void func_ov031_0220ab94(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_0220b028(void* arg0, const void* arg1, unsigned int arg2);
extern unsigned char data_ov031_022497a4[];

// USA: func_ov031_0220b0e0
extern "C" ARM void func_ov031_0220b0e0(void* arg0, void* arg1) {
	func_ov031_0220ab94(arg1, (char*)arg0 + 0x10, 8);
	int var0 = (*(unsigned int*)((char*)arg0 + 0x10) >> 3) & 0x3f;
	int var1 = (var0 < 0x38) ? (0x38 - var0) : (0x78 - var0);
	func_ov031_0220b028(arg0, data_ov031_022497a4, var1);
	func_ov031_0220b028(arg0, arg1, 8);
	func_ov031_0220ab94(arg1, arg0, 0x10);
}
