#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

struct Global0224e5e8 {
	unsigned char pad[8];
	char *base;
};

extern Global0224e5e8 data_ov031_0224e5e8;

// USA: func_ov031_02216a84
ARM void AwaitIfActive_02216a84(void) {
	char *base = data_ov031_0224e5e8.base;
	if (*(int*)(base + 0x1384) != 0) {
		AwaitContextCompletion((ProcessorContext*)(base + 0x1318));
	}
}
