#include <globaldefs.h>

extern int data_ov017_021d8478;
extern "C" void func_ov003_02154fd0(void);

// USA: func_ov017_021c166c
extern "C" ARM void func_ov017_021c166c(void*) {
	if (data_ov017_021d8478 != 0) {
		func_ov003_02154fd0();
	}
}
