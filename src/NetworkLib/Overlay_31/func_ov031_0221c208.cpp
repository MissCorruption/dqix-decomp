#include <globaldefs.h>

extern "C" void func_ov031_0221ae00(void*);
extern "C" int func_ov031_0221aed8(void*, int);

// USA: func_ov031_0221c208
extern "C" ARM int func_ov031_0221c208(void *arg0, int arg1) {
	char var0[0x14];
	func_ov031_0221ae00(var0);
	*(unsigned long long*)((char*)arg0 + 0) = *(unsigned long long*)((char*)arg0 + 8);
	*(unsigned long long*)((char*)arg0 + 8) = *(unsigned long long*)(var0 + 8);
	return func_ov031_0221aed8(arg0, arg1) != 0;
}
