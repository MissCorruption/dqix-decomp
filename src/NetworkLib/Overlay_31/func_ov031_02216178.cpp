#include <globaldefs.h>

extern void* data_ov031_0224e5d8;
extern "C" int func_020d5490(int);

// USA: func_ov031_02216178
extern "C" ARM int func_ov031_02216178(int arg0) {
	if (arg0 == 0) return -1;
	*(int*)((char*)data_ov031_0224e5d8 + 0x1000 + 0xa90) = 2;
	int var0 = func_020d5490(arg0);
	return (var0 == 2) ? 0 : var0;
}
