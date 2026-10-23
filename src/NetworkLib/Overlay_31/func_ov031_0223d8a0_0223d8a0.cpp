#include <globaldefs.h>

unsigned int DisableSpecificInterrupts(unsigned int mask);
unsigned int EnableSpecificInterrupts(unsigned int mask);

struct Struct_ov031_0223d8a0 { Struct_ov031_0223d8a0* unknown_0_; Struct_ov031_0223d8a0* unknown_4_; };

// USA: func_ov031_0223d8a0
extern "C" ARM void func_ov031_0223d8a0(Struct_ov031_0223d8a0* arg0) {
	unsigned int var0 = DisableSpecificInterrupts(1);
	arg0->unknown_0_->unknown_4_ = arg0->unknown_4_;
	arg0->unknown_4_->unknown_0_ = arg0->unknown_0_;
	arg0->unknown_4_ = NULL;
	arg0->unknown_0_ = NULL;
	EnableSpecificInterrupts(var0);
}
