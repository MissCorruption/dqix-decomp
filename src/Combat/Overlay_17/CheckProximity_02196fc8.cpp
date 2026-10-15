#include <globaldefs.h>
#include "World/Object3D.h"
#include "GameState/GameState.h"
struct GameObject;

struct Outer02077a20;
int GetField0x8OrDefault02077a20(struct Outer02077a20* p);

int fix32abs(int x);

// USA: func_ov017_02196fc8
ARM int CheckProximity_02196fc8(GameObject* arg0, GameObject* arg1, int extra) {
	unsigned char* other = (unsigned char*)arg1;
	int a = arg0->obj3D_.GetRadius();
	int half;

	if (arg1->obj3D_.unknown_0_ & 0x20) {
		int vx15 = arg1->obj3D_.GetScale().x * 15;
		int halfScale = GetField0x8OrDefault02077a20((struct Outer02077a20*)other) >> 1;
		half = (int)(((long long)halfScale * vx15 + 0x800) >> 12);
	} else {
		half = arg1->obj3D_.GetRadius() >> 1;
	}

	int dist = extra + (half + (a >> 1));

	if (dist < fix32abs(arg0->obj3D_.position_.x - arg1->obj3D_.position_.x)) return 0;
	if (dist < fix32abs(arg0->obj3D_.position_.z - arg1->obj3D_.position_.z)) return 0;

	int d = Vector3fix_Distance(&arg0->obj3D_.position_, &arg1->obj3D_.position_);
	if (dist < d) return 0;

	return d != 0;
}
