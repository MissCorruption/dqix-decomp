#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224e5e8_5 {
	unsigned char unknown_0_[8];
	char *unknown_8_;
};

extern Struct_ov031_0224e5e8_5 data_ov031_0224e5e8;

// USA: func_ov031_02216a84
extern "C" ARM void func_ov031_02216a84(void) {
	char *var0 = data_ov031_0224e5e8.unknown_8_;
	if (*(int*)(var0 + 0x1384) != 0) {
		AwaitContextCompletion((ProcessorContext*)(var0 + 0x1318));
	}
}
