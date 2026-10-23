#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov023_021fcfe8 { char unknown_0_[0xc]; unsigned char unknown_c_; };

// USA: func_ov023_021fcfe8
extern "C" ARM void func_ov023_021fcfe8(struct Struct_ov023_021fcfe8* arg0) {
	if (arg0->unknown_c_ & 8) return;
	((Object3D*)((char*)arg0 + 0x20))->Draw(1);
}
