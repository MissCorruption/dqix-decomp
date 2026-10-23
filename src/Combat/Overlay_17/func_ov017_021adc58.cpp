#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

// USA: func_ov017_021adc58
extern "C" ARM void func_ov017_021adc58(unsigned char* arg0) {
	func_0204693c((struct Struct_0204693c*)arg0);
	arg0[0x0] = 0x21;
	arg0[0x9] = 0;
	*(short*)(arg0 + 0xe) = 0;
	arg0[0xa] = 0;
	arg0[0xc] = 0xf;
	arg0[0x20] = 0;
	arg0[0x21] = 0;
	*(short*)(arg0 + 0x28) = 0;
	*(int*)(arg0 + 0x24) = 0;
	*(int*)(arg0 + 0x14) = 0;
	*(int*)(arg0 + 0x18) = 0;
	*(int*)(arg0 + 0x1c) = 0;
	arg0[0xb] = 0;
	((SafeAllocator*)(arg0 + 0x2c))->ResetAllocatorPointer();
}
