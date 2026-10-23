#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern Vector3i data_0210a250;
extern Vector3i data_0210a25c;
extern Vector3i data_0210a268;
extern Matrix4x3 data_0210a05c;
struct Struct_0210a010_2 { char unknown_0_[0xfc]; int unknown_fc_; };
extern struct Struct_0210a010_2 data_0210a010;

// USA: func_ov017_02196048
extern "C" ARM void func_ov017_02196048(int* arg0, int* arg1, int* arg2) {
	data_0210a250 = *(Vector3i*)arg0;
	data_0210a25c = *(Vector3i*)arg1;
	data_0210a268 = *(Vector3i*)arg2;
	Mat4x3_WriteViewMatrix((Vector3i*)arg0, (Vector3i*)arg1, (Vector3i*)arg2, &data_0210a05c);
	data_0210a010.unknown_fc_ &= ~0xe8;
}
