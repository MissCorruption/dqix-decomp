#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" int FastIntModulus(int, int);
extern "C" void func_020c9be0(void);

struct Struct_ov031_0223bf48 {
	unsigned short unknown_0_;
	unsigned char unknown_2_;
	unsigned char volatile unknown_3_;
	int unknown_4_[64];
};

// USA: func_ov031_0223bf48
extern "C" ARM void func_ov031_0223bf48(struct Struct_ov031_0223bf48* arg0, int arg1) {
	unsigned int var0 = DisableSpecificInterrupts(1);
	int var1 = FastIntModulus(arg0->unknown_3_ + 1, arg0->unknown_0_);
	if (var1 == arg0->unknown_2_) {
		func_020c9be0();
	}
	arg0->unknown_4_[arg0->unknown_3_] = arg1;
	arg0->unknown_3_ = var1;
	EnableSpecificInterrupts(var0);
}
