#include <globaldefs.h>
#include "NitroSDK/Memory.h"

typedef void* (*Type_ov031_0221883c)(void*, int);
typedef void (*Type_ov031_0221883c_2)(void*, void*, int);

struct Struct_ov031_0221883c {
	unsigned char unknown_0_[0x10];
	Type_ov031_0221883c unknown_10_;
	Type_ov031_0221883c_2 unknown_14_;
};

struct Struct_ov031_02218528 {
	void* unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
};

extern int data_ov031_02249f14;
extern int data_ov031_02249f00;

// USA: func_ov031_0221883c
extern "C" ARM int func_ov031_0221883c(void* arg0, Struct_ov031_02218528* arg1, int arg2) {
	Struct_ov031_0221883c* var0 = (Struct_ov031_0221883c*)((char*)arg0 + 0x1000);
	Type_ov031_0221883c var1 = var0->unknown_10_;
	Type_ov031_0221883c_2 var2 = var0->unknown_14_;
	if (arg2 <= 0) return 0;

	void* var3 = var1(&data_ov031_02249f14, arg1->unknown_c_ + arg2);
	if (var3 == NULL) return 0;

	VectorizedInvertedMemcpy(arg1->unknown_0_, var3, (unsigned int)arg1->unknown_c_);
	var2(&data_ov031_02249f00, arg1->unknown_0_, 0);
	if (var3 == NULL) return 0;

	arg1->unknown_4_ = arg1->unknown_4_ + ((int)var3 - (int)arg1->unknown_0_);
	arg1->unknown_c_ = arg1->unknown_c_ + arg2;
	arg1->unknown_0_ = var3;
	arg1->unknown_8_ = (int)var3 + arg1->unknown_c_;
	return 1;
}
