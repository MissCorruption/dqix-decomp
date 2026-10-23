#include <globaldefs.h>

extern "C" int func_020d4aa8(void);
extern "C" int func_020d4ac8(void);
extern "C" int func_ov031_0223bdb0(int, int, int);

struct Struct_ov031_02223b60 {
	int unknown_0_;
	unsigned short unknown_4_;
};

struct Struct_ov031_02223b60_2 {
	Struct_ov031_02223b60* unknown_0_;
	unsigned char unknown_4_[4];
	signed char unknown_8_;
};

extern Struct_ov031_02223b60_2* data_ov031_02250bf8;
extern char data_ov031_022489a4[];

// USA: func_ov031_02223b60
extern "C" ARM void func_ov031_02223b60(void) {
	volatile unsigned short* var0 = (volatile unsigned short*)0x4000208;
	int var1 = 0;
	unsigned short var2 = *var0;
	*var0 = 0;
	if (func_020d4aa8() != 0x8000) {
		var1 = func_020d4ac8();
	}

	(void)*var0;
	*var0 = var2;
	Struct_ov031_02223b60_2* var3 = data_ov031_02250bf8;
	int var4 = var3->unknown_8_;
	Struct_ov031_02223b60* var5 = var3->unknown_0_;
	unsigned char var6 = *(unsigned char*)((data_ov031_022489a4 + var4 * 4) + var1);
	func_ov031_0223bdb0(0, var6, (int)var5);

	var3 = data_ov031_02250bf8;
	var5 = var3->unknown_0_;
	var5->unknown_0_ = (var5->unknown_0_ & 0xfe00ff00) | 0x26 | 0xe50000;
	var3 = data_ov031_02250bf8;
	var5 = var3->unknown_0_;
	var5->unknown_4_ = (var5->unknown_4_ & ~0xc00) | 0x800;
}
