#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" int func_ov031_02211848(void);
extern "C" void func_ov031_022103dc(void* arg0);
extern "C" void func_ov031_0221038c(int arg0);

struct Struct_ov031_02210720 {
	int unknown_0_;
	int unknown_4_;
};

extern Struct_ov031_02210720* data_ov031_0224e588;

// USA: func_ov031_02210720
extern "C" ARM void func_ov031_02210720(void) {
	if (func_ov031_02211848()) {
		func_ov031_0221038c(2);
	}
	switch (data_ov031_0224e588->unknown_4_) {
	case 1:
		func_ov031_022103dc((void*)2);
		break;
	case 2:
		func_ov031_022103dc((void*)0);
		break;
	default:
		SleepCurrentContext(0x64);
		break;
	}
}
