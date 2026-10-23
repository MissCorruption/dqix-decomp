#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224e5e8_3 {
	char unknown_0_[8];
	char *unknown_8_;
};
extern struct Struct_ov031_0224e5e8_3 data_ov031_0224e5e8;

void* LockMutex(Mutex*);
struct Struct_ov031_02290f8c;
struct Mutex;
void UnlockMutex(Mutex*);
extern "C" void func_ov031_02217e70(char *arg0);

// USA: func_ov031_022169a0
extern "C" ARM void func_ov031_022169a0(void) {
	char *var0 = data_ov031_0224e5e8.unknown_8_;
	if (var0 == 0) return;
	LockMutex((Mutex*)(var0 + 0x1000 + 0x3d8));
	*(int*)(data_ov031_0224e5e8.unknown_8_ + 0x1000 + 0x3f0) = 1;
	UnlockMutex((Mutex*)(data_ov031_0224e5e8.unknown_8_ + 0x3d8 + 0x1000));
	char *var1 = *(char**)(data_ov031_0224e5e8.unknown_8_ + 0x1000 + 0x314);
	if (var1 != 0) {
		func_ov031_02217e70(var1);
	}
	var0 = data_ov031_0224e5e8.unknown_8_;
	if (*(int*)(var0 + 0x1000 + 0x384) == 0) return;
	AwaitContextCompletion((ProcessorContext*)(var0 + 0x1000 + 0x318));
}
