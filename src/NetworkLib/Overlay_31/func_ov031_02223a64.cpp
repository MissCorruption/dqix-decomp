#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" ARM int func_ov031_0223be44(int arg0, int arg1);
extern "C" ARM void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_02223b60(void);

struct Struct_ov031_02223a64 {
	int unknown_0_;
	unsigned short unknown_4_;
};

struct Struct_ov031_02223a64_2 {
	Struct_ov031_02223a64* unknown_0_;
	int unknown_4_;
	signed char unknown_8_;
};

extern Struct_ov031_02223a64_2* data_ov031_02250bf8;
extern unsigned char data_ov031_022489a4[];

// USA: func_ov031_02223a64
extern "C" ARM void func_ov031_02223a64(int arg0) {
	if (data_ov031_02250bf8 != 0) {
		return;
	}
	Struct_ov031_02223a64_2* var0 = (Struct_ov031_02223a64_2*)func_ov031_0223cf4c(0xc, 4);
	unsigned char var1 = *(unsigned char*)&data_ov031_022489a4[arg0 * 4];
	data_ov031_02250bf8 = var0;
	var0->unknown_8_ = (signed char)arg0;
	int var2 = func_ov031_0223be44(0, var1);

	var0 = data_ov031_02250bf8;
	var0->unknown_0_ = (Struct_ov031_02223a64*)var2;

	var0 = data_ov031_02250bf8;
	Struct_ov031_02223a64* var3 = var0->unknown_0_;
	var3->unknown_0_ = (var3->unknown_0_ & 0xfe00ff00) | 0x26 | 0xe50000;

	var0 = data_ov031_02250bf8;
	var3 = var0->unknown_0_;
	var3->unknown_4_ = (var3->unknown_4_ & ~0xc00) | 0x800;

	void* var4 = func_ov031_0223e218(0, (void*)func_ov031_02223b60, 0, 0x78);
	var0 = data_ov031_02250bf8;
	var0->unknown_4_ = (int)var4;
}
