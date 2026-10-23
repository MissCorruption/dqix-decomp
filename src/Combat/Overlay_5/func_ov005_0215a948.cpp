#include <globaldefs.h>

extern unsigned char data_ov005_0215cd18[8];

// USA: func_ov005_0215a948
extern "C" ARM unsigned char func_ov005_0215a948(void *arg0, int arg1) {
	if ((unsigned int)arg1 >= 8) return 0;
	return data_ov005_0215cd18[arg1];
}
