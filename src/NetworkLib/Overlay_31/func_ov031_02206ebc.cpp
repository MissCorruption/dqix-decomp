#include <globaldefs.h>

extern "C" int func_ov031_02204c84(int arg0);
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);

struct Struct_ov031_0224c9e0_2 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
};
extern struct Struct_ov031_0224c9e0_2 data_ov031_0224c9e0;

// USA: func_ov031_02206ebc
extern "C" ARM int func_ov031_02206ebc(int arg0) {
	unsigned int var0 = DisableIRQInterrupts();
	unsigned int var1 = data_ov031_0224c9e0.unknown_0_;
	unsigned int var2 = data_ov031_0224c9e0.unknown_4_;
	data_ov031_0224c9e0.unknown_0_ = 0;
	data_ov031_0224c9e0.unknown_4_ = 0;
	int var3 = func_ov031_02204c84(arg0);
	data_ov031_0224c9e0.unknown_0_ = var1;
	data_ov031_0224c9e0.unknown_4_ = var2;
	SetIRQInterruptState(var0);
	return var3;
}
