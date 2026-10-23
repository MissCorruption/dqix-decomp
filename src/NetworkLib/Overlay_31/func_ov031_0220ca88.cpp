#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

extern void* data_ov031_0224e53c;

// USA: func_ov031_0220ca88
extern "C" ARM int func_ov031_0220ca88(void) {
	unsigned int var0 = DisableIRQInterrupts();
	void* var1 = data_ov031_0224e53c;
	if (var1 == 0) {
		SetIRQInterruptState(var0);
		return 1;
	}
	int var2 = *(int*)((char*)var1 + 0x2260);
	if (var2 != 1) {
		SetIRQInterruptState(var0);
		return 1;
	}
	data_ov031_0224e53c = 0;
	SetIRQInterruptState(var0);
	return 0;
}
