#include <globaldefs.h>

extern "C" int func_020d59bc(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_ov027_021dd0cc(int arg0, int arg1);

// USA: func_ov027_021dcef8
extern "C" ARM int func_ov027_021dcef8(int arg0, int arg1, int arg2, int arg3, unsigned short arg4) {
	int var0 = func_020d59bc(arg0, 0, arg1, arg2, arg4, 1, 3);
	func_ov027_021dd0cc(0xf, var0);
	return var0;
}
