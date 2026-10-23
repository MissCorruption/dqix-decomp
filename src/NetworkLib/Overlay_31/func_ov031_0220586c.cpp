#include <globaldefs.h>


struct Mutex;
void* LockMutex(Mutex*);
extern "C" void func_ov031_022031bc(int arg0, unsigned short arg1, unsigned int arg2);
extern "C" int func_ov031_02203358(void);
struct Struct_ov031_02290f8c;
void UnlockMutex(Mutex*);

struct Struct_ov031_0220586c {
	char unknown_0_[0x64];
	void* unknown_64_;
	char unknown_68_[0x70 - 0x64 - 4];
	volatile short unknown_70_;
};

struct Struct_ov031_0220586c_2 {
	char unknown_0_[4];
	Struct_ov031_0220586c* unknown_4_;
	char unknown_8_[0xc - 0x4 - 4];
	signed char unknown_c_;
	char unknown_d_[0x10 - 0xc - 1];
	unsigned short unknown_10_;
	unsigned short unknown_12_;
	unsigned int unknown_14_;
};

// USA: func_ov031_0220586c
extern "C" ARM int func_ov031_0220586c(Struct_ov031_0220586c_2* arg0) {
	Struct_ov031_0220586c* var0 = arg0->unknown_4_;
	char* var1 = (char*)var0->unknown_64_;
	int var2 = 0;
	LockMutex((Mutex*)(var1 + 0xe0));
	func_ov031_022031bc(arg0->unknown_10_, arg0->unknown_12_, arg0->unknown_14_);
	*(int*)(var1 + 0xf8) = 0;
	signed char var3 = arg0->unknown_c_;
	if (var3 == 0 || var3 == 4) {
		var2 = func_ov031_02203358();
	}
	UnlockMutex((Mutex*)(var1 + 0xe0));
	if (var2 != 0) {
		var0->unknown_70_ |= 0x40;
		return -0x4c;
	}
	var0->unknown_70_ |= 4;
	return 0;
}
