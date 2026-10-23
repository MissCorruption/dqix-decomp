#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov006_02158cfc { char unknown_0_[0x1c]; Struct_ov006_02158cfc *unknown_1c_; };
struct Struct_ov006_02158cfc_2 { char unknown_0_[R(0x24, 0x2c)]; Struct_ov006_02158cfc *unknown_2c_; Struct_ov006_02158cfc *unknown_30_; };

// USA: func_ov006_02158cfc
extern "C" ARM void func_ov006_02158cfc(Struct_ov006_02158cfc_2 *arg0, Struct_ov006_02158cfc *arg1) {
	Struct_ov006_02158cfc *var0 = arg0->unknown_2c_;
	Struct_ov006_02158cfc *var1 = var0;
	signed char var2 = 0;
	while (var0) {
		if (var2 % 16 == 0) { var1 = var0; var2 = 0; }
		if (var0 == arg1) break;
		var2++;
		var0 = var0->unknown_1c_;
	}
	arg0->unknown_30_ = var1;
}
