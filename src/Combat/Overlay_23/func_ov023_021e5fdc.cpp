#include <globaldefs.h>

// USA: func_ov023_021e5fdc
extern "C" ARM void func_ov023_021e5fdc(void *arg0, short *arg1, short *arg2) {
	arg1[0] = arg2[0];
	arg1[1] = arg2[1];
	arg1[2] = arg2[2];
	arg1[3] = arg2[3];
	arg1[4] = arg2[3];
	arg1[5] = arg2[4];
	arg1[6] = arg2[5];
	arg1[7] = arg2[6];
	arg1[8] = arg2[7];
	arg1[9] = arg2[8];
	if (arg1[0] < 0) arg1[0] = 0x3e8;
	if (arg1[6] < 0) arg1[6] = 0x3e2;
	if (arg1[1] < 0) arg1[1] = 0x1f41;
	if (arg1[5] < 0) {
		arg1[5] = arg2[0xb];
		if (arg1[5] < 0) arg1[5] = 0x1f4a;
	}
}
