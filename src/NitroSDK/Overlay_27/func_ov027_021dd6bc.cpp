#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov027_021e3424_3 {
	unsigned char unknown_0_[4];
	char* unknown_4_;
	unsigned int unknown_8_;
	int unknown_c_;
};

extern Struct_ov027_021e3424_3 data_ov027_021e3424;

extern "C" int func_ov027_021dd864(int arg0);
extern "C" void* func_ov027_021dd7d8(void* arg0, int arg1);

#pragma optimize_for_size off
// USA: func_ov027_021dd6bc
extern "C" ARM void* func_ov027_021dd6bc(unsigned char* arg0, unsigned char* arg1, int arg2) {
	unsigned char var0 = arg0[0];
	arg1[0] = var0;
	unsigned char* var1;
	switch (var0) {
	case 7: {
		if (func_ov027_021dd864(arg2) == 0) goto notAllSet;
		return data_ov027_021e3424.unknown_4_ + (arg2 - 1) * 0x20;
	notAllSet:
		unsigned char var2 = arg0[1];
		arg1[2] = var2;
		if (var2 > data_ov027_021e3424.unknown_c_) {
			return 0;
		}
		VectorizedInvertedMemcpy(arg0 + 2, arg1 + 3, data_ov027_021e3424.unknown_8_);
		var1 = (unsigned char*)func_ov027_021dd7d8(arg1, arg2);
		break;
	}
	case 8: {
		var1 = arg0 + 3;
		*(unsigned short*)(arg1 + 2) = arg0[1];
		*(unsigned short*)(arg1 + 2) = *(unsigned short*)(arg1 + 2) | ((arg0[2] << 8) & 0xff00);
		break;
	}
	case 9: {
		var1 = arg0 + 3;
		*(unsigned short*)(arg1 + 2) = arg0[1];
		*(unsigned short*)(arg1 + 2) = *(unsigned short*)(arg1 + 2) | ((arg0[2] << 8) & 0xff00);
		VectorizedInvertedMemcpy(var1, arg1 + 4, data_ov027_021e3424.unknown_8_);
		var1 = var1 + data_ov027_021e3424.unknown_8_;
		break;
	}
	default:
		return 0;
	}
	return var1;
}
