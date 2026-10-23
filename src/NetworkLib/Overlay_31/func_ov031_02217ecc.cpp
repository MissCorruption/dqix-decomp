#include <globaldefs.h>

extern "C" void func_020c9b10(void *arg0);
extern "C" void func_ov031_02209e28(void *arg0, int arg1);
struct Mutex;
void* LockMutex(Mutex*);
void SleepCurrentContext(unsigned int arg);

struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

// USA: func_ov031_02217ecc
extern "C" ARM int func_ov031_02217ecc(char *arg0) {
	if (*(int*)(arg0 + 0x1000 + 0x130) == 1) {
		func_020c9b10(arg0 + 0x1800 + 0x1d4);
		func_ov031_02209e28(arg0 + 0x1800 + 0x1d4, 0x20);
	}
	LockMutex((Mutex*)(arg0 + 0x1800 + 0x3f8));
	int var0 = *(int*)(arg0 + 0x1000 + 0xc10);
	if (var0 == 1) {
		UnlockMutex((Mutex*)(arg0 + 0x1800 + 0x3f8));
		return 0;
	}
	UnlockMutex((Mutex*)(arg0 + 0x1800 + 0x3f8));
	SleepCurrentContext(0xa);
	return 1;
}
