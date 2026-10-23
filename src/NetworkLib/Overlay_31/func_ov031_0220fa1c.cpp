#include <globaldefs.h>

struct Struct_ov031_0220fa1c {
	unsigned int unknown_0_[6];
	char unknown_18_[0x414 - 0x18];
};

extern void* data_ov031_0224e580;

extern "C" int func_ov031_0220fe44(int (*arg0)(int*));
extern "C" int func_ov031_0220ff34(int* arg0);
extern "C" int func_ov031_0220ff18(void* arg0);
extern "C" void func_ov031_0220fea0(void);
extern "C" void func_ov031_0220fed8(void);

// USA: func_ov031_0220fa1c
extern "C" ARM void func_ov031_0220fa1c(void) {
	Struct_ov031_0220fa1c var0;
	unsigned int* var1 = (unsigned int*)&var0;
	void* var2 = data_ov031_0224e580;
	var1[0] = 0x10;
	var1[1] = 0x44535359;
	var1[2] = 0xce;
	var1[3] = *(int*)((char*)(*(void**)((char*)var2 + 0x24)) + 4);
	if (func_ov031_0220fe44(func_ov031_0220ff34) != 0) {
		if (func_ov031_0220ff18(&var0) != 0) {
			func_ov031_0220fea0();
			*(int*)((char*)(*(void**)((char*)data_ov031_0224e580 + 0x24)) + 0x24) = 0;
		}
	}
	func_ov031_0220fed8();
}
