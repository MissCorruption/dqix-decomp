#include <globaldefs.h>

struct Struct_ov031_02290ca0_22 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char* unknown_8_;
};
extern struct Struct_ov031_02290ca0_22 data_ov031_02290ca0;
extern unsigned char data_ov031_02248f58[];
extern "C" int func_ov031_02234ff8(int, int, int);

// USA: func_ov031_02230ca4
extern "C" ARM int func_ov031_02230ca4(void) {
	unsigned char var0 = data_ov031_02248f58[data_ov031_02290ca0.unknown_0_ - 0xb];
	int var1 = *(int*)(data_ov031_02290ca0.unknown_8_ + 0x10);
	return func_ov031_02234ff8(var1, var0, var0);
}
