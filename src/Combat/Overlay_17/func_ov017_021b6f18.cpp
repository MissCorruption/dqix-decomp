#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);
struct Struct_020a3578;
extern "C" void func_020a3578(struct Struct_020a3578* arg0);

// USA: func_ov017_021b6f18
extern "C" ARM void func_ov017_021b6f18(char* arg0) {
	func_0204693c((struct Struct_0204693c*)arg0);
	arg0[0] = 0xa;
	((SafeAllocator*)(arg0 + 8))->ResetAllocatorPointer();
	func_020a3578((struct Struct_020a3578*)(arg0 + 0x1c));

	*(int*)(arg0 + 0x6ac) = 0;
	*(int*)(arg0 + 0x6b0) = 0;
	*(unsigned short*)(arg0 + 0x600 + 0xb4) = 1;
	*(unsigned short*)(arg0 + 0x600 + 0xb6) = 0;
	*(int*)(arg0 + 0x6b8) = 0;
	*(unsigned char*)(arg0 + 0x6bd) = 0xff;
	*(unsigned char*)(arg0 + 0x6bc) = 0xff;
	*(signed char*)(arg0 + 0x6be) = -1;

	memset(arg0 + 0x6c0, 0, 3);

	arg0[0x6c3] = 0;
	*(unsigned short*)(arg0 + 0x600 + 0xc4) = 0;
	arg0[0x6c7] = 0;
	*(unsigned short*)(arg0 + 0x600 + 0xc8) = 0;
	arg0[0x6c6] = 0;
}
