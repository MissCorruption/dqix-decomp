#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern void* data_ov031_0224e588;
int LockMutex(Mutex*);

struct Struct_ov031_02290f8c {
	unsigned char unknown_0_[8];
	void* unknown_8_;
	int unknown_c_;
};
struct Mutex;
extern void UnlockMutex(Mutex*);

extern "C" int func_ov031_02207434(void* arg0);
extern "C" void func_ov031_02210358(int arg0, int arg1);
extern "C" void func_ov031_022103dc(void* arg0);

// USA: func_ov031_02210b4c
extern "C" ARM void func_ov031_02210b4c(void) {
	int var0 = *(int*)((char*)data_ov031_0224e588 + 0x1b8);
	LockMutex((Mutex*)((char*)data_ov031_0224e588 + 0x1bc));
	*(int*)((char*)data_ov031_0224e588 + 0x1b8) = -59;
	UnlockMutex((Mutex*)((char*)data_ov031_0224e588 + 0x1bc));

	if (var0 >= 0) {
		int var1 = func_ov031_02207434((void*)var0);
		if (var1 < 0) {
			func_ov031_02210358(5, 5 - 0x37);
		} else {
			do {
				SleepCurrentContext(100);
				var1 = func_ov031_02207434((void*)var0);
			} while (var1 == -26);
			if (var1 != 0) {
				func_ov031_02210358(5, 5 - 0x37);
			}
		}
	}

	func_ov031_022103dc((void*)1);
}
