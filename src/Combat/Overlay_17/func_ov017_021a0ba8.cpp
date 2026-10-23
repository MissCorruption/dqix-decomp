#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern int data_02114e20;
extern int data_ov017_021d67e8[];

// USA: func_ov017_021a0ba8
extern "C" ARM void func_ov017_021a0ba8(char* arg0) {
	for (int var0 = 0; data_ov017_021d67e8[var0] > -1; var0++) {
		int var1 = data_ov017_021d67e8[var0] * 0x14;
		void* var2 = ((SafeAllocator*)(arg0 + 0x38 + var1))->GetSignedAllocator();
		if (var2) {
			((SafeAllocator*)(arg0 + 0x38 + var1))->Destroy();
			func_02012da4((AllocatorUnion*)&data_02114e20, var2);
		}
	}
}
