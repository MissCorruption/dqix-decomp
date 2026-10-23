#include <globaldefs.h>
#include "World/Object3D.h"
#include "GameState/GameState.h"
struct GameObject;

struct Struct_02077788_2;
extern "C" int func_02077a20(struct Struct_02077788_2* arg0);

int fix32abs(int x);

// USA: func_ov017_02196fc8
extern "C" ARM int func_ov017_02196fc8(GameObject* arg0, GameObject* arg1, int arg2) {
	unsigned char* var0 = (unsigned char*)arg1;
	int var1 = arg0->obj3D_.GetRadius();
	int var2;

	if (arg1->obj3D_.unknown_0_ & 0x20) {
		int var3 = arg1->obj3D_.GetScale().x * 15;
		int var4 = func_02077a20((struct Struct_02077788_2*)var0) >> 1;
		var2 = (int)(((long long)var4 * var3 + 0x800) >> 12);
	} else {
		var2 = arg1->obj3D_.GetRadius() >> 1;
	}

	int var5 = arg2 + (var2 + (var1 >> 1));

	if (var5 < fix32abs(arg0->obj3D_.position_.x - arg1->obj3D_.position_.x)) return 0;
	if (var5 < fix32abs(arg0->obj3D_.position_.z - arg1->obj3D_.position_.z)) return 0;

	int var6 = Vector3fix_Distance(&arg0->obj3D_.position_, &arg1->obj3D_.position_);
	if (var5 < var6) return 0;

	return var6 != 0;
}
