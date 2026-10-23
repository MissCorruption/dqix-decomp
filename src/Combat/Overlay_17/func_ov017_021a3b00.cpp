#include <globaldefs.h>

extern "C" void func_ov017_021b65bc(char* arg0);

// USA: func_ov017_021a3b00
extern "C" ARM void func_ov017_021a3b00(int arg0, char* arg1) {
	if (arg1 == NULL) return;
	if ((unsigned char)arg1[1] != 0) goto ret1;
	if ((signed char)arg1[0] != 0x16) goto ret2;
	func_ov017_021b65bc(arg1);
	return;
ret1:
	return;
ret2:
	return;
}
