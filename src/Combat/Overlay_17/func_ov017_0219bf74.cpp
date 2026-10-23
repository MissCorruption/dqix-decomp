#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_02013750(void* arg0, int arg1);

// USA: func_ov017_0219bf74
extern "C" ARM void* func_ov017_0219bf74(void) {
	unsigned char* var0 = (unsigned char*)GetGameResources();
	func_02013750(func_02012fe4(), 1);
	((SafeAllocator*)(var0 + 0x38))->Reset();
	SetFlags04((GameResources*)var0, 2);
	SetFlags00((GameResources*)var0, 4);
	return var0 + 0x38;
}
