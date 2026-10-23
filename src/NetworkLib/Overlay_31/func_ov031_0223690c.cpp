#include <globaldefs.h>

struct Struct_ov031_02222ce4;
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);

struct Struct_ov031_0224926a { unsigned short unknown_0_; unsigned short unknown_2_; };
extern Struct_ov031_0224926a data_ov031_0224926a[];
extern unsigned char data_ov031_0224924c[][5];
extern unsigned char data_ov031_0224925b[][5];

struct Struct_ov031_0223690c { void* unknown_0_[5]; void* unknown_14_; int unknown_18_; };
struct Struct_ov031_02290d04 { char unknown_0_[4]; Struct_ov031_0223690c* unknown_4_; };
extern Struct_ov031_02290d04 data_ov031_02290d04;

extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" void* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223bb58(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_ov031_022373b4(int);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_02236a08(void* arg0);

// USA: func_ov031_0223690c
extern "C" ARM void func_ov031_0223690c(int arg0) {
	data_ov031_02290d04.unknown_4_ = (Struct_ov031_0223690c*)func_ov031_0223cf4c(0x1c, 4);
	unsigned char* var0 = data_ov031_0224924c[arg0];
	unsigned char* var1 = data_ov031_0224925b[arg0];
	int var2 = 0;
	do {
		data_ov031_02290d04.unknown_4_->unknown_0_[var2] = func_ov031_0223be70(1, *var0++, 1);
		func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02290d04.unknown_4_->unknown_0_[var2], -1, 0);
		Struct_ov031_0224926a* var3 = &data_ov031_0224926a[var2];
		func_ov031_0223bbd8(data_ov031_02290d04.unknown_4_->unknown_0_[var2], -1, -42, var3->unknown_2_);
		func_ov031_0223bb58(data_ov031_02290d04.unknown_4_->unknown_0_[var2], -1, 0, *var1++);
		var2++;
	} while (var2 < 5);
	data_ov031_02290d04.unknown_4_->unknown_14_ = func_ov031_0223e218(0, (void*)func_ov031_02236a08, 0, 0x78);
	func_ov031_022373b4(arg0);
	func_ov031_02236878(0xd);
}
