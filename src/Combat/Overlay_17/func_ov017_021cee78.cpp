#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
struct Vector3i;

struct Struct_ov017_021cee78 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_[3];
	unsigned short unknown_10_;
	unsigned char unknown_12_;
	unsigned char unknown_13_;
};

// USA: func_ov017_021cee78
extern "C" ARM void func_ov017_021cee78(int arg0, unsigned char arg1) {
	GameObject* var0 = GameState::GetInstance()->GetGameObjectByIndex(arg0);
	if (var0 == NULL) {
		return;
	}
	void* var1 = func_0202ae24();
	Struct_ov017_021cee78 var2;
	var2.unknown_0_ = 0x14;
	var2.unknown_12_ = arg0;
	*(Vector3i*)var2.unknown_4_ = *(Vector3i const*)(&var0->obj3D_.position_.x);
	var2.unknown_10_ = var0->obj3D_.rotation_.y;
	var2.unknown_13_ = arg1;
	func_0205e330(var1, &var2, 0);
}
