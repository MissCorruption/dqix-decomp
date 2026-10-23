#include <globaldefs.h>

extern "C" void func_ov031_02210358(int arg0, int arg1);
extern "C" void func_ov031_022103dc(void* arg0);
extern "C" int func_ov031_02210f24(const char* arg0);
extern "C" int func_ov031_02210f78(int arg0, int arg1, void* arg2);
extern "C" ARM void func_ov031_022103f8(void* arg0);
extern "C" int func_ov031_022071d8(int arg0, int arg1, int arg2);
struct Struct_ov031_022078f0;
extern "C" ARM int func_ov031_022078f0(struct Struct_ov031_022078f0* arg0, void* arg1);
struct Struct_ov031_02207230;
extern "C" int func_ov031_02207230(void* arg0, struct Struct_ov031_02207230* arg1);

struct Struct_ov031_02210988 {
	char unknown_0_[0x4];
	int unknown_4_;
	char unknown_8_[0x20 - 0x8];
	int unknown_20_;
	unsigned short unknown_24_;
	char unknown_26_[0x48 - 0x26];
	char unknown_48_[1];
	char unknown_49_[0x1b8 - 0x49];
	int unknown_1b8_;
	char unknown_1bc_[0x1d4 - 0x1bc];
};
extern Struct_ov031_02210988* data_ov031_0224e588;
extern void* data_ov031_022499f8;

// USA: func_ov031_02210988
extern "C" ARM void func_ov031_02210988(void) {
	unsigned char var0[8];

	void* var1 = &data_ov031_022499f8;
	int var2 = 0xd68f;
	int var3 = data_ov031_0224e588->unknown_20_;
	if (var3 != 0) {
		var1 = (void*)var3;
	} else if (func_ov031_02210f24(data_ov031_0224e588->unknown_48_)) {
		var1 = (char*)data_ov031_0224e588 + 0x48;
	}

	int var4 = data_ov031_0224e588->unknown_24_;
	if (var4 != 0) var2 = var4;

	if (data_ov031_0224e588->unknown_4_ == 2) {
		func_ov031_022103dc((void*)5);
		return;
	}

	if (!func_ov031_02210f78((int)var1, var2, var0)) {
		func_ov031_02210358(5, 5 - 0x23);
		func_ov031_022103f8((void*)5);
		return;
	}

	if (data_ov031_0224e588->unknown_4_ == 2) {
		func_ov031_022103dc((void*)5);
		return;
	}

	int var5 = func_ov031_022071d8(2, 1, 0);
	if (var5 < 0) {
		func_ov031_02210358(5, 5 - 0x37);
		func_ov031_022103f8((void*)5);
		return;
	}
	data_ov031_0224e588->unknown_1b8_ = var5;

	if (data_ov031_0224e588->unknown_4_ == 2) {
		func_ov031_022103dc((void*)5);
		return;
	}

	int var6 = func_ov031_022078f0((struct Struct_ov031_022078f0*)data_ov031_0224e588->unknown_1b8_, (char*)data_ov031_0224e588 + 0x1d4);
	if (var6 < 0) {
		func_ov031_02210358(5, 5 - 0x37);
		func_ov031_022103f8((void*)5);
		return;
	}

	if (data_ov031_0224e588->unknown_4_ == 2) {
		func_ov031_022103dc((void*)5);
		return;
	}

	int var7 = func_ov031_02207230((void*)data_ov031_0224e588->unknown_1b8_, (struct Struct_ov031_02207230*)var0);
	if (var7 < 0) {
		func_ov031_02210358(6, 6 - 0x42);
		func_ov031_022103f8((void*)5);
		return;
	}
	func_ov031_022103dc((void*)6);
}
