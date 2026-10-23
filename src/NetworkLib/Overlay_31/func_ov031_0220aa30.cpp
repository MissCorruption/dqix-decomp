#include <globaldefs.h>

extern void (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_0220aa30
extern "C" ARM void func_ov031_0220aa30(void* arg0) {
	char* var0 = *(char**)((char*)arg0 + 0xc);
	*(unsigned char*)(var0 + 0x455) = 0;
	void* var1 = *(void**)(var0 + 0x824);
	if (var1 != 0) {
		data_ov031_0224c9c0(var1);
	}
	*(void**)(var0 + 0x824) = 0;
}
