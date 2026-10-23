#include <globaldefs.h>

struct BlockedContextList;
void UnblockContexts(struct BlockedContextList* list);
extern "C" void func_020c7e0c(void* arg0, int arg1, int arg2);
extern "C" void func_020c7f44(void* arg0, int arg1, int arg2);
extern "C" int func_020c7fe0(void* arg0, unsigned int* arg1, int arg2);

struct Struct_ov031_0224c954 { short unknown_0_; short unknown_2_; };
struct Struct_ov031_02245e5c { short unknown_0_; short unknown_2_; };
struct Struct_ov031_02291f24_3 { char unknown_0_[8]; int unknown_8_; char unknown_c_[4]; int unknown_10_; char unknown_14_[4]; int unknown_18_; };

extern struct Struct_ov031_0224c954 data_ov031_0224c954;
extern struct Struct_ov031_02291f24_3 data_ov031_02291f24;
extern struct BlockedContextList data_ov031_02291f3c;
extern int data_ov031_02291f60;

// USA: func_ov031_02245e5c
extern "C" ARM void func_ov031_02245e5c(struct Struct_ov031_02245e5c* arg0) {
	if (data_ov031_0224c954.unknown_2_ != arg0->unknown_0_ || data_ov031_0224c954.unknown_0_ != arg0->unknown_2_) {
		data_ov031_0224c954.unknown_2_ = arg0->unknown_0_;
		data_ov031_0224c954.unknown_0_ = arg0->unknown_2_;
	}
	switch (arg0->unknown_0_) {
	case 1:
		data_ov031_02291f24.unknown_10_ = 0;
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
		data_ov031_02291f24.unknown_8_ = arg0->unknown_2_;
		UnblockContexts(&data_ov031_02291f3c);
		return;
	case 6:
		if (data_ov031_02291f24.unknown_18_ != 0) {
			data_ov031_02291f24.unknown_8_ = arg0->unknown_2_;
			UnblockContexts(&data_ov031_02291f3c);
			return;
		}
		if (arg0->unknown_2_ == 0) {
			func_020c7e0c(&data_ov031_02291f60, 2, 0);
		} else {
			func_020c7f44(&data_ov031_02291f60, 3, 0);
		}
		return;
	case 7:
		if (arg0->unknown_2_ == 0) {
			unsigned int var0;
			if (func_020c7fe0(&data_ov031_02291f60, &var0, 0) != 0) return;
			func_020c7e0c(&data_ov031_02291f60, 1, 0);
		} else {
			func_020c7f44(&data_ov031_02291f60, 3, 0);
		}
		return;
	case 8:
		data_ov031_02291f24.unknown_10_++;
		return;
	}
}
