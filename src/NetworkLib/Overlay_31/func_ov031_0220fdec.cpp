#include <globaldefs.h>

extern void* data_ov031_0224e580;

// USA: func_ov031_0220fdec
extern "C" ARM void func_ov031_0220fdec(int arg0, int* arg1) {
	int var0 = 1;
	if (!(arg0 < 0) && !((unsigned int)arg0 < 12) && *arg1 == arg0) {
		int (*var1)(int*) = *(int(**)(int*))((char*)data_ov031_0224e580 + 0x28);
		if (var1 != NULL) {
			var0 = var1(arg1);
		}
	}
	*(int*)((char*)data_ov031_0224e580 + 0x2c) = var0;
}
