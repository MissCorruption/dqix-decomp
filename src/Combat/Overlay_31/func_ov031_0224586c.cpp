#include <globaldefs.h>

extern int data_ov031_02291f24;

// USA: func_ov031_0224586c
extern "C" ARM void func_ov031_0224586c(int arg0) {
	*(int*)((char*)&data_ov031_02291f24 + 0xc) = arg0;
}
