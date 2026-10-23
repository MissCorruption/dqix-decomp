#include <globaldefs.h>

extern "C" void func_ov031_0223c078(int, int, int, int);
extern "C" void func_ov031_0223cb68(int, int);
extern "C" void func_ov031_02227520(int*, int*);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02233c40(void);

// USA: func_ov031_02233bd4
extern "C" ARM void func_ov031_02233bd4(void) {
	func_ov031_0223c078(2, 0, 0x15, 8);
	func_ov031_0223cb68(0, 0x15);
	int var0;
	func_ov031_02227520(0, &var0);
	if (var0 == 0) {
		func_ov031_0223c078(2, 1, 1, 8);
		func_ov031_0223cb68(1, 1);
	}
	func_ov031_022274c0((int)func_ov031_02233c40);
}
