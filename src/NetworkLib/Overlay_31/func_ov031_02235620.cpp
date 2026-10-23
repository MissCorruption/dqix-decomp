#include <globaldefs.h>

struct Struct_ov031_02235620 {
	short unknown_0_;
	short unknown_2_;
	short unknown_4_;
	short unknown_6_;
};

extern "C" void func_ov031_0223566c(int arg0, Struct_ov031_02235620* arg1);
extern "C" int func_ov031_0223d414(Struct_ov031_02235620* arg0);

// USA: func_ov031_02235620
extern "C" ARM int func_ov031_02235620(void) {
	int var0 = 2;
	Struct_ov031_02235620 var1;
	do {
		func_ov031_0223566c(var0, &var1);
		if (func_ov031_0223d414(&var1) != 0) return var0;
		var0++;
	} while (var0 <= 3);
	return 0;
}
