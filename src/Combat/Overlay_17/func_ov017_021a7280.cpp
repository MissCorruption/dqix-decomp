#include <globaldefs.h>

#if defined(jpn)
#define func_ov017_021a7280 func_ov017_021a7c28
#endif
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void* func_02057924(void* arg0);
extern "C" void func_02057f00(void* arg0, int arg1);
extern "C" void func_020a0c0c(void);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_0205ebec(void* arg0);

extern char data_02108760;
extern int data_02114e20;

struct Struct_ov017_021a7280 {
	char unknown_0_[0x30];
	SafeAllocator unknown_30_;
};

// USA: func_ov017_021a7280
extern "C" ARM void func_ov017_021a7280(struct Struct_ov017_021a7280* arg0) {
	func_02057f00(func_02057924(arg0), 0xd);

	func_020397c0(GameState::GetInstance()->GetUnknownGameObject());

	func_0205ebec(&data_02108760);

	void* var0 = arg0->unknown_30_.GetSignedAllocator();
	if (var0 != NULL) {
		arg0->unknown_30_.Destroy();
		func_02012da4((AllocatorUnion*)&data_02114e20, var0);
	}

	func_020a0c0c();
}
