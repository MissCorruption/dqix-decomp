#include <globaldefs.h>
#include "NitroSDK/Timing.h"

extern "C" int func_ov031_022151b0(void*, void*, int, int);
extern int data_ov031_02245fb0;
extern int data_ov031_02245fb8;

// USA: func_ov031_02214c44
extern "C" ARM int func_ov031_02214c44(char* arg0) {
	*(unsigned long long*)(arg0 + 0xcb0) = GetCurrentTimestamp();
	*(unsigned char*)(arg0 + 0xd11) = 0;
	*(unsigned long long*)(arg0 + 0xcb0) = GetCurrentTimestamp();
	int var0 = *(signed char*)(arg0 + 0xd11);
	func_ov031_022151b0(&data_ov031_02245fb0, &data_ov031_02245fb8, var0, 0x200000);
	return 3;
}
