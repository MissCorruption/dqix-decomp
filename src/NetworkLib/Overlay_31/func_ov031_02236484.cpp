#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern char* data_ov031_02290cfc;
extern "C" void func_ov031_02236570(int arg0);

// USA: func_ov031_02236484
extern "C" ARM void func_ov031_02236484(int arg0) {
	unsigned char* var0 = (unsigned char*)data_ov031_02290cfc + (arg0 << 8);
	VectorizedMemset(var0, 0, 0xef);
	var0[0xe7] = 0xff;
	func_ov031_02236570(arg0);
}
