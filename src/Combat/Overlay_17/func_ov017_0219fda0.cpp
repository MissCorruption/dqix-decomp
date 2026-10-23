#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_02012fe4(void);
struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);
struct Struct_02028bac {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned char unknown_4_[0xc];
	SafeAllocator* unknown_10_;
#if defined(jpn)
	unsigned char unknown_14_[0x2f4];
#else
	unsigned char unknown1_14_[0x2f8];
#endif
	unsigned char unknown_30c_[0xc];
};
extern "C" struct Struct_02028bac* func_02028bac(struct Struct_02028bac* arg0, int arg1);
struct Struct_020288e0;
extern "C" void func_020289c4(struct Struct_020288e0* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020a8e88(void* arg0);
extern "C" void func_0200fd48(GameState* arg0, int arg1);
struct Struct_020a8e9c_3;
extern "C" void func_020a8e9c(Struct_020a8e9c_3*, SafeAllocator*, void*, unsigned int);

extern AllocatorUnion data_02114e20;
extern const char data_ov017_021d7638[];
extern unsigned char data_0211e33c[0x30000];
#pragma opt_propagation off

// USA: func_ov017_0219fda0
extern "C" ARM void func_ov017_0219fda0(void) {
	GameState* var0 = GameState::GetInstance();
	func_02012fe4();
	struct Struct_020fdd44* var1 = func_02027ca4();
	for (int var2 = 0; var2 < 4; var2++) {
		struct Struct_02028bac* var3 = func_02028bac((struct Struct_02028bac*)var1, var2);
		func_020289c4((struct Struct_020288e0*)var3);
		void* var4 = (void*)var3->unknown_10_->GetSignedAllocator();
		if (var4) {
			var3->unknown_10_->Destroy();
			func_02012da4(&data_02114e20, var4);
		}
	}
	for (int var5 = 0x70; var5 <= 0x9f; var5++) {
		func_0200fd48(var0, var5);
	}
	struct Struct_02028bac* var6 = func_02028bac((struct Struct_02028bac*)var1, 0);
	unsigned int var7 = 0xa000;
	var6->unknown_2_ |= 4;
	var6->unknown_0_ = 3;
	void* var8 = func_02012d88(&data_02114e20, var7);
	var6->unknown_10_->CreateTypeA(var8, var7);
	if (var6 == NULL) return;
	func_020a8e88(var6->unknown_30c_);
	BackgroundLoader::AddLockGlobal();
	unsigned int var9;
	if (LoadFileIntoMemory(data_ov017_021d7638, data_0211e33c, &var9) != NULL) {
		func_020a8e9c((Struct_020a8e9c_3*)var6->unknown_30c_, var6->unknown_10_, data_0211e33c, var9);
	}
	BackgroundLoader::RemoveLockGlobal();
}
