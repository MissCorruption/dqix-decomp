#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02155480 func_ov006_02156b68
#define data_ov011_021889a0 data_ov011_02189700
#define data_ov013_02187dd8 data_ov013_02188cf0
#define func_ov006_02154fe4 func_ov006_02156730
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov002_021682c0 {
	SafeAllocator* unknown_0_;
};

extern int data_ov013_02187dd8[R(4,5)];

// USA: func_ov013_02186e74
extern "C" ARM void func_ov013_02186e74(struct Struct_ov002_021682c0* arg0, SafeAllocator* arg1) {
	unsigned char var0;

	if (arg1 == NULL) return;

	arg0->unknown_0_ = (SafeAllocator*)arg1->Allocate(R(0x50,0x64));

	for (var0 = 0; var0 < R(4,5); var0++) {
		SafeAllocator* var1 = (SafeAllocator*)((char*)arg0->unknown_0_ + var0 * 0x14);
		int var2;
		void* var3;
		var1->ResetAllocatorPointer();
		var2 = data_ov013_02187dd8[var0];
		var3 = arg1->Allocate(var2);
		var1->CreateTypeA(var3, var2);
	}
}
