#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov023_021fcfd0 {
	char unknown_0_[0x1c];
	int unknown_1c_;
};

// USA: func_ov023_021fcfd0
extern "C" ARM int func_ov023_021fcfd0(struct Struct_ov023_021fcfd0 *arg0) {
	((Object3D*)((char*)arg0 + 0x20))->AdvanceEffects();
	return arg0->unknown_1c_;
}
