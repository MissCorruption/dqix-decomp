#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

// USA: func_ov003_0217e630
extern "C" ARM void func_ov003_0217e630(void* arg0, signed char arg1) {
	func_0204693c((Struct_0204693c*)arg0);
	*(unsigned char*)((char*)arg0 + 0x0) = 0x18;
	*(int*)((char*)arg0 + 0x20) = 0;
	*(int*)((char*)arg0 + 0x1c) = 0;
	*(signed char*)((char*)arg0 + 0xb4) = arg1;
	((SafeAllocator*)((char*)arg0 + 0x8))->ResetAllocatorPointer();
	*(unsigned short*)((char*)arg0 + 0xa0) = 0;
	*(int*)((char*)arg0 + 0xa4) = 0;
	*(int*)((char*)arg0 + 0xa8) = 0;
	*(int*)((char*)arg0 + 0xac) = 0;
	*(int*)((char*)arg0 + 0xb0) = 0;
}
