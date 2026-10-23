#include <globaldefs.h>

unsigned int DisableSpecificInterrupts(unsigned int mask);
unsigned int EnableSpecificInterrupts(unsigned int mask);

struct Struct_ov031_0223d8d8 {
	struct Struct_ov031_0223d8d8* unknown_0_; /* 0x0 */
	struct Struct_ov031_0223d8d8* unknown_4_; /* 0x4 */
};

struct Struct_ov031_0223d8d8_2 {
	struct Struct_ov031_0223d8d8* unknown_0_;
};

// USA: func_ov031_0223d8d8
extern "C" ARM void func_ov031_0223d8d8(struct Struct_ov031_0223d8d8_2* arg0, struct Struct_ov031_0223d8d8* arg1) {
	unsigned int var0 = DisableSpecificInterrupts(1);
	arg0->unknown_0_->unknown_4_ = arg1;
	arg1->unknown_0_ = arg0->unknown_0_;
	arg1->unknown_4_ = (struct Struct_ov031_0223d8d8*)arg0;
	arg0->unknown_0_ = arg1;
	EnableSpecificInterrupts(var0);
}
