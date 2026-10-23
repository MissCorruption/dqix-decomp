#include <globaldefs.h>

struct Struct_ov031_0224e5e8_13 {
	char unknown_0_[8];
	void *unknown_8_;
};
extern struct Struct_ov031_0224e5e8_13 data_ov031_0224e5e8;

struct Mutex;
void* LockMutex(Mutex*);

struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

// USA: func_ov031_02217598
extern "C" ARM void func_ov031_02217598(int arg0) {
	void *var0 = data_ov031_0224e5e8.unknown_8_;
	void *var1 = (char*)var0 + 0x1000 + 0x3d8;
	LockMutex((Mutex*)var1);
	var0 = data_ov031_0224e5e8.unknown_8_;
	*(int*)((char*)var0 + 0x1000 + 0x4) = arg0;
	var0 = data_ov031_0224e5e8.unknown_8_;
	var1 = (char*)var0 + 0x1000 + 0x3d8;
	UnlockMutex((Mutex*)var1);
}
