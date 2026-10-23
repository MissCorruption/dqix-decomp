#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern "C" void func_ov031_0223fde4();
extern ProcessorContext data_ov031_02290fe0;
extern unsigned char data_ov031_022918a0;

// USA: func_ov031_0223fd9c
extern "C" ARM void func_ov031_0223fd9c(void* arg0) {
	PopulateContext(&data_ov031_02290fe0, (unsigned int)func_ov031_0223fde4, (unsigned int)arg0, (unsigned int)&data_ov031_022918a0, 0x800, 0x10);
	MarkContextReadyAndSwitch(&data_ov031_02290fe0);
}
