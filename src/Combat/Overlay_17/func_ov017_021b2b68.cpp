#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_0219b624(void);

struct Struct_ov017_021b2b68 { char unknown_0_[0x8]; int unknown_8_; char unknown_c_[0x2c]; int unknown_38_; };

// USA: func_ov017_021b2b68
extern "C" ARM int func_ov017_021b2b68(struct Struct_ov017_021b2b68* arg0) {
	if (((BackgroundLoader*)((void*)(int)BackgroundLoader::GetInstance()))->GetNumQueuedTasks() > 0) {
		return arg0->unknown_8_;
	}
	GetGameResources();
	func_ov017_0219b624();
	arg0->unknown_38_ &= ~4;
	return 3;
}
