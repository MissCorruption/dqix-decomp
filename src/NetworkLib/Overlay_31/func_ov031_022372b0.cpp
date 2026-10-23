#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2* arg0, int arg1, unsigned int* arg2, unsigned int* arg3);

struct Struct_ov031_0224926a { unsigned short unknown_0_; unsigned short unknown_2_; };
extern Struct_ov031_0224926a data_ov031_0224926a[];

struct Struct_ov031_022372b0 { void* unknown_0_[5]; int unknown_14_; };
struct Struct_ov031_02290d04_15 { char unknown_0_[4]; Struct_ov031_022372b0* unknown_4_; };
extern Struct_ov031_02290d04_15 data_ov031_02290d04;

extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2c0(int, void*);
extern "C" void func_ov031_0223ba20(void*);
extern "C" void func_ov031_0223cf70(void*);
extern void* data_ov031_02290d08;

// USA: func_ov031_022372b0
extern "C" ARM void func_ov031_022372b0(void* arg0) {
	int var0;
	unsigned int var1;
	func_ov031_0223bd28((Struct_ov031_02222f44_2*)data_ov031_02290d04.unknown_4_->unknown_0_[0], 0, (unsigned int*)&var0, &var1);
	var0 -= 8;
	int var2 = 0;
	do {
		Struct_ov031_0224926a* var3 = &data_ov031_0224926a[var2];
		void* var4 = data_ov031_02290d04.unknown_4_->unknown_0_[var2];
		unsigned short var5 = var3->unknown_2_;
		func_ov031_0223bbd8(var4, -1, var0, var5);
		var2++;
	} while (var2 < 5);
	if (var0 > 0x1d6) {
		return;
	}
	if (var0 < 0x100) {
		return;
	}
	func_ov031_0223e2c0(0, arg0);
	int var6 = 0;
	do {
		void* var7 = data_ov031_02290d04.unknown_4_->unknown_0_[var6];
		func_ov031_0223ba20(var7);
		var6++;
	} while (var6 < 5);
	func_ov031_0223cf70(&data_ov031_02290d08);
}
