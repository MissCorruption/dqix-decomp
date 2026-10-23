#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern unsigned char data_ov031_0224e3b8[0x170];

// USA: func_ov031_0220ab78
extern "C" ARM void func_ov031_0220ab78(void) {
	VectorizedMemset(data_ov031_0224e3b8, 0, 0x170);
}
