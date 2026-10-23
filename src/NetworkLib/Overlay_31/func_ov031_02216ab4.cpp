#include <globaldefs.h>

struct Struct_ov031_0224e5e8_6 {
	char unknown_0_[8];
	void *unknown_8_;
};
extern struct Struct_ov031_0224e5e8_6 data_ov031_0224e5e8;

struct Mutex;
void* LockMutex(Mutex*);

struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

// USA: func_ov031_02216ab4
extern "C" ARM int func_ov031_02216ab4(void) {
	void *var0 = data_ov031_0224e5e8.unknown_8_;
	if (var0 == 0) return 0x16;
	void *var1 = (char*)var0 + 0x1000 + 0x3d8;
	LockMutex((Mutex*)var1);
	var0 = data_ov031_0224e5e8.unknown_8_;
	var1 = (char*)var0 + 0x1000 + 0x3d8;
	int var2 = *(int*)((char*)var0 + 0x1000 + 0x4);
	UnlockMutex((Mutex*)var1);
	return var2;
}
