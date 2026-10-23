#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xc4
#define REGION_OFFSET_1 0x1e4
#define REGION_OFFSET_2 0xc6
#else
#define REGION_OFFSET_0 0x84
#define REGION_OFFSET_1 0x1a4
#define REGION_OFFSET_2 0x86
#endif


struct Struct_ov000_0217193c {
	unsigned char unknown_0_[REGION_OFFSET_0];
	unsigned short unknown_84_;
	unsigned char unknown_86_[REGION_OFFSET_1 - REGION_OFFSET_2];
	int unknown_1a4_[0x93];
};

// USA: func_ov000_0217193c
extern "C" ARM void func_ov000_0217193c(struct Struct_ov000_0217193c* arg0) {
	int var0;
	for (var0 = 0; var0 < 0x93; var0++) {
		arg0->unknown_1a4_[var0] = 0;
	}
	arg0->unknown_84_ = 0;
}
