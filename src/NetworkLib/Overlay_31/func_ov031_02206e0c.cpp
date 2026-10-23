#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_02203164(int arg0);
extern "C" void func_ov031_02203178(void);
extern "C" int func_ov031_02204c84(int arg0);

struct Struct_ov031_02206e0c {
	char unknown_0_[0x18];
	void* (*unknown_18_)(int size);
	void (*unknown_1c_)(void* p);
};
extern Struct_ov031_02206e0c* data_ov031_022496a4;

// USA: func_ov031_02206e0c
extern "C" ARM int func_ov031_02206e0c(int arg0) {
	char var0[0x64];
	if (arg0 == 0) return 0;

	void* var1 = data_ov031_022496a4->unknown_18_(0xfd0);
	if (var1 == 0) return 0;

	VectorizedMemset(var0, 0, 0x64);
	char* var2 = (char*)var1 + 0x368;
	char* var3 = var2 + 0x800;
	*(int*)(var0 + 0x40) = (int)var1;
	*(int*)(var0 + 0x3c) = 0xb68;
	*(int*)(var0 + 0x4c) = (int)var3;
	*(int*)(var0 + 0x48) = 0x466;
	func_ov031_02203164((int)var0);

	int var4 = func_ov031_02204c84(arg0);
	func_ov031_02203178();
	data_ov031_022496a4->unknown_1c_(var1);
	return var4;
}
