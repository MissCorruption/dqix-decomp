#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

struct Struct_ov017_021aa4cc {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	int unknown_8_;
	int unknown_c_;
	int unknown_10_;
	int unknown_14_;
	int unknown_18_;
	int unknown_1c_;
	int unknown_20_;
	SafeAllocator unknown_24_;
	int unknown_38_;
	int unknown_3c_;
	int unknown_40_;
	int unknown_44_;
	short unknown_48_;
	short unknown_4a_;
	short unknown_4c_;
	short unknown_4e_;
	int unknown_50_;
	int unknown_54_;
	int unknown_58_;
	unsigned char unknown_5c_;
	unsigned char unknown_5d_[3];
	int unknown_60_;
	int unknown_64_;
};

// USA: func_ov017_021aa50c
extern "C" ARM void func_ov017_021aa50c(Struct_ov017_021aa4cc* arg0) {
	func_0204693c((Struct_0204693c*)arg0);
	arg0->unknown_0_ = 0x1a;
	arg0->unknown_c_ = (*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8;
	arg0->unknown_8_ = 0;
	arg0->unknown_18_ = 0;
	arg0->unknown_20_ = 0;
	arg0->unknown_1c_ = 0;
	arg0->unknown_24_.ResetAllocatorPointer();
	arg0->unknown_38_ = 0;
	arg0->unknown_3c_ = 0;
	arg0->unknown_40_ = 0;
	arg0->unknown_44_ = 0;
	arg0->unknown_48_ = -1;
	arg0->unknown_4a_ = -1;
	arg0->unknown_4c_ = -0xb;
	arg0->unknown_50_ = -1;
	arg0->unknown_10_ = 0;
	arg0->unknown_14_ = 0;
	arg0->unknown_54_ = 0;
	arg0->unknown_58_ = 0;
	arg0->unknown_5c_ = 0;
	arg0->unknown_60_ = 0;
	arg0->unknown_64_ = 0;
}
