#include <globaldefs.h>

extern void (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_0220a66c
extern "C" ARM void func_ov031_0220a66c(int arg0, char* arg1) {
	char* var0 = *(char**)(arg1 + 0xc);
	unsigned int var1 = *(int*)(var0 + 0x828) - *(int*)(var0 + 0x82c);
	if ((unsigned int)arg0 >= var1) {
		void* var2 = *(void**)(var0 + 0x824);
		if (var2 != 0) {
			data_ov031_0224c9c0(var2);
		}
		*(void**)(var0 + 0x824) = 0;
		return;
	}
	*(int*)(var0 + 0x82c) += arg0;
}
