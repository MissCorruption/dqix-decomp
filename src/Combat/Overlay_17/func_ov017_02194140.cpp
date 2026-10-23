#include <globaldefs.h>
#include "World/Object3D.h"

// USA: func_ov017_02194140
extern "C" ARM int func_ov017_02194140(Object3D* arg0, Object3D* arg1) {
	int var0 = arg0->GetHeight();
	int var1 = arg1->GetHeight();

	if (!(arg0->position_.y + var0 >= arg1->position_.y &&
	      arg1->position_.y + var1 >= arg0->position_.y)) return 0;

	int var2 = (arg0->GetRadius() >> 1) + (arg1->GetRadius() >> 1);

	if (var2 < fix32abs(arg0->position_.x - arg1->position_.x) ||
	    var2 < fix32abs(arg0->position_.z - arg1->position_.z)) return 0;

	int var3 = Vector3fix_Distance(&arg0->position_, &arg1->position_);
	return var2 >= var3;
}
