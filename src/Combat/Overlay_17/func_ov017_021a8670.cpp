#include <globaldefs.h>
#if defined(jpn)
#define ALLOC_OFFSET 0x1f4
#define RESET_OFFSET 0x208
#else
#define ALLOC_OFFSET 0x264
#define RESET_OFFSET 0x278
#endif
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);
extern "C" void func_0205c790(char* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc40(struct Struct_0201099c_14* arg0);

// USA: func_ov017_021a8670
extern "C" ARM void func_ov017_021a8670(char* arg0) {
	func_0204693c((struct Struct_0204693c*)arg0);
	arg0[0] = 0x38;
	*(int*)(arg0 + 0x8) = 0;
	*(int*)(arg0 + 0x28) = -1;
	*(int*)(arg0 + 0xc) = 0;
	*(int*)(arg0 + 0x10) = 0;
	*(int*)(arg0 + 0x14) = 0;
	memset(arg0 + 0x18, 0, 5);
	*(int*)(arg0 + 0x20) = 0;
	func_0205c790(arg0 + 0x2c);
	((SafeAllocator*)(arg0 + ALLOC_OFFSET))->ResetAllocatorPointer();
	func_020dfc40((struct Struct_0201099c_14*)(arg0 + RESET_OFFSET));
}
