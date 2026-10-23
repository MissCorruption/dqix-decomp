#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov001_021646b8 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_021646b8
extern "C" ARM int func_ov001_021646b8(Struct_ov001_021646b8* arg0, int arg1) {
	Struct_ov001_021646b8* var0;
	void* var1;
	if (arg1 < 0 || arg1 >= 0x20) return 0;
	var0 = &arg0[arg1];
	switch (var0->unknown_0_) {
	case 0:
	case 1:
	case 4:
	case 5:
		var1 = var0->unknown_c_;
		if (var1 == 0) return 0;
		((Object3D*)((unsigned char*)var1))->StopCurrentAnimation();
		return 1;
	case 6:
		var1 = var0->unknown_c_;
		if (var1 == 0) return 0;
		var1 = *(void**)((char*)var1 + 0x18);
		if (var1 == 0) return 0;
		((Object3D*)((unsigned char*)var1))->StopCurrentAnimation();
		return 1;
	default:
		return 0;
	}
}
