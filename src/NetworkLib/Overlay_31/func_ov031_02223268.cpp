#include <globaldefs.h>

struct Struct_ov031_022269d8;
struct Struct_ov031_02223268_2;
struct Struct_ov031_02222ce4;

struct Struct_ov031_02223268 {
	Struct_ov031_022269d8* unknown_0_[4];
	void* unknown_10_;
	unsigned short unknown_14_;
	signed char unknown_16_;
	unsigned char unknown_17_;
};
extern Struct_ov031_02223268* data_ov031_02250ba8;
extern unsigned char data_ov031_02248940[];
extern unsigned char data_ov031_02248924[][2];

extern "C" Struct_ov031_02223268_2* func_ov031_0223baa0(Struct_ov031_022269d8* arg0, int arg1);
extern "C" void func_ov031_0223bdb0(int arg0, int arg1, void* arg2);
extern "C" ARM void func_ov031_0223bcc8(Struct_ov031_02222ce4* arg0, int arg1, int arg2);
extern "C" ARM void func_ov031_02222eb0(void* arg0);
extern "C" ARM void func_ov031_0223e2c0(int arg0, int arg1);

// USA: func_ov031_02223268
extern "C" ARM void func_ov031_02223268(int arg0) {
	data_ov031_02250ba8->unknown_14_++;
	if (data_ov031_02250ba8->unknown_14_ < 16) return;
	int var0 = data_ov031_02248940[data_ov031_02250ba8->unknown_17_];
	int var1 = 0;
	if (var0 > 0) {
		do {
			unsigned char var2 = data_ov031_02248924[data_ov031_02250ba8->unknown_17_][var1];
			Struct_ov031_02223268_2* var3 = func_ov031_0223baa0(data_ov031_02250ba8->unknown_0_[var1], 0);
			func_ov031_0223bdb0(0, var2, var3);
			func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02250ba8->unknown_0_[var1], -1, 1);
			var1++;
		} while (var1 < var0);
	}
	func_ov031_02222eb0((void*)0xa8);
	data_ov031_02250ba8->unknown_14_ = 0;
	data_ov031_02250ba8->unknown_16_ = -1;
	if (data_ov031_02250ba8->unknown_10_) {
		data_ov031_02250ba8->unknown_10_ = 0;
		func_ov031_0223e2c0(0, arg0);
	}
}
