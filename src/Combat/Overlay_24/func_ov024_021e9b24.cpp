#include <globaldefs.h>

struct Struct_ov024_021e9b24_2 {
	unsigned int unknown_0_0_ : 10;
	unsigned int unknown_1_2_ : 10;
	unsigned int unknown_2_4_ : 10;
	unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021e9b24 {
	char unknown_0_[0x20];
	struct Struct_ov024_021e9b24_2 unknown_20_;
	struct Struct_ov024_021e9b24_2 unknown_24_;
};

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);

// USA: func_ov024_021e9b24
extern "C" ARM unsigned short func_ov024_021e9b24(void* arg0, int arg1, struct Struct_ov024_021e9b24* arg2, int arg3) {
	if (arg3 != 0) {
		return func_ov024_021da644(arg1, arg2->unknown_24_.unknown_1_2_, arg2->unknown_24_.unknown_2_4_);
	} else {
		return func_ov024_021da644(arg1, arg2->unknown_20_.unknown_2_4_, arg2->unknown_24_.unknown_0_0_);
	}
}
