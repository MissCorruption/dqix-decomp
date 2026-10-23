#include <globaldefs.h>

struct Struct_ov031_02290d18_14 { void (*unknown_0_)(int, void*); };
extern struct Struct_ov031_02290d18_14 data_ov031_02290d18;
extern int data_ov031_0224c3f4;

extern "C" int func_ov031_022399d8(void);
extern "C" void func_ov031_022393e4(int arg0);
extern "C" int func_ov031_0223a358(void);

// USA: func_ov031_02239984
extern "C" ARM void func_ov031_02239984(short* arg0) {
	unsigned short var0 = *(unsigned short*)((char*)arg0 + 2);
	if (var0 != 0) {
		func_ov031_022393e4(var0);
		func_ov031_0223a358();
		return;
	}
	if (func_ov031_022399d8() != 0) {
		return;
	}
	if (data_ov031_02290d18.unknown_0_ != 0) {
		data_ov031_02290d18.unknown_0_(0x8000000, &data_ov031_0224c3f4);
	}
	func_ov031_0223a358();
}
