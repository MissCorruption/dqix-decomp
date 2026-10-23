#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xc6
#define REGION_OFFSET_1 0x430
#define REGION_OFFSET_2 0xc7
#else
#define REGION_OFFSET_0 0x86
#define REGION_OFFSET_1 0x3f0
#define REGION_OFFSET_2 0x87
#endif


struct Struct_ov000_02171b3c {
	unsigned char unknown_0_[REGION_OFFSET_0];
	unsigned char unknown_86_;
	unsigned char unknown_87_[REGION_OFFSET_1 - REGION_OFFSET_2];
	int unknown_3f0_[0x10];
};

// USA: func_ov000_02171b3c
extern "C" ARM void func_ov000_02171b3c(struct Struct_ov000_02171b3c* arg0) {
	int var0;
	for (var0 = 0; var0 < 0x10; var0++) {
		arg0->unknown_3f0_[var0] = 0;
	}
	arg0->unknown_86_ = 0;
}
