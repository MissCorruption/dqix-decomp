#include <globaldefs.h>

// USA: func_ov025_021e8a40
extern "C" ARM void func_ov025_021e8a40(char* arg0, int arg1, int arg2) {
	*(int*)(arg0 + 0x10) = arg1;
	*(int*)(arg0 + 0x20) = arg2;
}
