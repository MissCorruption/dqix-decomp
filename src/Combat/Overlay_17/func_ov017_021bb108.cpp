#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_ov001_0215aa5c(void);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern int data_02114e20;

// USA: func_ov017_021bb108
extern "C" ARM void func_ov017_021bb108(char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021bb108_124=0x78, Enum_ov017_021bb108_292=0x120, Enum_ov017_021bb108_312=0x134};
#else
 enum {Enum_ov017_021bb108_124=0x7c, Enum_ov017_021bb108_292=0x124, Enum_ov017_021bb108_312=0x138};
#endif
	void* var0 = ((SafeAllocator*)(arg0 + Enum_ov017_021bb108_124))->GetSignedAllocator();
	if (var0 != NULL) {
		func_ov001_0215aa5c();
		void* var1 = ((SafeAllocator*)(arg0 + Enum_ov017_021bb108_292))->GetSignedAllocator();
		if (var1 != NULL) {
			((SafeAllocator*)(arg0 + Enum_ov017_021bb108_292))->Destroy();
			((SafeAllocator*)(arg0 + Enum_ov017_021bb108_124))->Free(var1);
		}
		void* var2 = ((SafeAllocator*)(arg0 + Enum_ov017_021bb108_124))->GetSignedAllocator();
		((SafeAllocator*)(arg0 + Enum_ov017_021bb108_124))->Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var2);
	}
	if (*(SafeAllocator**)(arg0 + Enum_ov017_021bb108_312) == NULL) return;
	void* var3 = (*(SafeAllocator**)(arg0 + Enum_ov017_021bb108_312))->GetSignedAllocator();
	if (var3 == NULL) return;
	(*(SafeAllocator**)(arg0 + Enum_ov017_021bb108_312))->Destroy();
	func_02012da4((AllocatorUnion*)&data_02114e20, var3);
	*(SafeAllocator**)(arg0 + Enum_ov017_021bb108_312) = NULL;
}
