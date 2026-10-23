#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_ov004_02167b78(void* arg0, int arg1);
#if defined(jpn)
extern "C" void func_ov004_02168074(void* arg0, int arg1);
#endif

struct Struct_ov004_02171024_2 { void* unknown_0_; void* unknown_4_; void* unknown_8_; };
extern struct Struct_ov004_02171024_2 data_ov004_02171024;

// USA: func_ov004_02167d04
extern "C" ARM int func_ov004_02167d04(void* arg0) {
#if defined(jpn)
	func_ov004_02168074(arg0, 0);
#else
	void* var0 = func_ov011_021845f8(arg0, 0);
	if (var0 != NULL) {
		SafeAllocator* var1 = (SafeAllocator*)((char*)var0 + 4);
		data_ov004_02171024.unknown_4_ = var1->Allocate(0xc);
		data_ov004_02171024.unknown_0_ = var1->Allocate(0x80);
		data_ov004_02171024.unknown_8_ = var1->Allocate(0x80);
		func_ov004_02167b78(arg0, 0);
	}

#endif
	return 0;
}
