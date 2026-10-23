#include <globaldefs.h>

// USA: func_ov031_0220781c
extern "C" ARM void func_ov031_0220781c(unsigned int arg0, unsigned char* arg1) {
	arg1[0] = (unsigned char)(arg0 >> 0x18);
	arg1[1] = (unsigned char)(arg0 >> 0x10);
	arg1[2] = (unsigned char)(arg0 >> 0x8);
	arg1[3] = (unsigned char)arg0;
}
