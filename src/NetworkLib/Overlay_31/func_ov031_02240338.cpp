#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224e204 {
	int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_;
	int unknown_10_; int unknown_14_; int unknown_18_; int unknown_1c_;
};

extern "C" int func_020c75a4(void);
extern "C" void func_020c7de4(Struct_ov031_0224e204* arg0, int arg1, int arg2);
extern Struct_ov031_0224e204 data_ov031_022918bc;
extern int data_ov031_022918a0;
extern ProcessorContext data_ov031_022918dc;
extern "C" void func_ov031_0224185c(void);

// USA: func_ov031_02240338
extern "C" ARM int func_ov031_02240338(int arg0, int arg1) {
	if (func_020c75a4()) {
		func_020c7de4(&data_ov031_022918bc, (int)&data_ov031_022918a0, 1);
		PopulateContext(&data_ov031_022918dc, (unsigned int)func_ov031_0224185c, 0, arg1 + 0x2000, 0x2000, arg0);
		MarkContextReadyAndSwitch(&data_ov031_022918dc);
		return 1;
	}
	return 0;
}
