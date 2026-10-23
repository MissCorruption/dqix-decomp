#include <globaldefs.h>

typedef void* (*Type_ov031_02240104)(int size, int align);
extern Type_ov031_02240104 data_ov031_02290fc4;

struct Struct_ov031_02240104 {
	struct Struct_ov031_02240104* unknown_0_;
	struct Struct_ov031_02240104* unknown_4_;
	int unknown_8_;
	int unknown_c_;
	int unknown_10_;
};
extern struct Struct_ov031_02240104* data_ov031_02290fdc;
extern int data_ov031_02290fd8;

// USA: func_ov031_02240104
extern "C" ARM int func_ov031_02240104(int arg0) {
	int var0 = -1;
	struct Struct_ov031_02240104* var1 = (struct Struct_ov031_02240104*)data_ov031_02290fc4(0x14, 4);

	if (var1 != NULL) {
		if (data_ov031_02290fdc == NULL) {
			var1->unknown_0_ = var1;
			var1->unknown_4_ = var1;
			*(struct Struct_ov031_02240104* volatile*)&data_ov031_02290fdc = var1;
		} else {
			var1->unknown_0_ = data_ov031_02290fdc->unknown_0_;
			var1->unknown_4_ = data_ov031_02290fdc;
			data_ov031_02290fdc->unknown_0_->unknown_4_ = var1;
			data_ov031_02290fdc->unknown_0_ = var1;
		}

		int var2 = *(volatile int*)&data_ov031_02290fd8;
		data_ov031_02290fd8 = *(volatile int*)&data_ov031_02290fd8 + 1;
		var1->unknown_8_ = var2;
		var1->unknown_c_ = arg0;
		var1->unknown_10_ = -1;
		var0 = var1->unknown_8_;
		if (data_ov031_02290fd8 < 0) {
			data_ov031_02290fd8 = 0;
		}
	}

	return var0;
}
