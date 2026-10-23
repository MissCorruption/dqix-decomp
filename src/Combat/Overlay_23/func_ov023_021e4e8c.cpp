#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

// USA: func_ov023_021e4e8c
extern "C" ARM void func_ov023_021e4e8c(void* arg0) {
	char *var0 = (char*)arg0;
	var0[0xc11] = 0;
	for (int var1 = 0; var1 < 10; var1++) {
		((Object3D*)(var0 + var1 * 0xac))->Initialize();
		((SafeAllocator*)(var0 + 0x6b8 + var1 * 0x14))->ResetAllocatorPointer();
	}
	((SafeAllocator*)(var0 + 0x780))->ResetAllocatorPointer();
	var0[0xc10] = 0;

#if defined(jpn)
	memset(var0 + 0xbf4, 0, 0x18);
#else
	for (int var2 = 0; var2 < 12; var2++) {
		*(short*)(var0 + 0xbf4 + var2 * 2) = -1;
	}
#endif
	var0[0xc12] = 0;
	var0[0xc15] = 0;
	*(int*)(var0 + 0xc18) = 0;
	var0[0xc14] = 1;
}
