#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct_ov014_021845ec {
	char unknown_0_[0x16];
	short unknown_16_;
	int unknown_18_;
	int unknown_1c_;
};

// USA: func_ov014_02188d10
extern "C" ARM int func_ov014_02188d10(struct Struct_ov014_021845ec* arg0) {
	int var0 = (int)BackgroundLoader::GetInstance();
	if (arg0->unknown_18_ >= 0) {
		((BackgroundLoader*)(var0))->RemoveTask((int)(arg0->unknown_18_));
		arg0->unknown_18_ = -1;
	}
	arg0->unknown_16_ = 0;
	arg0->unknown_1c_ = 0;
	return 1;
}
