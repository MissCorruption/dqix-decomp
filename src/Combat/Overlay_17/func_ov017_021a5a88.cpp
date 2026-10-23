#include <globaldefs.h>

extern int data_ov017_021d83ac;
extern "C" void func_ov002_0216c2d8(int arg0, int arg1, int arg2, int arg3, unsigned char arg4);

// USA: func_ov017_021a5a88
extern "C" ARM void func_ov017_021a5a88(int arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
	if (data_ov017_021d83ac != 0) {
		func_ov002_0216c2d8(data_ov017_021d83ac, arg1, arg2, arg3, arg4);
	}
}
