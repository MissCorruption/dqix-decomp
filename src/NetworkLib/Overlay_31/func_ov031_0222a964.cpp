#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int);
extern "C" int func_ov031_02227874(void);
extern "C" void* func_ov031_022277e4(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222a9c0(void);

extern unsigned char data_ov031_02290c78;

// USA: func_ov031_0222a964
extern "C" ARM void func_ov031_0222a964(void) {
	if (func_ov031_0223c054(1) != 0) return;
	if (func_ov031_0223c054(0) != 0) return;
	if (data_ov031_02290c78 == 0 && (&data_ov031_02290c78)[1] == 1) {
		func_ov031_02227874();
	} else {
		func_ov031_022277e4();
	}
	func_ov031_022274c0((int)func_ov031_0222a9c0);
}
