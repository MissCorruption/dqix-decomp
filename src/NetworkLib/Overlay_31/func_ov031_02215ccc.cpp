#include <globaldefs.h>

// USA: func_ov031_02215ccc
extern "C" ARM int func_ov031_02215ccc(int arg0) {
	int var0 = arg0 >> 2;
	if (!(arg0 & 2)) var0 += 0x19;
	return var0 & 0xff;
}
