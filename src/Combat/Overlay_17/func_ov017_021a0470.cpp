#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_020545b8;
extern "C" void func_020545b8(struct Struct_020545b8* arg0);
extern "C" int func_02012da4(AllocatorUnion*, void*);

extern AllocatorUnion data_02114e20;
extern int data_ov017_021d68cc[];

// USA: func_ov017_021a0470
extern "C" ARM void func_ov017_021a0470(char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021a0470_712=0xb8};
#else
 enum {Enum_ov017_021a0470_712=0x2c8};
#endif
	char* var0 = arg0 + Enum_ov017_021a0470_712;
	int var1 = 0;
	var0 = var0 + 0x1000;
	for (; var1 < 4; var1++) {
		func_020545b8((struct Struct_020545b8*)(var0 + var1 * 0x5ec));
	}

	for (int var2 = 0; data_ov017_021d68cc[var2] >= 0; var2++) {
		int var3 = data_ov017_021d68cc[var2] * 0x14;
		void* var4 = ((SafeAllocator*)(arg0 + 0x38 + var3))->GetSignedAllocator();
		((SafeAllocator*)(arg0 + 0x38 + var3))->Destroy();
		((SafeAllocator*)(arg0 + 0x38 + var3))->ResetAllocatorPointer();
		if (var4 != NULL) {
			func_02012da4(&data_02114e20, var4);
		}
	}
}
