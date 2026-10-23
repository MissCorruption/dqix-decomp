#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void* func_02012fe4(void);
extern "C" void func_02013750(void* obj, int flag);

// USA: func_ov017_0219bf74
extern "C" ARM void* func_ov017_0219bf74(void) {
	unsigned char* self = (unsigned char*)GetGameResources();
	func_02013750(func_02012fe4(), 1);
	((SafeAllocator*)(self + 0x38))->Reset();
	SetFlags04((GameResources*)self, 2);
	SetFlags00((GameResources*)self, 4);
	return self + 0x38;
}
