#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void* func_02012fe4(void);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
struct Struct_02028bac { unsigned char unknown_0_[0x318]; };
extern "C" struct Struct_02028bac* func_02028bac(struct Struct_02028bac* arg0, int arg1);
struct Struct_020288e0;
extern "C" void func_020289c4(struct Struct_020288e0* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

extern AllocatorUnion data_02114e20;

// USA: func_ov017_0219fec0
extern "C" ARM void func_ov017_0219fec0(void*) {
	func_02012fe4();
	struct Struct_020fdd44* var0 = func_02027ca4();
	struct Struct_02028bac* var1 = func_02028bac((struct Struct_02028bac*)var0, 0);
	func_020289c4((struct Struct_020288e0*)var1);
	void* var2 = (void*)(*(SafeAllocator**)((unsigned char*)var1 + 0x10))->GetSignedAllocator();
	if (var2) {
		(*(SafeAllocator**)((unsigned char*)var1 + 0x10))->Destroy();
		func_02012da4(&data_02114e20, var2);
	}
	for (int var3 = 0; var3 < 4; var3++) {
		struct Struct_02028bac* var4 = func_02028bac((struct Struct_02028bac*)var0, var3);
		void* var5 = func_02012d88(&data_02114e20, 0x28a0);
		SafeAllocator* var6 = *(SafeAllocator**)((unsigned char*)var4 + 0x10);
		var6->CreateTypeA(var5, 0x28a0);
	}
}
