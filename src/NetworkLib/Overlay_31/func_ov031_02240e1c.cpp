#include <globaldefs.h>

extern "C" void (* volatile data_ov031_02290fc8)(void*);

struct Struct_ov031_02240e1c {
	Struct_ov031_02240e1c* unknown_0_;
};

// USA: func_ov031_02240e1c
extern "C" ARM void func_ov031_02240e1c(Struct_ov031_02240e1c* arg0) {
	if (!arg0) return;
	do {
		Struct_ov031_02240e1c* var0 = arg0->unknown_0_;
		if (arg0 != var0) {
			Struct_ov031_02240e1c* var1 = *(Struct_ov031_02240e1c* *)&var0->unknown_0_;
			data_ov031_02290fc8(var0);
			arg0->unknown_0_ = var1;
		} else {
			data_ov031_02290fc8(arg0);
			arg0 = NULL;
		}
	} while (arg0);
}
