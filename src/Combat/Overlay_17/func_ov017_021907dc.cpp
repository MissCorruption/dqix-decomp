#include <globaldefs.h>

struct Struct_ov017_021907dc { int unknown_0_[4]; };
extern "C" void func_ov017_02190884(int arg0, Struct_ov017_021907dc* arg1, int* arg2, int arg3, int arg4, int arg5);

// USA: func_ov017_021907dc
extern "C" ARM void func_ov017_021907dc(int arg0, int arg1, int arg2, int arg3, int arg4) {
	Struct_ov017_021907dc var0;
	int var1 = 0;
	func_ov017_02190884(arg1, &var0, &var1, arg2, arg3, arg4);
}
