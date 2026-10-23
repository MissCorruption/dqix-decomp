#include <globaldefs.h>

extern "C" void func_ov031_0220b18c(void*, void*, int);
extern "C" void func_ov031_0220b8f4(void*, void*, int);
extern int data_ov031_022498e4;

// USA: func_ov031_0220b9ac
extern "C" ARM void func_ov031_0220b9ac(void* arg0, void* arg1) {
	func_ov031_0220b18c(arg1, (char*)arg0 + 0x14, 8);
	unsigned int var0 = *(unsigned int*)((char*)arg0 + 0x18);
	int var1 = (var0 >> 3) & 0x3f;
	int var2 = (var1 < 0x38) ? (0x38 - var1) : (0x78 - var1);
	func_ov031_0220b8f4(arg0, &data_ov031_022498e4, var2);
	func_ov031_0220b8f4(arg0, arg1, 8);
	func_ov031_0220b18c(arg1, arg0, 0x14);
}
