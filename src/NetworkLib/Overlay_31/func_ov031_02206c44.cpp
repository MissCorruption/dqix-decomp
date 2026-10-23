#include <globaldefs.h>

extern "C" int func_ov031_02206d90(void);
extern "C" void func_ov031_02200534(void);
extern "C" int func_ov031_022050c4(void);
extern "C" void func_ov031_02200524(int arg0);
extern void SleepCurrentContext(unsigned int milliseconds);

extern int data_ov031_0224e1c4;
extern int data_ov031_0224c9d0;

struct Struct_ov031_02206c44 {
	char unknown_0_[0x1c];
	void (*unknown_1c_)(int);
	char unknown_20_[8];
	int unknown_28_;
};
extern Struct_ov031_02206c44* data_ov031_022496a4;

struct Struct_ov031_0224e1d0_2 {
	char unknown_0_[0x1c];
	int unknown_1c_;
};
extern Struct_ov031_0224e1d0_2 data_ov031_0224e1d0;

// USA: func_ov031_02206c44
extern "C" ARM int func_ov031_02206c44(void) {
	if (data_ov031_0224e1c4 == 0) {
		data_ov031_0224e1c4 = data_ov031_0224c9d0;
	}

	int var0 = func_ov031_02206d90();
	if (var0 == -26) {
		do {
			SleepCurrentContext(100);
			var0 = func_ov031_02206d90();
		} while (var0 == -26);
	}

	int var1 = func_ov031_022050c4();
	if (var1 >= 0) {
		func_ov031_02200534();
		func_ov031_02200524(0);
		if (data_ov031_022496a4->unknown_28_ == 0) {
			data_ov031_022496a4->unknown_1c_(data_ov031_0224e1d0.unknown_1c_);
		}
		data_ov031_022496a4 = 0;
	}

	return var1;
}
