#include <globaldefs.h>

extern void* data_ov031_0224e580;
extern "C" void func_ov031_02211864(int arg0, int arg1);

// USA: func_ov031_0220fff8
extern "C" ARM int func_ov031_0220fff8(int* arg0) {
	if (*(int*)((char*)arg0 + 8) == 0xd6 && *(int*)((char*)arg0 + 0xc) != 0) {
		int var0 = *(int*)((char*)arg0 + 0x10);
		if (var0 == 0) {
			func_ov031_02211864(6, 6 - 0x1a);
		}
		*(int*)((char*)data_ov031_0224e580 + 0x30) = var0;
	}
	return 1;
}
