#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern void* data_ov031_0224e588;

// USA: func_ov031_022101c4
extern "C" ARM void func_ov031_022101c4(void) {
	MarkContextReadyAndSwitch((ProcessorContext*)((char*)data_ov031_0224e588 + 0xa10));
}
