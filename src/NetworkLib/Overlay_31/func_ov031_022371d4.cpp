#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2*, int, unsigned int*, unsigned int*);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_022372b0(void*);

struct Struct_ov031_02290d04_14 { char unknown_0_[4]; int* unknown_4_; };
extern Struct_ov031_02290d04_14 data_ov031_02290d04;

struct Struct_ov031_0224926a_6 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern Struct_ov031_0224926a_6 data_ov031_0224926a[];

// USA: func_ov031_022371d4
extern "C" ARM void func_ov031_022371d4(void* arg0) {
	unsigned int var0, var1;
	func_ov031_0223bd28((Struct_ov031_02222f44_2*)data_ov031_02290d04.unknown_4_[1], 0, &var0, &var1);
	var0 = var0 - 8;
	if ((int)var0 > 0x20) {
		int var2 = 1;
		do {
			Struct_ov031_0224926a_6* var3 = &data_ov031_0224926a[var2];
			func_ov031_0223bbd8((void*)data_ov031_02290d04.unknown_4_[var2], -1, var0, var3->unknown_2_);
			var2++;
		} while (var2 < 5);
		return;
	}
	var0 = 0x20;
	{
		int var4 = 1;
		do {
			Struct_ov031_0224926a_6* var5 = &data_ov031_0224926a[var4];
			func_ov031_0223bbd8((void*)data_ov031_02290d04.unknown_4_[var4], -1, var0, var5->unknown_2_);
			var4++;
		} while (var4 < 5);
	}
	func_ov031_0223e2b8(arg0, (int)func_ov031_022372b0);
}
