#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_ov017_0219dc90_4 {
	char unknown_0_[0xc];
	int unknown_c_;
};

// USA: func_ov017_021b4760
extern "C" ARM void func_ov017_021b4760(struct Struct_ov017_0219dc90_4* arg0) {
	int var0 = (int)BackgroundLoader::GetInstance();
	if (arg0->unknown_c_ <= -1) {
		return;
	}
	((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_c_));
	arg0->unknown_c_ = -1;
}
