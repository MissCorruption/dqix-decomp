#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern int data_ov031_02290fd0;
extern ProcessorContext data_ov031_022918dc;
extern "C" int func_ov031_022403f4(void);

// USA: func_ov031_022403b0
extern "C" ARM void func_ov031_022403b0(void) {
	data_ov031_02290fd0 = 1;
	func_ov031_022403f4();
	AwaitContextCompletion(&data_ov031_022918dc);
}
