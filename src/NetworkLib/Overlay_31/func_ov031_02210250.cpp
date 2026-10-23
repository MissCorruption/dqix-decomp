#include <globaldefs.h>

extern void* data_ov031_0224e588;

extern "C" void func_ov031_0221038c(int arg0);
struct Mutex;
void* LockMutex(Mutex*);
extern "C" void func_ov031_02207428(int arg0, int arg1);
struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

struct Struct_ov031_02210250 {
	char unknown_0_[0x1b8];
	int unknown_1b8_;
	char unknown_1bc_[0x1bc - 0x1bc];
};

// USA: func_ov031_02210250
extern "C" ARM int func_ov031_02210250(void) {
	if (data_ov031_0224e588 == NULL) {
		return 1;
	}
	func_ov031_0221038c(2);
	if (((Struct_ov031_02210250*)data_ov031_0224e588)->unknown_1b8_ >= 0) {
		LockMutex((Mutex*)((char*)data_ov031_0224e588 + 0x1bc));
		volatile Struct_ov031_02210250* var0 = (volatile Struct_ov031_02210250*)data_ov031_0224e588;
		if (var0->unknown_1b8_ >= 0) {
			func_ov031_02207428(var0->unknown_1b8_, 2);
		}
		UnlockMutex((Mutex*)((char*)data_ov031_0224e588 + 0x1bc));
	}
	return 1;
}
