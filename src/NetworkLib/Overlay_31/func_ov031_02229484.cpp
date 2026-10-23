#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void func_ov031_02222e40(int v);
extern "C" void func_ov031_0221ae00(void* buf);
extern "C" int func_ov031_02236878(int index);
extern "C" int func_ov031_02229748(void);
extern "C" void func_ov031_022274c0(int fn);
extern "C" void func_ov031_02229528(void);

struct Buf0221ae00_02229484 { unsigned long long u0; unsigned long long u1; int pad; };

struct DataC5c_02229484 { unsigned char idx; unsigned char flag; };
extern DataC5c_02229484 data_ov031_02290c5c;

// USA: func_ov031_02229484
extern "C" ARM void func_ov031_02229484(void) {
	int f16 = func_ov031_02222e0c();
	switch (f16) {
	case 0:
		func_ov031_02236878(7);
		break;
	case 1: {
		Buf0221ae00_02229484 buf;
		func_ov031_0221ae00(&buf);
		if (data_ov031_02290c5c.idx != 0 && buf.u0 == 0) {
			func_ov031_02236878(9);
			func_ov031_02222e40(-1);
			return;
		}
		func_ov031_02236878(6);
		func_ov031_02229748();
		data_ov031_02290c5c.flag = 1;
		break;
	}
	default:
		return;
	}
	func_ov031_022274c0((int)func_ov031_02229528);
}
