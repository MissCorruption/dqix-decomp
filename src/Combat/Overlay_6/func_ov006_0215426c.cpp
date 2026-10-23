#include <globaldefs.h>
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderConfig.h"

extern int data_ov006_02160380[3];
extern int data_ov006_0216038c[3];

struct Struct_ov006_0215426c {
	char unknown_0_[0x8];
	unsigned int unknown_8_;
	char unknown_c_[0xae - 0xc];
	unsigned char unknown_ae_;
};

// USA: func_ov006_0215426c
extern "C" ARM void func_ov006_0215426c(Struct_ov006_0215426c* arg0) {
	if (!(arg0->unknown_8_ & 0x10)) {
		return;
	}
	for (int var0 = 0; var0 < 3; var0++) {
		if (data_ov006_02160380[var0] == ((arg0->unknown_8_ & 0x10) ? arg0->unknown_ae_ : -1) && data_ov006_0216038c[var0] != 0) {
			GetCurrentPositionAndDirectionMatrices((Matrix4x3*)data_ov006_0216038c[var0], (Matrix3x3*)NULL);
			const Matrix4x3* var1 = RenderConfig::GetInverseViewMatrix();
			Mat4x3_Multiply((Matrix4x3*)data_ov006_0216038c[var0], var1, (Matrix4x3*)data_ov006_0216038c[var0]);
		}
	}
}
