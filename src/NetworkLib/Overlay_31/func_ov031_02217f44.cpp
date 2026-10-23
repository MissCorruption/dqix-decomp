#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov031_02203164(int arg0);

// USA: func_ov031_02217f44
extern "C" ARM void func_ov031_02217f44(void* arg0) {
	char* var0 = (char*)arg0;
	VectorizedMemset(var0 + 0x1138, 0, 0x64);
	*(int*)(var0 + 0x1000 + 0x174) = 0xb68;
	*(int*)(var0 + 0x1000 + 0x178) = *(int*)(var0 + 0x1000 + 0x9cc);
	*(int*)(var0 + 0x1000 + 0x180) = 0x5ea;
	*(int*)(var0 + 0x1000 + 0x184) = *(int*)(var0 + 0x1000 + 0x9d0);
	func_ov031_02203164((int)(var0 + 0x1138));
}
