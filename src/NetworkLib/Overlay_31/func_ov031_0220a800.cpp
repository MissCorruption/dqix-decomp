#include <globaldefs.h>

extern "C" void func_ov031_0220a6bc(void* arg0);

// USA: func_ov031_0220a800
extern "C" ARM int func_ov031_0220a800(char* arg0) {
	char* var0 = *(char**)(arg0 + 0xc);
	if (!(*(int*)(var0 + 0x824) != 0 && *(unsigned char*)(var0 + 0x456) != 0)) {
		func_ov031_0220a6bc(arg0);
	}
	int var1 = *(int*)(var0 + 0x824);
	if (var1 != 0 && *(unsigned char*)(var0 + 0x456) != 0) {
		return *(int*)(var0 + 0x828) - *(int*)(var0 + 0x82c);
	}
	if (var1 != 0) {
		goto ret_zero;
	}
	if (*(unsigned char*)(arg0 + 8) != 4) {
		goto ret_neg1;
	}
	if (*(unsigned char*)(var0 + 0x455) != 9) {
		goto ret_zero;
	}
ret_neg1:
	return -1;
ret_zero:
	return 0;
}
