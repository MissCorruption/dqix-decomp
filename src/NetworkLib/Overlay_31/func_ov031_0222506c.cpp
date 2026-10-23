#include <globaldefs.h>

struct Struct_ov031_0222506c { int unknown_0_; int unknown_4_; };
struct Struct_ov031_02222c18 { int unknown_0_, unknown_4_; Struct_ov031_0222506c* unknown_8_; };
extern "C" Struct_ov031_0222506c* func_ov031_0223baa0(Struct_ov031_02222c18* arg0, int arg1);
extern "C" int func_ov031_0223bdb0(int arg0, int arg1, int arg2);

struct Struct_ov031_0223bcc8 { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_02222ce4 { unsigned char unknown_0_[8]; Struct_ov031_0223bcc8* unknown_8_; unsigned char unknown_c_; };
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2);

extern "C" void func_ov031_0223bbd8(void* arg0, int arg1, int arg2, int arg3);

extern unsigned short data_ov031_02248ac8[];
extern unsigned short data_ov031_02248aca[];

struct Struct_ov031_0222506c_2 { unsigned char unknown_0_[0x114]; Struct_ov031_02222c18* unknown_114_; unsigned char unknown_118_[0x121 - 0x118]; signed char unknown_121_; };
extern Struct_ov031_0222506c_2* data_ov031_02250bfc;

// USA: func_ov031_0222506c
extern "C" ARM void func_ov031_0222506c(void) {
	Struct_ov031_0222506c_2* var0 = data_ov031_02250bfc;
	signed char var1 = var0->unknown_121_;
	char var2;
	switch (var1) {
	case 0x2f: var2 = 'B'; break;
	case 0x30: var2 = 'A'; break;
	case 0x31: var2 = 'C'; break;
	case 0x32: var2 = 'A'; break;
	case 0x33:
	case 0x34: var2 = 'E'; break;
	default: var2 = '@'; break;
	}

	Struct_ov031_0222506c* var3 = func_ov031_0223baa0(var0->unknown_114_, 0);
	func_ov031_0223bdb0(0, var2, (int)var3);

	func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02250bfc->unknown_114_, -1, 2);

	int var4 = data_ov031_02250bfc->unknown_121_ * 2;
	unsigned short var5 = data_ov031_02248ac8[var4];
	unsigned short var6 = data_ov031_02248aca[var4];
	func_ov031_0223bbd8(data_ov031_02250bfc->unknown_114_, -1, var5, var6);
}
