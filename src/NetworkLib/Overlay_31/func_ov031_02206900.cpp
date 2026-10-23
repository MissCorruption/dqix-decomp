#include <globaldefs.h>

extern "C" int func_ov031_022071b4(void* arg0);
extern "C" int func_ov031_02207180(void* arg0);
extern "C" int func_ov031_022051a8(void* arg0, void* arg1);
extern "C" void* func_ov031_02205134(void* arg0, void* arg1, int arg2);
struct Struct_ov031_02205194;
extern "C" int func_ov031_022051f4(Struct_ov031_02205194* arg0, void* arg1);
extern "C" void func_ov031_022069d0(void);

// USA: func_ov031_02206900
extern "C" ARM int func_ov031_02206900(void* arg0) {
	if ((int)arg0 <= 0) {
		return ~0x1b;
	}
	if (func_ov031_022071b4(arg0) != 0) {
		return ~0x19;
	}
	if (func_ov031_02207180(arg0) != 0) {
		return 0;
	}
	int var0 = 0;
	if (arg0 != 0) {
		var0 = (*(volatile short*)((char*)arg0 + 0x70) & 1) != 0;
	}
	if (!var0) {
		return ~0x26;
	}
	if (*(volatile short*)((char*)arg0 + 0x70) & 0x10) {
		return ~0x19;
	}
	int var1 = 1;
	*(volatile short*)((char*)arg0 + 0x70) |= 0x18;
	signed char var2 = *((signed char*)arg0 + 0x73);
	if (var2 != 0 && var2 != 4) {
		var1 = 0;
	}
	if (var1 != 0) {
		func_ov031_022051a8(*(void**)((char*)arg0 + 0x68), NULL);
	}
	void* var3 = func_ov031_02205134((void*)func_ov031_022069d0, arg0, 1);
	*(int*)((char*)var3 + 8) = 0;
	func_ov031_022051f4((Struct_ov031_02205194*)arg0, var3);
	return 0;
}
