#include <globaldefs.h>

struct Struct_ov014_021891f0 {
	unsigned short unknown_0_;
	char unknown_2_[0xa];
	int* unknown_c_;
};

typedef int (*Type_ov014_021891f0)(struct Struct_ov014_021891f0*, int*);

// USA: func_ov014_021891f0
extern "C" ARM int func_ov014_021891f0(struct Struct_ov014_021891f0* arg0, Type_ov014_021891f0 arg1) {
	int var0;
	int* var1;
	if (arg0->unknown_c_ == 0 || arg0->unknown_0_ == 0 || arg1 == 0) return 0;
	var0 = arg0->unknown_0_;
	var1 = arg0->unknown_c_;
	int var2 = 0;
	while (var2 < var0) {
		arg1(arg0, var1);
		var2++;
		var1++;
	}
	return 1;
}
