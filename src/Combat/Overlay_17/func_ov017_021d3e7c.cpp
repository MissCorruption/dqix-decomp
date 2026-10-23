#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d3e7c_6208 = 0x1860 };
#else
enum { Enum_ov017_021d3e7c_6208 = 0x1840 };
#endif

extern "C" int func_0202c540(void* arg0);
extern "C" void* func_02012fe4(void);
extern "C" void func_ov017_021a01bc(unsigned char* arg0);

// USA: func_ov017_021d3e7c
extern "C" ARM void func_ov017_021d3e7c(void* arg0, unsigned char* arg1, int arg2, unsigned char* arg3, void* arg4) {
	if (func_0202c540(arg4) == 0) return;
	int var0 = (int)func_02012fe4();
	unsigned char* var1 = (unsigned char*)(var0 + Enum_ov017_021d3e7c_6208);
	*(int*)(var1 + 0xb3c) = arg1[4];
	func_ov017_021a01bc(arg3);
}
