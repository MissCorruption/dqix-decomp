#include <globaldefs.h>

extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" void func_ov004_0216b390(void* arg0, int arg1, int arg2);
extern unsigned char data_ov004_02171034;

// USA: func_ov004_0216b498
extern "C" ARM void func_ov004_0216b498(void* arg0, int arg1, int arg2) {
	int var0 = 1;
	switch (arg1) {
	case 0:
		func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 0x23, 0xc, 6, 0xa, var0);
		func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 0x35, 0xc, 0x13, 0xa, 1);
		func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 0x3c, 0xc, 0x20, 0xa, 1);
		break;
	case 1:
		if (arg2 == 0) {
			if (((unsigned char*)&data_ov004_02171034)[3] == 5) var0 = 0;
			func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 6, 0xa, var0);
			func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 3, 0xc, 0x13, 0xa, 1);
			func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 0x3c, 0xc, 0x20, 0xa, 1);
			func_ov004_0216b390(arg0, 0x34, arg2);
		} else {
			if (((unsigned char*)&data_ov004_02171034)[3] == 5) var0 = 0;
			func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 6, 0xa, var0);
			func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 3, 0xc, 0x13, 0xa, 1);
			func_ov004_0216afb0(arg0, 0x34, 1, 0xd2, 0x3c, 0xc, 0x20, 0xa, 1);
			func_ov004_0216b390(arg0, 0x34, arg2);
		}
		break;
	case 2:
		func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, var0, 0xc, 8, 0xa, var0);
		func_ov004_0216afb0(arg0, 0x33, 1, 0xd2, 0x3c, 0xc, 0x16, 0xa, 1);
		func_ov004_0216b390(arg0, 0x33, 3);
		break;
	case 3:
		func_ov004_0216afb0(arg0, 0x32, 1, 0xd2, 2, 0xc, 7, 0xa, var0);
		break;
	}
}
